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
#line 5 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:339  */

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
#line 174 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:355  */

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
    IMPORT = 322,
    if_h = 323,
    expr_1 = 324,
    p_type_expr_prec = 325,
    long_id_prec = 326,
    try_prec = 327
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 177 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:355  */

	
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
	   

#line 303 "yacc.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_YACC_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 318 "yacc.cpp" /* yacc.c:358  */

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
#define YYFINAL  28
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   927

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  100
/* YYNRULES -- Number of rules.  */
#define YYNRULES  266
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  484

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   327

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
      65,    66,    67,    68,    69,    70,    71,    72
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   207,   207,   210,   211,   212,   214,   215,   216,   217,
     218,   220,   229,   234,   239,   240,   242,   244,   250,   254,
     259,   264,   268,   270,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   288,   295,   298,   302,   307,   308,
     312,   313,   314,   315,   316,   317,   320,   321,   324,   325,
     326,   329,   332,   340,   351,   352,   353,   358,   361,   364,
     368,   372,   376,   377,   380,   386,   387,   388,   390,   398,
     405,   409,   415,   416,   417,   418,   419,   420,   421,   422,
     425,   426,   427,   431,   432,   433,   434,   438,   447,   458,
     467,   478,   487,   495,   503,   511,   519,   529,   540,   545,
     549,   550,   553,   557,   563,   566,   568,   573,   578,   584,
     592,   593,   597,   605,   606,   609,   618,   627,   631,   633,
     639,   647,   653,   657,   666,   679,   682,   687,   693,   699,
     702,   708,   711,   712,   715,   716,   719,   728,   739,   749,
     758,   765,   777,   781,   785,   791,   796,   805,   809,   813,
     819,   828,   831,   835,   837,   840,   845,   850,   856,   862,
     869,   873,   874,   877,   880,   887,   896,   899,   904,   907,
     910,   915,   920,   923,   941,   947,   951,   955,   960,   964,
     968,   973,   979,   990,   993,   998,  1001,  1004,  1007,  1010,
    1013,  1016,  1019,  1022,  1026,  1029,  1032,  1037,  1040,  1045,
    1052,  1056,  1060,  1070,  1076,  1080,  1083,  1086,  1089,  1093,
    1097,  1100,  1104,  1105,  1106,  1107,  1108,  1109,  1116,  1129,
    1141,  1147,  1157,  1161,  1168,  1173,  1179,  1183,  1185,  1190,
    1198,  1204,  1209,  1212,  1216,  1221,  1226,  1232,  1235,  1236,
    1237,  1238,  1241,  1242,  1245,  1246,  1247,  1250,  1251,  1252,
    1254,  1262,  1268,  1276,  1284,  1290,  1293,  1299,  1306,  1311,
    1316,  1321,  1328,  1332,  1337,  1338,  1341
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
  "FINALLY", "AT_ASM", "SELF", "IMPORT", "if_h", "expr_1",
  "p_type_expr_prec", "long_id_prec", "try_prec", "$accept", "program",
  "components", "component", "class_interface", "class_interface_header",
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
     325,   326,   327
};
# endif

#define YYPACT_NINF -419

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-419)))

#define YYTABLE_NINF -66

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-66)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     114,    30,   146,    38,    42,    74,    86,   -17,   101,   121,
    -419,  -419,   298,    89,  -419,  -419,   330,  -419,   337,  -419,
    -419,  -419,   122,   130,   217,  -419,  -419,   178,  -419,  -419,
     600,   189,  -419,    12,   203,  -419,   159,   112,   166,  -419,
    -419,  -419,   247,  -419,   203,   203,   283,  -419,   303,  -419,
    -419,   244,  -419,   244,  -419,   315,   391,  -419,   162,   237,
    -419,   270,  -419,   279,  -419,  -419,  -419,  -419,  -419,  -419,
    -419,  -419,  -419,   502,  -419,   321,   353,   364,  -419,   869,
     869,  -419,   309,  -419,  -419,  -419,  -419,  -419,    43,   361,
     502,   369,   373,   380,  -419,   369,   419,  -419,   175,   177,
    -419,  -419,   202,  -419,  -419,  -419,   869,   157,   368,  -419,
     869,   369,   369,  -419,   426,  -419,  -419,  -419,  -419,   325,
    -419,  -419,   445,  -419,  -419,  -419,  -419,    -9,   375,  -419,
     363,   362,   381,  -419,  -419,  -419,   869,   355,    44,   277,
    -419,  -419,   420,  -419,   203,   399,   137,  -419,   361,  -419,
     423,  -419,   463,  -419,  -419,   257,  -419,  -419,  -419,  -419,
    -419,   285,   421,  -419,   233,   181,  -419,  -419,  -419,  -419,
     275,   279,  -419,   502,   415,   422,   428,  -419,   429,   442,
    -419,   829,   533,   430,   385,  -419,  -419,   387,  -419,  -419,
    -419,  -419,  -419,  -419,   533,  -419,   533,   449,    85,     1,
     454,  -419,   533,  -419,   533,     9,  -419,  -419,  -419,   270,
     829,   456,    44,   319,  -419,  -419,   -22,  -419,  -419,  -419,
      57,  -419,   424,  -419,   468,   480,  -419,  -419,  -419,  -419,
    -419,  -419,  -419,  -419,  -419,  -419,   472,   475,  -419,   327,
    -419,   265,  -419,  -419,   385,   261,   705,   705,   486,   109,
     230,   629,  -419,  -419,  -419,  -419,   488,   493,   829,   487,
    -419,    85,   225,  -419,   489,   436,   490,   355,   243,   213,
    -419,  -419,  -419,   459,  -419,  -419,   829,   499,  -419,  -419,
     500,  -419,  -419,   448,  -419,   829,   509,  -419,    56,  -419,
     498,  -419,   503,  -419,  -419,  -419,   455,  -419,   469,  -419,
     355,  -419,  -419,   203,   508,  -419,  -419,  -419,   516,  -419,
     234,   491,   525,   662,   519,   593,   829,  -419,  -419,   371,
     282,   378,   506,  -419,  -419,   230,   477,   195,  -419,  -419,
     225,  -419,   829,   829,   829,   829,   528,   141,  -419,   504,
     829,   504,  -419,   385,  -419,   385,   535,   225,  -419,   542,
     496,   546,  -419,   533,   548,   413,  -419,  -419,   534,  -419,
     270,  -419,    16,  -419,  -419,  -419,   829,   513,   758,   144,
     673,   464,   195,  -419,  -419,   705,   705,   829,   829,   829,
     829,   829,   829,  -419,   541,  -419,   231,   231,  -419,  -419,
     502,   543,   533,  -419,   545,  -419,  -419,  -419,  -419,  -419,
    -419,   829,  -419,   542,  -419,  -419,   473,   547,   514,  -419,
    -419,   510,   512,  -419,   829,  -419,   538,   776,   790,   183,
    -419,   314,   314,  -419,  -419,  -419,  -419,  -419,  -419,  -419,
    -419,   562,   502,  -419,   737,  -419,  -419,   563,  -419,   556,
     520,  -419,   559,  -419,  -419,  -419,  -419,  -419,   544,  -419,
     553,   808,   555,   570,   744,  -419,   558,   564,   829,  -419,
     574,  -419,  -419,  -419,  -419,   554,   533,   569,   571,   573,
    -419,   797,  -419,  -419,  -419,  -419,   533,   797,   575,  -419,
    -419,  -419,   797,  -419
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       4,     6,     0,     0,     9,     7,     0,     8,     0,    10,
      14,    15,    13,   127,     0,   251,    71,     0,     1,     3,
       0,     0,    24,     0,     0,    11,     0,     0,     0,   109,
     110,   111,     0,   131,     0,     0,     0,   125,     0,   133,
     134,     0,   135,     0,   255,     0,     0,   250,     0,     0,
     257,     0,     5,     0,    94,    93,    92,    96,    91,    56,
      55,    54,    47,     0,    95,     0,     0,     0,    49,    50,
       0,    53,     0,    85,    86,    83,    84,    37,     0,   118,
       0,     0,     0,   117,   120,     0,    27,    21,     0,     0,
      32,    22,     0,    33,    23,   108,     0,     0,     0,    69,
      57,     0,     0,   129,     0,   130,   132,   141,   136,     0,
     138,   254,     0,   253,    16,    12,   126,   260,     0,    97,
       0,    89,    87,    46,    48,    52,    51,    63,     0,     0,
      62,    35,     0,    34,     0,     0,     0,   114,     0,   119,
       0,    25,     0,    29,    18,     0,    30,    19,    31,    20,
      70,     0,    81,    74,     0,     0,    68,   137,   139,   128,
       0,   202,   143,     0,     0,     0,     0,   172,     0,     0,
     218,     0,     0,     0,     0,   151,   140,     0,   146,   154,
     150,   152,   147,   170,     0,   168,     0,     0,     0,     0,
     201,   169,     0,   148,     0,     0,   160,   153,   252,     0,
       0,     0,     0,     0,    90,    88,     0,    66,   100,    67,
       0,    58,     0,    36,     0,   121,   123,   116,   113,   112,
     115,    26,    28,    17,    78,    82,     0,     0,    72,     0,
      75,     0,   156,   144,     0,     0,     0,     0,     0,    89,
     202,     0,   203,   205,   206,   204,     0,     0,     0,     0,
     197,   207,   198,   201,     0,     0,     0,     0,   107,     0,
     162,   142,   145,     0,   173,   149,     0,     0,   221,   220,
       0,   155,   230,   232,   241,     0,     0,   234,     0,   243,
       0,   261,   259,   256,    64,    59,     0,   103,    98,    60,
       0,    61,   124,     0,     0,    80,    76,    79,     0,    73,
       0,   184,     0,     0,     0,     0,     0,   195,   196,     0,
       0,     0,     0,   213,   214,   202,   207,     0,   215,   216,
     217,   167,     0,     0,     0,     0,     0,   263,   157,   105,
       0,   105,   165,     0,   158,     0,     0,   199,   200,   222,
       0,   223,   225,     0,     0,     0,   239,   242,     0,   240,
       0,   102,     0,   122,    77,   159,     0,     0,     0,     0,
       0,     0,   198,   191,   231,     0,     0,     0,     0,     0,
       0,     0,     0,   235,     0,   212,   208,   209,   210,   211,
       0,     0,     0,   262,     0,   166,   106,   164,   163,   161,
     171,     0,   219,     0,   224,   233,     0,     0,   248,   238,
     258,     0,     0,   183,     0,   181,     0,     0,     0,     0,
     192,   193,   194,   185,   186,   187,   188,   189,   190,   237,
     236,     0,     0,   266,     0,   104,   229,   226,   228,     0,
     245,   249,     0,   101,    99,   182,   180,   179,     0,   178,
       0,     0,     0,     0,     0,    39,     0,    41,     0,   246,
       0,   247,   175,   176,   177,     0,     0,     0,    42,     0,
      38,     0,   227,   244,   174,   264,     0,     0,    44,    40,
     265,    45,     0,    43
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -419,  -419,  -419,   578,  -419,  -419,  -419,   576,  -419,  -419,
    -418,    -5,  -419,   515,   531,  -419,  -419,   -39,   466,   383,
    -419,  -419,  -419,  -144,   -30,  -419,  -419,  -419,  -419,  -114,
    -419,  -419,   271,  -419,   -14,    10,  -419,  -419,   -26,    28,
    -419,   527,  -419,   318,  -419,  -419,  -419,   572,   -15,  -419,
    -419,  -419,  -419,   299,  -419,  -419,  -419,  -167,  -419,  -419,
     382,    68,  -419,  -419,  -419,  -419,  -419,  -419,  -419,  -219,
    -171,   -94,  -117,  -204,  -419,  -113,  -419,  -419,  -419,   278,
    -419,   172,  -419,   358,  -419,  -419,  -419,  -419,  -419,  -419,
     346,   352,  -419,  -419,  -419,   107,  -208,  -419,  -419,  -419
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,     9,    10,    11,    12,    35,    36,    88,   435,
     456,    37,    77,    78,    79,    80,   108,    81,   139,   140,
     110,    13,    14,   164,   184,    83,    84,    85,    86,   217,
     298,   218,   395,   342,    38,    39,    40,    41,   258,    92,
      93,    94,   225,   226,    15,    16,    47,    48,    49,    50,
      51,    52,    53,   185,   119,   186,   187,   188,   189,   190,
     269,   270,   191,   192,   193,   194,   195,   196,   314,   319,
     320,   260,   261,   262,   199,   263,   280,   350,   351,   352,
     437,   438,   201,   202,   203,   204,   205,   430,   287,   288,
     289,   290,    17,    18,    57,   206,   128,   207,   337,   393
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      82,   291,   198,   109,    56,   278,   200,    91,    95,   209,
     259,    46,    82,   296,    27,   265,    89,   411,   111,   112,
     272,   241,    99,   102,   220,   197,   284,   273,   321,   274,
     297,    98,   210,   116,    20,   282,   469,   283,    90,   292,
     135,   122,    23,   130,   141,   219,    24,   327,   105,    82,
      82,   412,   180,   479,   330,   -65,   285,   286,   299,   481,
     145,   142,   -65,   143,   483,   198,   105,   160,   -64,   200,
     198,   166,   347,   356,   200,   -64,    82,   198,    25,   198,
      82,   200,   152,   200,   155,   198,   279,   198,   197,   200,
      26,   200,   305,   197,   369,   216,   371,   135,   294,   116,
     197,    28,   197,   285,   286,    42,    82,    19,   197,   105,
     197,   372,   105,   100,   354,     1,    19,     2,   224,   146,
      60,    -2,     1,   150,     2,    61,   276,    58,   386,   387,
     388,   389,   105,   101,   326,    59,    33,    34,   228,   167,
     168,   326,     3,   244,   277,   373,   214,    21,   229,     3,
      22,   419,   410,   339,   341,   417,   421,   422,   161,   326,
      96,   162,   105,   124,     4,   105,   125,   103,   163,   396,
       5,     4,     6,   375,   376,    30,   153,     5,   156,     6,
      97,     7,   239,    33,    34,   162,   405,   104,   408,    62,
      33,    34,   240,    87,   451,   413,   154,   416,   157,    33,
      34,    33,    34,   158,   391,   392,   423,   424,   425,   426,
     427,   428,   375,   376,   343,   326,   326,   326,   326,   332,
     333,   145,   385,   159,   344,   433,    33,    34,    60,    90,
     436,   345,   334,    61,   237,   343,   198,   335,   198,   440,
     200,   126,   200,   445,   238,   365,   448,   450,   106,   332,
     333,    63,   345,    64,    65,    66,    67,    68,   232,   197,
     117,   197,   334,   457,   107,   311,   308,   335,   334,    73,
      74,   312,   313,   335,   127,   198,   309,   224,   233,   200,
     465,    33,    34,   457,   340,   145,   242,   436,   221,   198,
     323,   324,   243,   200,   216,   222,   234,    75,   197,   475,
     457,   377,   378,   235,   113,    76,   457,    44,    45,   480,
     137,   457,   197,   138,    30,   379,   129,    31,   380,    32,
     381,   382,    33,    34,   115,   131,   170,    44,    45,   171,
     295,    64,    65,    66,    67,    68,   121,   222,   307,    33,
      34,   117,   172,   -66,   -66,   235,    30,   173,    74,   198,
     118,    43,   120,   200,    44,    45,    31,   132,    54,   198,
     431,    33,    34,   200,   137,   174,   144,   212,   175,   176,
     177,   178,   197,    89,   147,   179,   180,    69,    70,    71,
     181,   133,   197,    76,   148,   165,   267,   182,   264,   268,
     183,   171,   211,    64,    65,    66,    67,    68,   374,   214,
     375,   376,   453,   117,   271,   383,   216,   375,   376,   173,
      74,   398,   123,   399,   264,    33,    34,   171,   215,    64,
      65,    66,    67,    68,   223,   300,   227,   174,   212,   117,
     175,   176,   177,   178,   230,   173,    74,   179,   180,   236,
     151,   245,   181,    33,    34,    76,   249,   169,   246,   182,
      44,    45,   183,   174,   247,   248,   175,   176,   177,   178,
     275,   266,   407,   179,   180,   281,   208,   293,   181,    33,
      34,    76,   302,   304,   264,   182,   162,   171,   183,    64,
      65,    66,    67,    68,   231,   303,   306,    33,    34,   117,
     322,   420,   328,   375,   376,   173,    74,   329,   331,   336,
     242,   338,   175,   348,   349,   353,    63,   361,    64,    65,
      66,    67,    68,   174,   355,   359,   175,   176,   177,   178,
     362,   360,   439,   179,   180,    74,   235,   364,   181,   367,
     370,    76,   366,   384,   264,   182,   277,   171,   183,    64,
      65,    66,    67,    68,   390,   394,   400,   401,   402,   117,
     403,   409,    75,   406,   414,   173,    74,   429,   441,   432,
      76,   434,   443,   442,   444,   446,   452,   459,   458,   460,
     461,   462,   466,   174,   467,   470,   175,   176,   177,   178,
     463,   474,   471,   179,   180,   473,   476,    29,   181,   477,
     478,    76,   134,   482,    55,   182,   213,   325,   183,    64,
      65,    66,    67,    68,    63,   301,    64,    65,    66,    67,
      68,   136,   397,    69,    70,    71,    74,    72,   114,   315,
     149,   363,    73,    74,   252,   253,   310,   254,   255,   404,
     472,   346,   316,   325,   357,    64,    65,    66,    67,    68,
     358,     0,     0,    75,   180,     0,   317,   318,     0,     0,
      75,    76,    74,   256,   257,   251,     0,     0,    76,     0,
     252,   253,     0,   254,   255,     0,   250,     0,     0,     0,
       0,     0,     0,   368,     0,     0,     0,   250,     0,    75,
     180,     0,     0,     0,   418,     0,     0,    76,   315,   256,
     257,     0,     0,   252,   253,     0,   254,   255,     0,   315,
       0,   316,     0,     0,   252,   253,     0,   254,   255,   250,
       0,     0,   316,   180,     0,   317,   318,     0,     0,     0,
       0,     0,   256,   257,   180,     0,   317,   318,     0,     0,
       0,   315,     0,   256,   257,     0,   252,   253,     0,   254,
     255,   250,     0,     0,   316,     0,     0,     0,   250,     0,
       0,     0,     0,   454,   455,     0,   180,     0,   317,   318,
     454,   468,   250,   251,     0,   256,   257,     0,   252,   253,
     251,   254,   255,     0,     0,   252,   253,     0,   254,   255,
     250,     0,     0,     0,   251,   415,     0,     0,   180,   252,
     253,     0,   254,   255,   250,   180,     0,   256,   257,     0,
       0,   250,   251,   447,   256,   257,     0,   252,   253,   180,
     254,   255,   250,   454,     0,     0,   251,   449,   256,   257,
       0,   252,   253,   251,   254,   255,     0,   180,   252,   253,
       0,   254,   255,   250,   251,   464,   256,   257,     0,   252,
     253,   180,   254,   255,     0,     0,     0,     0,   180,     0,
     256,   257,     0,     0,     0,   251,     0,   256,   257,   180,
     252,   253,     0,   254,   255,     0,     0,     0,   256,   257,
       0,     0,     0,    63,     0,    64,    65,    66,    67,    68,
     180,     0,     0,     0,     0,     0,     0,     0,     0,   256,
     257,    73,    74,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    75,
       0,     0,     0,     0,     0,     0,     0,    76
};

static const yytype_int16 yycheck[] =
{
      30,   209,   119,    42,    18,     4,   119,    33,    34,    18,
     181,    16,    42,    35,    31,   182,     4,     1,    44,    45,
     187,   165,    36,    37,   138,   119,    17,   194,   247,   196,
      52,    36,    41,    48,     4,   202,   454,   204,    26,   210,
      79,    55,     4,    73,     1,     1,     4,   251,    38,    79,
      80,    35,    51,   471,   258,    11,    47,    48,     1,   477,
      90,    18,    18,    20,   482,   182,    56,   106,    11,   182,
     187,   110,   276,    17,   187,    18,   106,   194,     4,   196,
     110,   194,    96,   196,    98,   202,   199,   204,   182,   202,
       4,   204,   236,   187,   313,    51,   315,   136,   212,   114,
     194,     0,   196,    47,    48,    16,   136,     0,   202,    99,
     204,   315,   102,     1,   285,     1,     9,     3,   144,    91,
      11,     0,     1,    95,     3,    16,    41,     5,   332,   333,
     334,   335,   122,    21,   251,     5,    24,    25,     1,   111,
     112,   258,    28,   173,    59,   316,    37,     1,    11,    28,
       4,   370,   360,   267,   268,    11,   375,   376,     1,   276,
       1,     4,   152,     1,    50,   155,     4,     1,    11,   340,
      56,    50,    58,    29,    30,    16,     1,    56,     1,    58,
      21,    67,     1,    24,    25,     4,   353,    21,   355,    11,
      24,    25,    11,     4,    11,   366,    21,   368,    21,    24,
      25,    24,    25,     1,    63,    64,   377,   378,   379,   380,
     381,   382,    29,    30,     1,   332,   333,   334,   335,    24,
      25,   251,    27,    21,    11,   392,    24,    25,    11,    26,
     401,    18,    37,    16,     1,     1,   353,    42,   355,   406,
     353,     4,   355,   414,    11,    11,   417,   418,     1,    24,
      25,     4,    18,     6,     7,     8,     9,    10,     1,   353,
      16,   355,    37,   434,    17,     4,     1,    42,    37,    22,
      23,    10,    11,    42,     4,   392,    11,   303,    21,   392,
     451,    24,    25,   454,    41,   315,    11,   458,    11,   406,
      60,    61,    17,   406,    51,    18,    11,    50,   392,   466,
     471,    19,    20,    18,    21,    58,   477,    24,    25,   476,
       1,   482,   406,     4,    16,    33,    37,    19,    36,    21,
      38,    39,    24,    25,    21,     4,     1,    24,    25,     4,
      11,     6,     7,     8,     9,    10,    21,    18,    11,    24,
      25,    16,    17,    29,    30,    18,    16,    22,    23,   466,
      51,    21,    53,   466,    24,    25,    19,     4,    21,   476,
     390,    24,    25,   476,     1,    40,     5,     4,    43,    44,
      45,    46,   466,     4,     1,    50,    51,    13,    14,    15,
      55,    17,   476,    58,     4,    17,     1,    62,     1,     4,
      65,     4,    17,     6,     7,     8,     9,    10,    27,    37,
      29,    30,   432,    16,    17,    27,    51,    29,    30,    22,
      23,   343,    21,   345,     1,    24,    25,     4,    37,     6,
       7,     8,     9,    10,     4,     1,    27,    40,     4,    16,
      43,    44,    45,    46,    11,    22,    23,    50,    51,    18,
      21,    26,    55,    24,    25,    58,     4,    21,    26,    62,
      24,    25,    65,    40,    26,    26,    43,    44,    45,    46,
      11,    31,    49,    50,    51,    11,    21,    11,    55,    24,
      25,    58,     4,     1,     1,    62,     4,     4,    65,     6,
       7,     8,     9,    10,    21,     5,    11,    24,    25,    16,
       4,    27,     4,    29,    30,    22,    23,     4,    11,    63,
      11,    11,    43,     4,     4,    57,     4,    52,     6,     7,
       8,     9,    10,    40,     5,    17,    43,    44,    45,    46,
      51,    18,    49,    50,    51,    23,    18,    11,    55,     4,
      11,    58,    41,    27,     1,    62,    59,     4,    65,     6,
       7,     8,     9,    10,    16,    41,    11,     5,    52,    16,
       4,    17,    50,     5,    41,    22,    23,    16,    11,    16,
      58,    16,    52,    49,    52,    27,     4,    11,     5,    49,
      11,    27,    17,    40,     4,    17,    43,    44,    45,    46,
      27,    27,    18,    50,    51,    11,    17,     9,    55,    18,
      17,    58,    77,    18,    18,    62,   130,     4,    65,     6,
       7,     8,     9,    10,     4,   222,     6,     7,     8,     9,
      10,    80,   341,    13,    14,    15,    23,    17,    46,    26,
      93,   303,    22,    23,    31,    32,   244,    34,    35,   351,
     458,   273,    39,     4,   288,     6,     7,     8,     9,    10,
     288,    -1,    -1,    50,    51,    -1,    53,    54,    -1,    -1,
      50,    58,    23,    60,    61,    26,    -1,    -1,    58,    -1,
      31,    32,    -1,    34,    35,    -1,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    11,    -1,    -1,    -1,     4,    -1,    50,
      51,    -1,    -1,    -1,    11,    -1,    -1,    58,    26,    60,
      61,    -1,    -1,    31,    32,    -1,    34,    35,    -1,    26,
      -1,    39,    -1,    -1,    31,    32,    -1,    34,    35,     4,
      -1,    -1,    39,    51,    -1,    53,    54,    -1,    -1,    -1,
      -1,    -1,    60,    61,    51,    -1,    53,    54,    -1,    -1,
      -1,    26,    -1,    60,    61,    -1,    31,    32,    -1,    34,
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
      32,    51,    34,    35,    -1,    -1,    -1,    -1,    51,    -1,
      60,    61,    -1,    -1,    -1,    26,    -1,    60,    61,    51,
      31,    32,    -1,    34,    35,    -1,    -1,    -1,    60,    61,
      -1,    -1,    -1,     4,    -1,     6,     7,     8,     9,    10,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,
      61,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,    28,    50,    56,    58,    67,    74,    75,
      76,    77,    78,    94,    95,   117,   118,   165,   166,   168,
       4,     1,     4,     4,     4,     4,     4,    31,     0,    76,
      16,    19,    21,    24,    25,    79,    80,    84,   107,   108,
     109,   110,    16,    21,    24,    25,    84,   119,   120,   121,
     122,   123,   124,   125,    21,    80,   107,   167,     5,     5,
      11,    16,    11,     4,     6,     7,     8,     9,    10,    13,
      14,    15,    17,    22,    23,    50,    58,    85,    86,    87,
      88,    90,    97,    98,    99,   100,   101,     4,    81,     4,
      26,   111,   112,   113,   114,   111,     1,    21,    84,   107,
       1,    21,   107,     1,    21,   108,     1,    17,    89,    90,
      93,   111,   111,    21,   120,    21,   121,    16,   126,   127,
     126,    21,   107,    21,     1,     4,     4,     4,   169,    37,
      97,     4,     4,    17,    86,    90,    87,     1,     4,    91,
      92,     1,    18,    20,     5,    97,   112,     1,     4,   114,
     112,    21,   107,     1,    21,   107,     1,    21,     1,    21,
      90,     1,     4,    11,    96,    17,    90,   112,   112,    21,
       1,     4,    17,    22,    40,    43,    44,    45,    46,    50,
      51,    55,    62,    65,    97,   126,   128,   129,   130,   131,
     132,   135,   136,   137,   138,   139,   140,   144,   145,   147,
     148,   155,   156,   157,   158,   159,   168,   170,    21,    18,
      41,    17,     4,    91,    37,    37,    51,   102,   104,     1,
     102,    11,    18,     4,   111,   115,   116,    27,     1,    11,
      11,    21,     1,    21,    11,    18,    18,     1,    11,     1,
      11,    96,    11,    17,    97,    26,    26,    26,    26,     4,
       4,    26,    31,    32,    34,    35,    60,    61,   111,   143,
     144,   145,   146,   148,     1,   130,    31,     1,     4,   133,
     134,    17,   130,   130,   130,    11,    41,    59,     4,   148,
     149,    11,   130,   130,    17,    47,    48,   161,   162,   163,
     164,   169,   143,    11,   102,    11,    35,    52,   103,     1,
       1,    92,     4,     5,     1,    96,    11,    11,     1,    11,
     133,     4,    10,    11,   141,    26,    39,    53,    54,   142,
     143,   142,     4,    60,    61,     4,   145,   146,     4,     4,
     146,    11,    24,    25,    37,    42,    63,   171,    11,   102,
      41,   102,   106,     1,    11,    18,   156,   146,     4,     4,
     150,   151,   152,    57,   143,     5,    17,   163,   164,    17,
      18,    52,    51,   116,    11,    11,    41,     4,    11,   142,
      11,   142,   146,   143,    27,    29,    30,    19,    20,    33,
      36,    38,    39,    27,    27,    27,   146,   146,   146,   146,
      16,    63,    64,   172,    41,   105,   143,   105,   134,   134,
      11,     5,    52,     4,   152,   130,     5,    49,   130,    17,
     169,     1,    35,   143,    41,    27,   143,    11,    11,   142,
      27,   142,   142,   143,   143,   143,   143,   143,   143,    16,
     160,    97,    16,   130,    16,    82,   143,   153,   154,    49,
     130,    11,    49,    52,    52,   143,    27,    27,   143,    27,
     143,    11,     4,    97,    16,    17,    83,   143,     5,    11,
      49,    11,    27,    27,    27,   143,    17,     4,    17,    83,
      17,    18,   154,    11,    27,   130,    17,    18,    17,    83,
     130,    83,    18,    83
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    73,    74,    75,    75,    75,    76,    76,    76,    76,
      76,    77,    78,    78,    78,    78,    78,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    80,    80,    81,    81,    82,    82,
      83,    83,    83,    83,    83,    83,    84,    84,    85,    85,
      85,    86,    87,    87,    88,    88,    88,    89,    90,    90,
      90,    91,    91,    91,    92,    92,    92,    92,    93,    93,
      93,    94,    95,    95,    95,    95,    95,    95,    95,    95,
      96,    96,    96,    97,    97,    97,    97,    98,    98,    99,
      99,   100,   100,   100,   100,   100,   100,   101,   102,   103,
     103,   103,   104,   104,   105,   105,   106,   106,   107,   107,
     108,   108,   109,   109,   109,   110,   111,   112,   112,   113,
     113,   114,   115,   115,   116,   117,   118,   118,   119,   119,
     119,   119,   120,   120,   121,   121,   122,   123,   124,   125,
     126,   127,   128,   128,   128,   129,   129,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   131,   132,   132,
     132,   133,   133,   133,   134,   134,   134,   135,   136,   136,
     136,   137,   138,   139,   140,   140,   140,   140,   140,   140,
     140,   140,   141,   141,   141,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   143,   143,   144,
     145,   145,   145,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   147,   148,
     149,   149,   150,   150,   151,   151,   152,   153,   153,   154,
     155,   156,   157,   157,   157,   158,   159,   160,   161,   161,
     161,   161,   162,   162,   163,   163,   163,   164,   164,   164,
     165,   166,   167,   167,   167,   167,   168,   168,   169,   169,
     169,   169,   170,   170,   171,   171,   172
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     3,     1,     1,     1,     1,
       1,     2,     4,     2,     2,     2,     4,     4,     3,     3,
       3,     2,     2,     2,     1,     3,     4,     2,     4,     3,
       3,     3,     2,     2,     3,     3,     3,     1,     3,     2,
       3,     1,     2,     5,     3,     4,     3,     2,     2,     1,
       1,     2,     2,     1,     1,     1,     1,     1,     3,     4,
       4,     3,     1,     1,     2,     1,     2,     2,     2,     1,
       2,     2,     5,     6,     4,     5,     6,     7,     5,     6,
       3,     1,     2,     1,     1,     1,     1,     2,     3,     2,
       3,     1,     1,     1,     1,     1,     1,     2,     2,     4,
       0,     4,     3,     2,     2,     0,     2,     0,     2,     1,
       1,     1,     4,     4,     3,     4,     3,     1,     1,     2,
       1,     3,     3,     1,     2,     2,     4,     2,     3,     2,
       2,     1,     2,     1,     1,     1,     2,     3,     2,     3,
       2,     1,     2,     1,     2,     2,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     2,     2,     3,     3,     4,
       1,     3,     1,     3,     3,     2,     3,     3,     1,     1,
       1,     4,     1,     2,     8,     7,     7,     7,     6,     6,
       6,     5,     4,     3,     1,     3,     3,     3,     3,     3,
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
#line 207 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"program: components\n"; 
										 }
#line 2077 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 210 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"components: components component\n";}
#line 2083 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 211 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"components: component\n";}
#line 2089 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 212 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {addFile(*(yyvsp[-1].r.string_val));}
#line 2095 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 214 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"class_interface \n";}
#line 2101 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 215 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"class_implementation \n";}
#line 2107 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 216 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"protocol \n";}
#line 2113 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 217 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"struct \n";}
#line 2119 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 218 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"enum \n";}
#line 2125 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 220 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"class_interface: class_interface_header class_interface_body\n";
																classNode=NULL;
																 idsList.clear();
																 methodsList.clear();
																 method=NULL;
																}
#line 2136 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 229 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"class_interface_header:  AT_INTERFACE IDENTIFIER SEMI_COLUMN IDENTIFIER\n";
																				interface=InterfaceHelper::createNewInterface((yyvsp[-2].r.text),(yyvsp[0].r.text),symbolTable);
																				
																				
																				}
#line 2146 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 234 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																					Streams::verbose()<<"class_interface_header:  AT_INTERFACE IDENTIFIER\n";
																				 interface=InterfaceHelper::createNewInterface((yyvsp[0].r.text),"",symbolTable);

																				}
#line 2156 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 239 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Unknown type name '"<<(yyvsp[-1].r.text)<<"' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2162 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 240 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected Identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2168 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 242 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected Identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2174 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 245 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {	
															
														InterfaceHelper::addMethods(interface,methodsList);
																Streams::verbose()<<"class_interface_body:	protocol_reference_list instance_variables	interface_declaration_list	AT_END\n";
														}
#line 2184 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 251 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														Streams::verbose()<<"class_interface_body:	protocol_reference_list instance_variables AT_END\n";
														}
#line 2192 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 255 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {	
																InterfaceHelper::addMethods(interface,methodsList);
																Streams::verbose()<<"class_interface_body:	protocol_reference_list interface_declaration_list	AT_END\n";
														}
#line 2201 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 260 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {	
																InterfaceHelper::addMethods(interface,methodsList);
																Streams::verbose()<<"class_interface_body:	instance_variables	interface_declaration_list	AT_END\n";
														}
#line 2210 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 265 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																Streams::verbose()<<"class_interface_body:	protocol_reference_list 	AT_END\n";
														}
#line 2218 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 269 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"class_interface_body:instance_variables		AT_END\n";}
#line 2224 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 271 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {														
																InterfaceHelper::addMethods(interface,methodsList);
																Streams::verbose()<<"class_interface_body:interface_declaration_list	AT_END\n";
														}
#line 2233 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 275 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"class_interface_body:AT_END\n";}
#line 2239 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 276 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected '}' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2245 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 277 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected '}' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2251 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 278 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2257 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 279 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2263 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 280 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2269 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 281 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2275 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 282 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2281 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 283 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2287 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 284 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2293 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 288 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													if(interface!=NULL){
													InterfaceHelper::addInheritedProtocol(interface,idsList,symbolTable);
														idsList.clear();
													}
													Streams::verbose()<<"protocol_reference_list: LESS_THAN ids_list_identifier MORE_THAN\n";
												}
#line 2305 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 295 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected '>' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2311 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 298 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													Streams::verbose()<<"ids_list:ids_list_identifier COMMA IDENTIFIER\n"; 
													idsList.push_back((yyvsp[0].r.text));
													}
#line 2320 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 302 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													Streams::verbose()<<"ids_list_identifier:IDENTIFIER\n";
													idsList.push_back((yyvsp[0].r.text));
												    }
#line 2329 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 307 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"array with body";}
#line 2335 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 308 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"array without elements";}
#line 2341 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 312 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"array-element \n";}
#line 2347 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 313 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"array-element \n";}
#line 2353 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 314 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"empty element \n";}
#line 2359 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 315 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"inside braces element \n";}
#line 2365 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 316 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"inside braces element \n";}
#line 2371 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 317 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"inside braces element \n";}
#line 2377 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 320 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"instance_variables:OPEN_S	instance_variable_declaration	CLOSE_S\n";}
#line 2383 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 321 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"instance_variables:OPEN_S	 CLOSE_S\n";}
#line 2389 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 324 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"instance_variable_declarations:instance_variable_declarations instance_variable_declaration\n";}
#line 2395 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 325 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"instance_variable_declarations:instance_variable_declaration\n";}
#line 2401 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 326 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"instance_variable_declarations:variable_declaration_list\n";}
#line 2407 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 329 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"instance_variable_declaration:visibility_specification variable_declaration_list\n";
																	}
#line 2414 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 333 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										Streams::verbose()<<"variable_declaration_list: variable_declaration_list variable_declaration\n";
										InterfaceHelper::addDataMembers(interface,idsList,type,arrayList,flag,symbolTable,visibility);
											arrayList.clear();
												idsList.clear();
												flag=false;
										}
#line 2426 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 341 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										       InterfaceHelper::addDataMembers(interface,idsList,type,arrayList,flag,symbolTable,visibility);
												arrayList.clear();
												idsList.clear();
												flag=false;
										Streams::verbose()<<"variable_declaration_list: variable_declaration\n";
										}
#line 2438 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 351 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"visibility_specification:AT_PRIVATE\n";  visibility=new char[256]; visibility[0]='\0';strcat(visibility,(yyvsp[0].r.text));}
#line 2444 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 352 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"visibility_specification:AT_PROTECTED\n"; visibility=new char[256]; visibility[0]='\0';strcat(visibility,(yyvsp[0].r.text));}
#line 2450 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 353 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"visibility_specification:AT_PUBLIC\n"; visibility=new char[256]; visibility[0]='\0';strcat(visibility,(yyvsp[0].r.text));}
#line 2456 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 358 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"struct_variable_declaration:struct_declaration_list\n";}
#line 2462 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 361 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"variable_declaration:type IDENTIFIER	SEMI_COMA\n";
	                                           (yyval.r.text)=(yyvsp[-2].r.text);
												}
#line 2470 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 364 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";
														flag=true;
														 (yyval.r.text)=(yyvsp[-2].r.text);
													}
#line 2479 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 368 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2485 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 372 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									Streams::verbose()<<"ids_list:ids_list COMMA id_dec\n"; 

									}
#line 2494 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 376 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"ids_list:id_dec\n"; }
#line 2500 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 377 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2506 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 380 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose() <<" data_member: IDENTIFIER array_tag \n";
							 var=new Array((yyvsp[0].r.text),arrayAlloc.size(),NULL);
					       ( dynamic_cast<Array*>(var))->set_alloc(arrayAlloc);
						   arrayList.push_back( ( dynamic_cast<Array*>(var)));
						      arrayAlloc.clear();
							}
#line 2517 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 386 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {idsList.push_back((yyvsp[0].r.text)) ;Streams::verbose() <<" data_member: IDENTIFIER  \n";}
#line 2523 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 387 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;arrayAlloc.clear();}
#line 2529 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 388 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;arrayAlloc.clear();}
#line 2535 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 390 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {  
																												StructHelper::addDataMembers( myStruct,idsList,type,arrayList,flag, symbolTable);
																												arrayList.clear();
																												idsList.clear();
																												flag=false;
																										  Streams::verbose()<<"struct_declaration_list: struct_declaration_list  variable_declarationxx\n";
																										}
#line 2547 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 398 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {	
																												StructHelper::addDataMembers( myStruct,idsList,type,arrayList,flag, symbolTable);
																												arrayList.clear();
																														 	idsList.clear();
																															flag=false;
																										Streams::verbose()<<"struct_declaration_list:  variable_declarationxx\n";
																										}
#line 2559 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 405 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Illigal visibility specification at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2565 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 409 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
					myStruct=StructHelper::createNewStruct((yyvsp[0].r.text),symbolTable);
					Streams::verbose()<<"struct_header: STRUCT  IDENTIFIER\n";
					}
#line 2574 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 415 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"struct: STRUCT IDENTIFIER OPEN_S   CLOSE_S  entity SEMI_COMA\n";}
#line 2580 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 416 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"struct: STRUCT IDENTIFIER OPEN_S struct_variable_declaration  CLOSE_S enteity SEMI_COMA \n";}
#line 2586 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 417 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"struct: STRUCT IDENTIFIER OPEN_S   CLOSE_S SEMI_COMA\n";}
#line 2592 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 418 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"struct: STRUCT IDENTIFIER OPEN_S struct_variable_declaration  CLOSE_S  SEMI_COMA  \n";}
#line 2598 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 419 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2604 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 420 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2610 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 421 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2616 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 422 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2622 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 425 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"entity: IDENTIFIER COMMA  entity\n";}
#line 2628 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 426 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"entity:  IDENTIFIER \n";}
#line 2634 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 427 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2640 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 431 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"type:simple type\n";}
#line 2646 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 432 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"type: complex type\n";}
#line 2652 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 433 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"type: struct_type\n";}
#line 2658 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 434 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"type: enum_type\n";}
#line 2664 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 438 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {	Streams::verbose()<<"struct_type: STRUCT IDENTIFIER   \n";
													 type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																		string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2678 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 447 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"struct_type: STRUCT IDENTIFIER  MULTI \n";
													 type=symbolTable->getType((yyvsp[-1].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[-1].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2692 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 458 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"enum_type: ENUM IDENTIFIER \n";
													 type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2706 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 467 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"enum_type: ENUM IDENTIFIER  MULTI  \n";
													 type=symbolTable->getType((yyvsp[-1].r.text));
																if(type==NULL){
																									string error="Unknown type name '";
		error.append((yyvsp[-1].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2720 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 478 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"int type \n";
																type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
																}
#line 2734 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 487 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"char type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2747 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 495 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"float type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2760 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 503 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"NSString type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2773 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 511 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"void type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2786 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 519 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"bool type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2799 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 529 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
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
#line 2814 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 540 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											Streams::verbose()<<"array_tag: array_first_tag array_tag_list \n"; 
										   }
#line 2822 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 545 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																Streams::verbose()<<"array_tag_list: array_tag_list OPEN_ARR INT_VAL CLOSE_ARR\n"; 
																arrayAlloc.push_back((yyvsp[-1].r.int_val));
														   }
#line 2831 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 550 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<" Error:missing  dimension in array tag  ";arrayAlloc.clear();}
#line 2837 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 553 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											Streams::verbose()<<"array_first_tag: OPEN_ARR INT_VAL CLOSE_ARR\n"; 
											arrayAlloc.push_back((yyvsp[-1].r.int_val));
											}
#line 2846 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 557 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											Streams::verbose()<<"array_first_tag: OPEN_ARR  CLOSE_ARR\n"; 
											arrayAlloc.push_back(-1);
											}
#line 2855 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 563 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"array with value\n";
								(yyval.r.node)=new AssignNode(scoop,NULL,(yyvsp[0].r.node));
							   }
#line 2863 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 568 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								Streams::verbose() <<"with value\n";
								(yyval.r.node)=new AssignNode(scoop,NULL,(yyvsp[0].r.node));
							 }
#line 2872 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 573 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {(yyval.r.node)=NULL;}
#line 2878 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 578 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																Streams::verbose()<<"interface_declaration_list:interface_declaration_list interface_declaration\n";
															 methodsList.push_back(method);
														
															 
																}
#line 2889 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 584 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																 Streams::verbose()<<"interface_declaration_list:interface_declaration\n";
															 methodsList.push_back(method);
															 
																 	
																 }
#line 2900 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 592 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"interface_declaration: class_method_declaration\n";}
#line 2906 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 593 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"interface_declaration: instance_method_declaration\n";}
#line 2912 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 597 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																Streams::verbose()<<"class_method_declaration: PLUS p_type method_selectors	SEMI_COMA\n";
																method=InterfaceHelper::createNewMethod(type,symbolTable,(yyvsp[-1].r.text),selectorsList,true);
															
																 selectorsList.clear();
																
																}
#line 2924 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 605 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2930 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 606 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2936 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 609 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
															Streams::verbose()<<"instance_method_declaration: MINUS p_type	method_selectors		SEMI_COMA\n";
															method=InterfaceHelper::createNewMethod(type,symbolTable,(yyvsp[-1].r.text),selectorsList,false);
																 selectorsList.clear();
																
																
															}
#line 2948 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 618 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																Streams::verbose()<<"p_type : OPEN_P type CLOSE_P\n";
																(yyval.r.text)=(yyvsp[-1].r.text);
																}
#line 2957 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 627 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																Streams::verbose()<<"method_selectors: selectors_list\n";
																	(yyval.r.text)="";
																}
#line 2966 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 631 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"method_selectors:IDENTIFIER \n";(yyval.r.text)=(yyvsp[0].r.text);}
#line 2972 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 633 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													Streams::verbose()<<"selectors_list:	selectors_list selector_decleration\n";
																
													selectorsList.push_back(tselector);
													tselector=NULL;
											}
#line 2983 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 639 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														Streams::verbose()<<"selectors_list:	 selector_decleration\n";
												selectorsList.clear();

												selectorsList.push_back(tselector);
												tselector=NULL;
}
#line 2995 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 647 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																				Streams::verbose()<<"selector_decleration:	IDENTIFIER	SEMI_COLUMN	parameter_list	\n";
																				tselector=new DeclerationSelector((yyvsp[-2].r.text),selectorVarList);
																			}
#line 3004 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 653 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														Streams::verbose()<<"parameter_list: parameter_list parameter\n";
																	selectorVarList.push_back(var);		
											}
#line 3013 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 657 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									selectorVarList.clear();
										selectorVarList.push_back(var);		
											
				 
														Streams::verbose()<<"parameter_list:  parameter\n";
						
					}
#line 3026 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 666 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																Streams::verbose()<<"parameter:  p_type IDENTIFIER\n";
																
																if(type!=NULL){
																var=new Variable((yyvsp[0].r.text),type);
																}
																else{
																Streams::verbose()<<"Error:Type not found.\n";
																}
																}
#line 3041 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 679 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"class_implementation: class_implementation_header class_implementation_body\n";}
#line 3047 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 682 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																	Streams::verbose()<<"class_implementation_header: AT_IMPLEMENTATION IDENTIFIER SEMI_COLUMN IDENTIFIER\n";
																	interface=InterfaceHelper::checkImplementation((yyvsp[-2].r.text),symbolTable,(yyvsp[0].r.text));
																	
																}
#line 3057 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 687 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																interface=InterfaceHelper::checkImplementation((yyvsp[0].r.text),symbolTable,"");
																	
																}
#line 3066 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 693 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																	Streams::verbose()<<"class_implementation_body: instance_variables	implementation_definition_list	AT_END\n";
																			InterfaceHelper:: implementMethods(methodsList, interface);
														methodsList.clear();
														}
#line 3076 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 699 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    { 
																	Streams::verbose()<<"class_implementation_body: instance_variables									AT_END\n";
																}
#line 3084 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 702 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																	Streams::verbose()<<"class_implementation_body:						implementation_definition_list	AT_END\n";
																	InterfaceHelper:: implementMethods(methodsList, interface);
														methodsList.clear();
														
																}
#line 3095 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 708 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"class_implementation_body:	AT_END\n";}
#line 3101 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 711 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {	 methodsList.push_back(method);Streams::verbose()<<"implementation_definition_list: implementation_definition_list implementation_definition\n";}
#line 3107 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 712 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {	 methodsList.push_back(method);Streams::verbose()<<"implementation_definition_list: implementation_definition\n";}
#line 3113 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 715 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"implementation_definition: class_implementation_definition	\n";}
#line 3119 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 716 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"implementation_definition: instance_implementation_definition \n";}
#line 3125 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 719 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														Streams::verbose()<<"class_implementation_definition: class_implementation_definition_header block_body";
														functionNode->addNode(cscoop);
														functionNode=NULL;
																scoop=NULL;
															scoop=NULL;
													}
#line 3137 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 728 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										Streams::verbose()<<"class_implementation_definition_header: PLUS p_type		 method_selectors\n";
										method=InterfaceHelper:: createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,true);
																 selectorsList.clear();
									           functionNode= ScoopHelper::createNewFunctionNode(method,interface->static_twin);
												scoop=functionNode;				
																
										}
#line 3150 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 739 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
															Streams::verbose()<<"instance_implementation_definition: instance_implementation_definition_header block_body\n";
														functionNode->addNode(cscoop);
														functionNode=NULL;
																scoop=NULL;
															scoop=NULL;
										
															}
#line 3163 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 749 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											     Streams::verbose()<<"instance_implementation_definition_header:MINUS p_type		method_selectors\n";
												 method=InterfaceHelper:: createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,false);
																 selectorsList.clear();
									           functionNode= ScoopHelper::createNewFunctionNode(method,interface);
												scoop=functionNode;
												}
#line 3175 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 758 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												
												Streams::verbose()<<"block_body:OPEN_S  block_body_part \n";
												(yyval.r.node)=(yyvsp[-1].r.node);
												}
#line 3185 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 765 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												
                                                scoop=ScoopHelper::createNewScoop(scoop);
												
												
												scoopVector.push_back(scoop);
												Streams::verbose()<<"block_body_header:OPEN_S	\n";
												(yyval.r.node)=scoop;
												}
#line 3199 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 777 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cscoop=scoop;scoop=scoop->getParent();
												Streams::verbose()<<"block_body_statements:statement_list	CLOSE_S	\n";
												}
#line 3208 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 781 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cscoop=scoop;scoop=scoop->getParent();
												Streams::verbose()<<"block_body_statements:CLOSE_S\n";
												}
#line 3217 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 785 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											  cscoop=scoop; scoop=scoop->getParent();
												Streams::verbose()<<"block_body_statements: error CLOSE_S\n";
												}
#line 3226 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 791 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"statement_list: statement_list statement\n";
											(yyval.r.text)=(yyvsp[0].r.text);
											scoop->addNode((yyvsp[0].r.node));
											
											}
#line 3236 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 796 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"statement_list: statement\n";
											(yyval.r.text)=(yyvsp[0].r.text);
											(yyval.r.node)=(yyvsp[0].r.node);
											scoop->addNode((yyvsp[0].r.node));
											
											}
#line 3247 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 805 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"statement: loop_statement\n";
											(yyval.r.text)="loop";
											(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3256 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 809 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"statement: conditional_statement\n";
											(yyval.r.text)="cond";
											(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3265 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 813 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												Streams::verbose()<<"statement: expr\n";
												(yyval.r.text)="expr";
												(yyval.r.node)=(yyvsp[-1].r.node);
												//nodeXX=$<r.node>1;
											}
#line 3276 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 819 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											Streams::verbose()<<"statement: variable_declaration\n";
											
												ScoopHelper::addVariables(idsList,arrayList,type,flag,scoop);
												arrayList.clear();
												idsList.clear();
												flag=false;
												(yyval.r.node)=(yyvsp[0].r.node);
										    }
#line 3290 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 828 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"statement: block_body\n";(yyval.r.text)=new char[256];(yyval.r.text)[0]='\0';strcat((yyval.r.text),"Block");
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3298 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 831 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"statement: return_statement\n";
												(yyval.r.text)="return";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3307 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 835 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"statement: try_catch\n";}
#line 3313 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 837 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
	                                            (yyval.r.text)="asm";
												(yyval.r.node)=(yyvsp[0].r.node);}
#line 3321 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 840 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
	 (yyval.r.text)="call";
	(yyval.r.node)=(yyvsp[-1].r.node);
	}
#line 3330 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 845 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    { Streams::verbose()<<"error SEMI_COMA \n";}
#line 3336 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 850 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"@asm command \n";
	                                         (yyval.r.node)=new AsmNode(scoop,*(yyvsp[-1].r.string_val));
											 }
#line 3344 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 856 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														Streams::verbose()<<"variable_declaration:type IDENTIFIER	SEMI_COMA\n";
														 (yyval.r.text)=(yyvsp[-2].r.text);
														 (yyval.r.node)=new DeclerationNode(declarationList,scoop,type->get_name());
														 declarationList.clear();
														}
#line 3355 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 862 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														Streams::verbose()<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";
														flag=true;
														 (yyval.r.text)=(yyvsp[-2].r.text);
														  (yyval.r.node)=new DeclerationNode(declarationList,scoop,type->get_name());
														 declarationList.clear();
														}
#line 3367 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 869 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"variable_declaration:enum\n";}
#line 3373 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 873 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"variable_list:variable_list COMMA variable\n";}
#line 3379 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 874 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"variable_list:variable\n";
										
										}
#line 3387 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 877 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected ',' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 3393 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 880 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											Streams::verbose() <<"variable:  IDENTIFIER array_tag initializer \n";
											 var=new Array((yyvsp[-1].r.text),arrayAlloc.size(),NULL);
											(dynamic_cast<Array*>(var))->set_alloc(arrayAlloc);
											 arrayList.push_back( ( dynamic_cast<Array*>(var)));
											 arrayAlloc.clear();
											}
#line 3405 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 887 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    { 
											Streams::verbose() <<"variable:  IDENTIFIER main_initializer \n";
											idsList.push_back((yyvsp[-1].r.text)) ;
											IdentifierNode* identifierNode=new IdentifierNode((yyvsp[-1].r.text),scoop);
											if((yyvsp[0].r.node)!=NULL){
											(dynamic_cast<AssignNode*>((yyvsp[0].r.node)))->setLeftExp(identifierNode);
											}
											declarationList.push_back(make_pair((yyvsp[-1].r.text),(yyvsp[0].r.node)));
											}
#line 3419 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 896 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 3425 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 899 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"return_statement: RETURN expr\n";
												 (yyval.r.node)=new ReturnNode(scoop,(yyvsp[-1].r.node));
												}
#line 3433 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 904 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"loop_statement: for_loop\n";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3441 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 907 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"loop_statement: while_loop\n";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3449 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 910 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"loop_statement: do_while_loop\n";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3457 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 915 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"do_while: do_header   statement   while_loop_header   SEMI_COMMA\n";
													(yyval.r.node)=new DoWhileNode((yyvsp[-1].r.node),(yyvsp[-2].r.node),scoop);
													}
#line 3465 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 920 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"do_header: DO\n";}
#line 3471 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 923 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
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
#line 3492 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 942 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P for_initializer	SEMI_COMA logic_expr SEMI_COMA expr			CLOSE_P\n";
										(yyval.r.node)=new ForNode((yyvsp[-5].r.node),(yyvsp[-3].r.node),(yyvsp[-1].r.node),NULL,scoop);
										//nodeXX=$<r.node>5;
										}
#line 3501 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 948 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P					SEMI_COMA logic_expr SEMI_COMA expr			CLOSE_P\n";
										(yyval.r.node)=new ForNode(NULL,(yyvsp[-3].r.node),(yyvsp[-1].r.node),NULL,scoop);
										}
#line 3509 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 952 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA			 SEMI_COMA expr			CLOSE_P\n";
										(yyval.r.node)=new ForNode((yyvsp[-4].r.node),NULL,(yyvsp[-1].r.node),NULL,scoop);
										}
#line 3517 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 956 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA logic_expr SEMI_COMA				CLOSE_P	\n";
										(yyval.r.node)=new ForNode((yyvsp[-4].r.node),(yyvsp[-2].r.node),NULL,NULL,scoop);
										}
#line 3525 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 961 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P	for_initializer	SEMI_COMA			 SEMI_COMA				CLOSE_P	\n";
										(yyval.r.node)=new ForNode((yyvsp[-3].r.node),NULL,NULL,NULL,scoop);
										}
#line 3533 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 965 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P					SEMI_COMA logic_expr SEMI_COMA				CLOSE_P\n";
										(yyval.r.node)=new ForNode(NULL,(yyvsp[-1].r.node),NULL,NULL,scoop);
										}
#line 3541 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 969 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P 				SEMI_COMA			 SEMI_COMA expr			CLOSE_P";
										(yyval.r.node)=new ForNode(NULL,NULL,(yyvsp[-1].r.node),NULL,scoop);
										}
#line 3549 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 974 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"for_loop_hearder: FOR OPEN_P 				SEMI_COMA			SEMI_COMA 				CLOSE_P	\n";
											(yyval.r.node)=new ForNode(NULL,NULL,NULL,NULL,scoop);
											}
#line 3557 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 979 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"for_initializer: INT IDENTIFIER EQUAL expr\n";
											AssignNode * temp=new AssignNode(scoop,new IdentifierNode((yyvsp[-2].r.text),scoop),(yyvsp[0].r.node));
											
											//temp->add($<r.text>2,);
											
											//temp.push_back(make_pair($<r.text>2,$<r.node>4));
											DeclerationNode* temp1=new DeclerationNode(list<pair<string,Node*>>(),scoop,"int");
											temp1->add((yyvsp[-2].r.text),temp);
										 (yyval.r.node)=temp1; 
										 idsList.push_back((yyvsp[-2].r.text));
										}
#line 3573 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 990 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"for_initializer: IDENTIFIER EQUAL expr\n";
										(yyval.r.node)=new AssignNode(scoop,new IdentifierNode((yyvsp[-2].r.text),scoop),(yyvsp[0].r.node));
										}
#line 3581 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 993 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"for_initializer: IDENTIFIER\n";
										(yyval.r.node)=new IdentifierNode((yyvsp[0].r.text),scoop);
										}
#line 3589 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 998 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"logic_expr:expr LESS_THAN expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),LESS_THAN,scoop);
										}
#line 3597 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 1001 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"logic_expr:expr MORE_THAN expr\n";
										 (yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),MORE_THAN,scoop);
										}
#line 3605 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 1004 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"logic_expr:expr LESS_OR_EQUAL expr\n";
										 (yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),LESS_OR_EQUAL,scoop);
										}
#line 3613 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 1007 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"logic_expr:expr MORE_OR_EQUAL expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),MORE_OR_EQUAL,scoop);
										}
#line 3621 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 1010 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"logic_expr:expr EQUAL_EQUAL expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),EQUAL_EQUAL,scoop);
										}
#line 3629 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 1013 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"logic_expr:expr EQUAL_EQUAL expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),NOT_EQUAL,scoop);
										}
#line 3637 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 1016 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"logic_expr:NOT_EQUAL expr\n";
										 (yyval.r.node)=new UnaryNode(scoop,(yyvsp[0].r.node),NOT_EQUAL);
										}
#line 3645 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 1019 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"logic_expr:OPEN_P logic_expr CLOSE_P\n";
										 (yyval.r.node)=(yyvsp[-1].r.node);
										}
#line 3653 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 1022 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											Streams::verbose()<<"logic_expr:logic_expr AND_AND logic_expr\n";
											(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),AND_AND,scoop);
										}
#line 3662 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 1026 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"logic_expr:logic_expr OR_OR logic_expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),OR_OR,scoop);
										}
#line 3670 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 1029 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"logic_expr:TRUE\n";
										 (yyval.r.node)=new ConstantNode(true,scoop);
										}
#line 3678 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 1032 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"logic_expr:FALSE\n";
											 (yyval.r.node)=new ConstantNode(false,scoop);
										}
#line 3686 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 1037 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"expr:assign_expr\n";
										 (yyval.r.node)=(yyvsp[0].r.node);
										}
#line 3694 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1040 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"expr:simple_expr\n";
										(yyval.r.node)=(yyvsp[0].r.node);
										}
#line 3702 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1045 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										Streams::verbose()<<"assign_expr:long_id EQUAL simple_expr\n";
										//LongIdHelper::checkIdenentifier( scoop, interface,"set1");
										(yyval.r.node)=new AssignNode(scoop,(yyvsp[-2].r.node),(yyvsp[0].r.node));
										}
#line 3712 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1052 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"long_id: long_id.IDENTIFIER\n";
																(yyval.r.node)=new DotNode(scoop,(yyvsp[-2].r.node),(yyvsp[0].r.text));

											;}
#line 3721 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1056 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												Streams::verbose()<<"long_id: long_id.message_call\n";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3730 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1060 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																LongIdHelper::addIdentifier((yyvsp[0].r.text)); 
																(yyval.r.node)=new IdentifierNode((yyvsp[0].r.text),scoop);
																Streams::verbose()<<"long_id:IDENTIFIER\n";
															   }
#line 3740 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1070 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										Streams::verbose()<<"simple_expr:STRING_VAL\n";
									(yyval.r.node)=new ConstantNode(*((yyvsp[0].r.string_val)),scoop);
									Streams::verbose()<<"node typr"<<(yyval.r.node)->generateType()->get_name()<<"\n";
									(yyval.r.string_val)=(yyvsp[0].r.string_val);
									}
#line 3751 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1076 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									Streams::verbose()<<"simple_expr:INT_VAL\n";
									(yyval.r.node)=new ConstantNode(yylval.r.int_val,scoop);
									}
#line 3760 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1080 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"simple_expr:FLOAT_VAL\n";
									(yyval.r.node)=new ConstantNode(yylval.r.float_val,scoop);
									}
#line 3768 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1083 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"simple_expr:CHAR_VAL\n";
										(yyval.r.node)=new ConstantNode(yylval.r.char_val,scoop);
									}
#line 3776 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1086 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"simple_expr:long_id\n";
									(yyval.r.node)=(yyvsp[0].r.node);
									}
#line 3784 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1089 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										Streams::verbose()<<"simple_expr:expr PLUS expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),PLUS,scoop);
									}
#line 3793 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1093 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										Streams::verbose()<<"simple_expr:expr MINUS expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),MINUS,scoop);
									}
#line 3802 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1097 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"simple_expr:expr MULTI expr\n";
											(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),MULTI,scoop);
									}
#line 3810 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1100 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									Streams::verbose()<<"simple_expr:expr DIV expr\n";
									(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),DIV,scoop);
									}
#line 3819 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1104 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"simple_expr:OPEN_P expr CLOSE_P\n";(yyval.r.node)=(yyvsp[-1].r.node);}
#line 3825 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1105 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"simple_expr:ID++";}
#line 3831 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1106 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"simple_expr:ID--";}
#line 3837 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1107 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"simple_expr:++ID";}
#line 3843 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1108 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"simple_expr:--ID";}
#line 3849 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1109 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																Streams::verbose()<<"expr:p_type expr\n";
																if(type!=NULL)
																(yyval.r.node)=new CastNode(scoop,type,(yyvsp[0].r.node));
															}
#line 3859 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1116 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
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
#line 3875 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1129 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
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
#line 3890 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1141 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"sender: message_call\n";
											
											callNode->setSender((yyvsp[0].r.node));
											 (yyval.r.node)=(yyvsp[0].r.node);
											 
											}
#line 3901 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1147 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"sender: IDENTIFIER\n";
											(yyval.r.node)=new IdentifierNode((yyvsp[0].r.text),scoop);
											
											//callNode=new CallNode(scoop);
											
											callNode->setSender((yyval.r.node));
											
											}
#line 3914 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1157 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"message: IDENTIFIER\n";
											(yyval.r.text)=(yyvsp[0].r.text);
												
											}
#line 3923 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1161 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											Streams::verbose()<<"message_selectors_list\n";
											//$<r.node>$=$<r.text>1;
											(yyval.r.text)="";
											}
#line 3933 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1168 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											Streams::verbose()<<"message_selectors_list:message_selectors_list message_selector \n";
												callNode->addSelector(cselector);
											cselector=NULL;
												}
#line 3943 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1173 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {	callNode->addSelector(cselector);
							cselector=NULL;
								Streams::verbose()<<"message_selectors_list: message_selector\n";
											
		}
#line 3953 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1179 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									cselector->name=(yyvsp[-2].r.text);
							}
#line 3961 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1183 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"argument_list: argument_list argument\n";
												cselector->addArg((yyvsp[0].r.node));}
#line 3968 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1185 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"argument_list: argument\n";
												cselector=new CallSelector("");
											cselector->addArg((yyvsp[0].r.node));}
#line 3976 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1190 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											Streams::verbose()<<"argument: SEMI_COLUMN expr\n";
											(yyval.r.node)=(yyvsp[0].r.node);
											//callNode->addArgument($<r.node>1,"");
											
											}
#line 3987 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1198 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											Streams::verbose()<<"while_loop:while_loop_header statement\n";
											 (yyval.r.node)=new WhileNode((yyvsp[-1].r.node),(yyvsp[0].r.node),scoop);
										}
#line 3996 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1204 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"while_loop_header: WHILE OPEN_P logic_expr CLOSE_P\n";
											(yyval.r.node)=(yyvsp[-1].r.node);
											}
#line 4004 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1209 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"conditional_statement: if_header statement\n";
												 (yyval.r.node)=new IfNode((yyvsp[-1].r.node),(yyvsp[0].r.node),scoop,NULL);
												}
#line 4012 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1212 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												Streams::verbose()<<"conditional_statement: if_header statement with else\n";
												 (yyval.r.node)=new IfNode((yyvsp[-3].r.node),(yyvsp[-2].r.node),scoop,new ElseNode((yyvsp[0].r.node),scoop));
												}
#line 4021 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1216 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"conditional_statement: switch_header switch_body statement\n";
											(yyval.r.node)=tempSwitch;
										}
#line 4029 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1221 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"if_header: IF OPEN_P logic_expr CLOSE_P\n";
											(yyval.r.node)=(yyvsp[-1].r.node);
											}
#line 4037 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1226 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"switch_header: SWITCH OPEN_P IDENTIFIER CLOSE_P\n";
										
										tempSwitch->setExpr(new IdentifierNode((yyvsp[-2].r.text),scoop));
									}
#line 4046 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1232 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {scoop=new ScoopNode(scoop);tempSwitch=new SwitchNode(NULL,std::list<pair<Node*,Node*>>(),scoop);}
#line 4052 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1235 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 4058 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1236 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 4064 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1237 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 4070 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1238 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 4076 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1241 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 4082 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1242 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 4088 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 1245 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase((yyvsp[-4].r.node),(yyvsp[-2].r.node));}
#line 4094 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 1246 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase((yyvsp[-2].r.node),(yyvsp[0].r.node));}
#line 4100 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1247 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase((yyvsp[-3].r.node),NULL);}
#line 4106 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1250 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase(NULL,(yyvsp[-2].r.node));}
#line 4112 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1251 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase(NULL,(yyvsp[0].r.node));}
#line 4118 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1252 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase(NULL,(yyvsp[-1].r.node));}
#line 4124 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1254 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										Streams::verbose()<<"protocol: protocol_header protocol_body\n";
										idsList.clear();
										methodsList.clear();
										method=NULL;
										}
#line 4135 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1262 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								Streams::verbose()<<"protocol_header: AT_PROTOCOL IDENTIFIER \n";
								protocol=ProtocolHelper ::createNewProtocol((yyvsp[0].r.text),symbolTable );
								
								}
#line 4145 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1269 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								Streams::verbose()<<"protocol_body:	protocol_reference_list interface_declaration_list	AT_END\n";
								ProtocolHelper::addInheritedProtocol( protocol, idsList,symbolTable);
								ProtocolHelper::addMethods( protocol,methodsList);
								methodsList.clear();
								idsList.clear();
								}
#line 4157 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1277 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								Streams::verbose()<<"protocol_body:	interface_declaration_list	AT_END\n";
									
								ProtocolHelper::addMethods( protocol,methodsList);
								methodsList.clear();
								
								}
#line 4169 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1285 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								Streams::verbose()<<"protocol_body:	protocol_reference_list AT_END	\n";
											ProtocolHelper::addInheritedProtocol( protocol, idsList,symbolTable);
								idsList.clear();
								}
#line 4179 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1291 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"protocol_body:	AT_END\n";}
#line 4185 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1293 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																Streams::verbose()<<"enum: ENUM IDENTIFIER  OPEN_S list_expr CLOSE_S SEMI_COMA  \n";
																
																EnumHelper::createNewEnum( (yyvsp[-4].r.text),idsList, symbolTable);
																idsList.clear();
															 }
#line 4196 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1299 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																Streams::verbose()<<"enum: ENUM IDENTIFIER SEMI_COMA\n";
																EnumHelper::createNewEnum( (yyvsp[-1].r.text),idsList, symbolTable);
															  }
#line 4205 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 1306 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												Streams::verbose()<<"list_expr:IDENTIFIER EQUAL expr COMMA list_expr\n";
												idsList.push_back((yyvsp[-4].r.text));
													(yyval.r.node)=new AssignNode(scoop,new IdentifierNode((yyvsp[-4].r.text),scoop),(yyvsp[-2].r.node));
												}
#line 4215 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1311 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												Streams::verbose()<<"list_expr:IDENTIFIER EQUAL expr\n";
												idsList.push_back((yyvsp[-2].r.text));
												(yyval.r.node)=new AssignNode(scoop,new IdentifierNode((yyvsp[-2].r.text),scoop),(yyvsp[0].r.node));
												}
#line 4225 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 1316 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													Streams::verbose()<<"list_expr:IDENTIFIER \n";
													idsList.push_back((yyvsp[0].r.text));
													//??
												}
#line 4235 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 1321 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												  Streams::verbose()<<"list_expr:IDENTIFIER  COMMA list_expr \n";
												  idsList.push_back((yyvsp[-2].r.text));
												  //??
												}
#line 4245 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 1328 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												  Streams::verbose()<<"try_catch:TRY statement catch_list finally_statement \n";
												}
#line 4253 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 1332 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {				  
								Streams::verbose()<<"try_catch:TRY statement catch_list \n";
							  }
#line 4261 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 1337 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"catch_list:CATCH OPEN_S type IDENTIFIER CLOSE_S statement \n";}
#line 4267 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 1338 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"catch_list:catch_list CATCH OPEN_S type IDENTIFIER CLOSE_S statement \n";}
#line 4273 "yacc.cpp" /* yacc.c:1646  */
    break;


#line 4277 "yacc.cpp" /* yacc.c:1646  */
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
#line 1343 "C:\\Users\\Dell\\Source\\Repos\\occFinal\\compiler\\yacc.y" /* yacc.c:1906  */

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
