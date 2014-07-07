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
#line 5 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:339  */

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
				#include "ArrayAccessNode.h"

				
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

#line 172 "yacc.cpp" /* yacc.c:339  */

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
#line 177 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:355  */

#include "ast\node.h"

#line 206 "yacc.cpp" /* yacc.c:355  */

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
#line 180 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:355  */

	
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
	   

#line 306 "yacc.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_YACC_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 321 "yacc.cpp" /* yacc.c:358  */

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
#define YYLAST   902

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  102
/* YYNRULES -- Number of rules.  */
#define YYNRULES  270
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  490

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
       0,   210,   210,   213,   214,   215,   217,   218,   219,   220,
     221,   223,   232,   237,   242,   243,   245,   247,   253,   257,
     262,   267,   271,   273,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   291,   298,   301,   305,   310,   311,
     315,   316,   317,   318,   319,   320,   323,   324,   327,   328,
     329,   332,   335,   343,   354,   355,   356,   361,   364,   367,
     371,   375,   379,   380,   383,   389,   390,   391,   393,   401,
     408,   412,   418,   419,   420,   421,   422,   423,   424,   425,
     428,   429,   430,   434,   435,   436,   437,   441,   450,   461,
     470,   481,   490,   498,   506,   514,   522,   532,   543,   548,
     552,   553,   556,   560,   566,   569,   571,   576,   581,   587,
     595,   596,   600,   608,   609,   612,   621,   630,   634,   636,
     642,   650,   656,   660,   669,   682,   685,   690,   696,   702,
     705,   711,   714,   715,   718,   719,   722,   731,   742,   752,
     761,   768,   780,   784,   788,   794,   799,   808,   812,   816,
     822,   831,   834,   838,   840,   843,   848,   853,   859,   865,
     872,   876,   877,   880,   883,   890,   899,   902,   907,   910,
     913,   918,   923,   926,   944,   950,   954,   958,   963,   967,
     971,   976,   982,   993,   996,  1001,  1004,  1007,  1013,  1016,
    1019,  1022,  1025,  1028,  1031,  1034,  1038,  1041,  1044,  1050,
    1053,  1058,  1065,  1069,  1073,  1078,  1086,  1095,  1101,  1105,
    1108,  1111,  1114,  1118,  1122,  1125,  1129,  1130,  1131,  1132,
    1133,  1134,  1141,  1154,  1166,  1172,  1182,  1186,  1193,  1198,
    1204,  1208,  1210,  1215,  1223,  1229,  1234,  1237,  1241,  1246,
    1251,  1257,  1260,  1261,  1262,  1263,  1266,  1267,  1270,  1271,
    1272,  1275,  1276,  1277,  1279,  1287,  1293,  1301,  1309,  1315,
    1318,  1324,  1331,  1336,  1341,  1346,  1353,  1357,  1362,  1363,
    1366
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
  "logic_expr1", "logic_expr", "expr", "assign_expr", "long_id",
  "array_access", "simple_expr", "message_call2", "message_call", "sender",
  "message", "message_selectors_list", "message_selector", "argument_list",
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

#define YYPACT_NINF -342

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-342)))

#define YYTABLE_NINF -199

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     110,    13,   230,    20,    26,    40,    53,    41,   129,    58,
    -342,  -342,   535,   154,  -342,  -342,   300,  -342,   454,  -342,
    -342,  -342,   174,   196,    52,  -342,  -342,   202,  -342,  -342,
     824,   235,  -342,   111,   244,  -342,   172,   170,   281,  -342,
    -342,  -342,   672,  -342,   244,   244,   425,  -342,   436,  -342,
    -342,   261,  -342,   261,  -342,   472,   511,  -342,   277,   304,
    -342,   338,  -342,   314,  -342,  -342,  -342,  -342,  -342,  -342,
    -342,  -342,  -342,   508,  -342,   348,   354,   417,  -342,   844,
     844,  -342,   308,  -342,  -342,  -342,  -342,  -342,   102,   362,
     508,   368,   377,   386,  -342,   368,   543,  -342,   294,   306,
    -342,  -342,   325,  -342,  -342,  -342,   844,   275,   374,  -342,
     844,   368,   368,  -342,   548,  -342,  -342,  -342,  -342,   331,
    -342,  -342,   550,  -342,  -342,  -342,  -342,   112,   378,  -342,
     379,   380,   382,  -342,  -342,  -342,   844,   373,    99,    94,
    -342,  -342,   441,  -342,   244,   413,   156,  -342,   362,  -342,
     456,  -342,   556,  -342,  -342,   397,  -342,  -342,  -342,  -342,
    -342,   225,   434,  -342,   264,   309,  -342,  -342,  -342,  -342,
      -6,   314,  -342,   508,   421,   446,   450,  -342,   466,   478,
    -342,   766,   539,   463,   507,  -342,  -342,   393,  -342,  -342,
    -342,  -342,  -342,  -342,   539,  -342,   539,   487,   191,  -342,
       0,   488,  -342,   539,  -342,   539,     6,  -342,  -342,  -342,
     338,   766,   489,    99,   241,  -342,  -342,   -19,  -342,  -342,
    -342,   158,  -342,   538,  -342,   509,   515,  -342,  -342,  -342,
    -342,  -342,  -342,  -342,  -342,  -342,  -342,   591,   510,  -342,
     255,  -342,   322,  -342,  -342,   507,   401,   665,   665,   522,
      25,   236,   177,  -342,  -342,  -342,  -342,   529,   534,   766,
     516,  -342,   191,   319,  -342,   546,   500,   554,   373,   189,
     171,  -342,  -342,  -342,   527,  -342,  -342,   766,   766,   572,
    -342,  -342,   574,  -342,  -342,   530,  -342,   766,   581,  -342,
       8,  -342,   576,  -342,   573,  -342,  -342,  -342,   544,  -342,
     547,  -342,   373,  -342,  -342,   244,   582,  -342,  -342,  -342,
     588,  -342,   344,   561,   608,   353,   602,   599,   766,  -342,
    -342,   476,  -342,   471,   242,   523,   587,  -342,  -342,   236,
     155,   429,  -342,  -342,   319,  -342,   766,   766,   766,   766,
     601,   265,  -342,   579,   766,   579,  -342,   507,  -342,   507,
     610,   319,   103,  -342,   618,   575,   620,  -342,   539,   621,
     419,  -342,  -342,   611,  -342,   338,  -342,     7,  -342,  -342,
    -342,   766,   596,   229,   133,   632,   605,   429,  -342,  -342,
     665,   665,   766,   766,   766,   766,   766,   766,  -342,   613,
    -342,   173,   173,  -342,  -342,   508,   623,   539,  -342,   624,
    -342,  -342,  -342,  -342,  -342,  -342,  -342,   766,  -342,   618,
    -342,  -342,   479,   630,   593,  -342,  -342,   594,   595,  -342,
     766,  -342,   627,   584,   708,   169,  -342,  -342,  -342,  -342,
    -342,  -342,  -342,  -342,  -342,  -342,  -342,   644,   508,  -342,
     697,  -342,  -342,   646,  -342,   645,   606,  -342,   650,  -342,
    -342,  -342,  -342,  -342,   635,  -342,   638,   752,   651,   666,
     720,  -342,   655,   656,   766,  -342,   664,  -342,  -342,  -342,
    -342,   657,   539,   660,   669,   671,  -342,   759,  -342,  -342,
    -342,  -342,   539,   759,   680,  -342,  -342,  -342,   759,  -342
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       4,     6,     0,     0,     9,     7,     0,     8,     0,    10,
      14,    15,    13,   127,     0,   255,    71,     0,     1,     3,
       0,     0,    24,     0,     0,    11,     0,     0,     0,   109,
     110,   111,     0,   131,     0,     0,     0,   125,     0,   133,
     134,     0,   135,     0,   259,     0,     0,   254,     0,     0,
     261,     0,     5,     0,    94,    93,    92,    96,    91,    56,
      55,    54,    47,     0,    95,     0,     0,     0,    49,    50,
       0,    53,     0,    85,    86,    83,    84,    37,     0,   118,
       0,     0,     0,   117,   120,     0,    27,    21,     0,     0,
      32,    22,     0,    33,    23,   108,     0,     0,     0,    69,
      57,     0,     0,   129,     0,   130,   132,   141,   136,     0,
     138,   258,     0,   257,    16,    12,   126,   264,     0,    97,
       0,    89,    87,    46,    48,    52,    51,    63,     0,     0,
      62,    35,     0,    34,     0,     0,     0,   114,     0,   119,
       0,    25,     0,    29,    18,     0,    30,    19,    31,    20,
      70,     0,    81,    74,     0,     0,    68,   137,   139,   128,
       0,   204,   143,     0,     0,     0,     0,   172,     0,     0,
     222,     0,     0,     0,     0,   151,   140,     0,   146,   154,
     150,   152,   147,   170,     0,   168,     0,     0,     0,   205,
       0,   203,   169,     0,   148,     0,     0,   160,   153,   256,
       0,     0,     0,     0,     0,    90,    88,     0,    66,   100,
      67,     0,    58,     0,    36,     0,   121,   123,   116,   113,
     112,   115,    26,    28,    17,    78,    82,     0,     0,    72,
       0,    75,     0,   156,   144,     0,     0,     0,     0,     0,
      89,   204,     0,   207,   209,   210,   208,     0,     0,     0,
       0,   199,   211,   200,   203,     0,     0,     0,     0,   107,
       0,   162,   142,   145,     0,   173,   149,     0,     0,     0,
     225,   224,     0,   155,   234,   236,   245,     0,     0,   238,
       0,   247,     0,   265,   263,   260,    64,    59,     0,   103,
      98,    60,     0,    61,   124,     0,     0,    80,    76,    79,
       0,    73,     0,   184,     0,     0,     0,     0,     0,   196,
     197,     0,   187,     0,   211,     0,     0,   217,   218,   204,
     211,     0,   219,   220,   221,   167,     0,     0,     0,     0,
       0,   267,   157,   105,     0,   105,   165,     0,   158,     0,
       0,   201,     0,   202,   226,     0,   227,   229,     0,     0,
       0,   243,   246,     0,   244,     0,   102,     0,   122,    77,
     159,     0,     0,     0,     0,     0,     0,   200,   194,   235,
       0,     0,     0,     0,     0,     0,     0,     0,   239,     0,
     216,   212,   213,   214,   215,     0,     0,     0,   266,     0,
     166,   106,   164,   163,   161,   171,   206,     0,   223,     0,
     228,   237,     0,     0,   252,   242,   262,     0,     0,   183,
       0,   181,     0,     0,     0,     0,   195,   185,   186,   188,
     189,   190,   191,   192,   193,   241,   240,     0,     0,   270,
       0,   104,   233,   230,   232,     0,   249,   253,     0,   101,
      99,   182,   180,   179,     0,   178,     0,     0,     0,     0,
       0,    39,     0,    41,     0,   250,     0,   251,   175,   176,
     177,     0,     0,     0,    42,     0,    38,     0,   231,   248,
     174,   268,     0,     0,    44,    40,   269,    45,     0,    43
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -342,  -342,  -342,   681,  -342,  -342,  -342,   684,  -342,  -342,
    -341,   125,  -342,   626,   625,  -342,  -342,   -39,   577,   483,
    -342,  -342,  -342,  -138,   -30,  -342,  -342,  -342,  -342,  -136,
    -342,  -342,   363,  -342,    11,    -4,  -342,  -342,   -13,    63,
    -342,   616,  -342,   405,  -342,  -342,  -342,   674,   -35,  -342,
    -342,  -342,  -342,   283,  -342,  -342,  -342,  -168,  -342,  -342,
     470,    19,  -342,  -342,  -342,  -342,  -342,  -342,  -342,  -226,
    -279,  -166,  -109,  -113,  -342,  -213,  -342,  -112,  -342,  -342,
    -342,   355,  -342,   253,  -342,   447,  -342,  -342,  -342,  -342,
    -342,  -342,   437,   443,  -342,  -342,  -342,     9,  -209,  -342,
    -342,  -342
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,     9,    10,    11,    12,    35,    36,    88,   441,
     462,    37,    77,    78,    79,    80,   108,    81,   139,   140,
     110,    13,    14,   164,   184,    83,    84,    85,    86,   218,
     300,   219,   400,   346,    38,    39,    40,    41,   259,    92,
      93,    94,   226,   227,    15,    16,    47,    48,    49,    50,
      51,    52,    53,   185,   119,   186,   187,   188,   189,   190,
     270,   271,   191,   192,   193,   194,   195,   196,   316,   321,
     322,   323,   261,   262,   199,   263,   200,   264,   282,   355,
     356,   357,   443,   444,   202,   203,   204,   205,   206,   436,
     289,   290,   291,   292,    17,    18,    57,   207,   128,   208,
     341,   398
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      82,   293,   221,   109,   280,   243,   198,   201,   417,    19,
     197,   244,    82,   116,   266,   260,   298,    20,    19,   273,
      91,    95,   325,   286,    23,   361,   274,   242,   275,    56,
      24,   111,   112,   299,   105,   284,    60,   285,   376,   331,
     135,    61,   418,   130,    25,   294,   334,    99,   102,    82,
      82,   180,   105,   287,   288,   287,   288,    26,    -2,     1,
     145,     2,   215,    60,   351,   352,   122,   160,    61,   198,
     201,   166,    27,   197,   198,   201,    82,   296,   197,   116,
      82,   198,   201,   198,   201,   197,     3,   197,   281,   374,
     198,   201,   198,   201,   197,   105,   197,   135,   105,   307,
     220,   427,   428,   141,   377,   222,    82,   152,     4,   155,
     -65,     1,   223,     2,     5,    89,     6,   -65,   105,   475,
     142,   359,   143,   391,   392,   393,   394,   336,   337,    28,
     210,   225,   343,   345,   324,   324,   485,    90,     3,   330,
     338,    46,   487,   245,   423,   339,   330,   489,   105,   425,
     217,   105,   378,   211,   146,   406,   416,   229,   150,   301,
       4,    98,   380,   381,   330,   330,     5,   230,     6,   -64,
      42,   100,   347,    96,   167,   168,   -64,     7,   401,    58,
     457,   329,   348,    64,    65,    66,    67,    68,    30,   349,
     411,   101,   414,    97,    33,    34,    33,    34,   380,   381,
      74,    59,   324,   252,   324,   419,   278,   422,   253,   254,
     338,   255,   256,    62,   279,   339,   429,   430,   431,   432,
     433,   434,   145,   330,   330,   330,   330,    75,   180,   439,
     344,    21,   277,   251,    22,    76,   235,   257,   258,    87,
     217,   442,   278,   236,   446,   198,   201,   198,   201,   197,
     279,   197,   297,  -198,   451,   252,   421,   454,   456,   223,
     253,   254,   324,   255,   256,   238,   309,   324,   324,  -198,
      90,  -198,  -198,   236,   463,   239,   161,   117,   124,   162,
     180,   125,   103,   277,   198,   201,   163,   145,   197,   257,
     258,   471,   225,   278,   463,   153,   327,   328,   442,   198,
     201,   279,   104,   197,   481,    33,    34,   156,   126,   137,
     240,   463,   138,   162,   486,   154,    30,   463,    33,    34,
     241,    43,   463,   310,    44,    45,   158,   157,   396,   397,
      33,    34,   170,   311,   118,   171,   120,    64,    65,    66,
      67,    68,   127,   336,   337,   347,   159,   117,   172,    33,
      34,   129,   131,   173,    74,   370,   338,   251,   132,   198,
     201,   339,   349,   197,   373,   437,   403,   144,   404,   198,
     201,   174,    89,   197,   175,   176,   177,   178,   147,   317,
     137,   179,   180,   213,   253,   254,   181,   255,   256,    76,
     148,   165,   318,   182,   265,   212,   183,   171,   233,    64,
      65,    66,    67,    68,   180,   313,   319,   320,   459,   117,
     272,   314,   315,   257,   258,   173,    74,   215,   234,   216,
     265,    33,    34,   171,   217,    64,    65,    66,    67,    68,
      69,    70,    71,   174,   133,   117,   175,   176,   177,   178,
     228,   173,    74,   179,   180,   224,   113,   246,   181,    44,
      45,    76,   237,   336,   337,   182,   390,   115,   183,   174,
      44,    45,   175,   176,   177,   178,   338,   231,   413,   179,
     180,   339,   247,    31,   181,    54,   248,    76,    33,    34,
     265,   182,   250,   171,   183,    64,    65,    66,    67,    68,
     382,   383,   249,   121,   267,   117,    33,    34,   276,   283,
     295,   173,    74,   379,   384,   380,   381,   385,   268,   386,
     387,   269,    63,   304,    64,    65,    66,    67,    68,   174,
     305,   308,   175,   176,   177,   178,   326,   335,   445,   179,
     180,    74,   123,   332,   181,    33,    34,    76,   333,   302,
     265,   182,   213,   171,   183,    64,    65,    66,    67,    68,
     388,    30,   380,   381,    31,   117,    32,   243,    75,    33,
      34,   173,    74,   340,   151,   342,    76,    33,    34,   169,
     175,   209,    44,    45,    33,    34,   353,   232,   354,   174,
      33,    34,   175,   176,   177,   178,   360,   358,   251,   179,
     180,   365,   306,   364,   181,   162,   366,    76,   367,   369,
     236,   182,   371,   329,   183,    64,    65,    66,    67,    68,
     252,   453,   372,   375,   389,   253,   254,   395,   255,   256,
     399,   405,    74,   407,   409,   317,   412,   408,   415,   435,
     253,   254,   426,   255,   256,   180,   251,   420,   318,   438,
     440,   447,   448,   424,   257,   258,   449,   450,   458,    75,
     180,   464,   319,   320,   452,   466,   465,    76,   317,   257,
     258,   467,   468,   253,   254,   469,   255,   256,   472,   251,
     473,   318,   476,   106,   477,   479,    63,   482,    64,    65,
      66,    67,    68,   180,   480,   319,   320,   483,   484,   107,
      29,   317,   257,   258,    73,    74,   253,   254,   488,   255,
     256,   251,    55,   134,   318,   136,   303,   214,   402,   149,
     368,   410,   251,   460,   461,   312,   180,   478,   319,   320,
     114,   350,    75,   252,   251,   257,   258,   362,   253,   254,
      76,   255,   256,   363,   252,   455,   460,   474,     0,   253,
     254,     0,   255,   256,     0,     0,   252,     0,   180,     0,
       0,   253,   254,     0,   255,   256,   251,   257,   258,   180,
       0,     0,     0,   251,     0,     0,     0,     0,   257,   258,
     251,   180,     0,     0,     0,   460,     0,     0,   252,   470,
     257,   258,     0,   253,   254,   252,   255,   256,     0,     0,
     253,   254,   252,   255,   256,     0,     0,   253,   254,     0,
     255,   256,     0,   180,     0,     0,     0,     0,     0,     0,
     180,     0,   257,   258,     0,     0,     0,   180,     0,   257,
     258,     0,     0,     0,     0,     0,   257,   258,    63,     0,
      64,    65,    66,    67,    68,     0,     0,    69,    70,    71,
       0,    72,     0,     0,     0,     0,    73,    74,    63,     0,
      64,    65,    66,    67,    68,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,    74,     0,     0,
       0,     0,     0,     0,    75,     0,     0,     0,     0,     0,
       0,     0,    76,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    75,     0,     0,     0,     0,     0,
       0,     0,    76
};

static const yytype_int16 yycheck[] =
{
      30,   210,   138,    42,     4,    11,   119,   119,     1,     0,
     119,    17,    42,    48,   182,   181,    35,     4,     9,   187,
      33,    34,   248,    17,     4,    17,   194,   165,   196,    18,
       4,    44,    45,    52,    38,   203,    11,   205,   317,   252,
      79,    16,    35,    73,     4,   211,   259,    36,    37,    79,
      80,    51,    56,    47,    48,    47,    48,     4,     0,     1,
      90,     3,    37,    11,   277,   278,    55,   106,    16,   182,
     182,   110,    31,   182,   187,   187,   106,   213,   187,   114,
     110,   194,   194,   196,   196,   194,    28,   196,   200,   315,
     203,   203,   205,   205,   203,    99,   205,   136,   102,   237,
       1,   380,   381,     1,   317,    11,   136,    96,    50,    98,
      11,     1,    18,     3,    56,     4,    58,    18,   122,   460,
      18,   287,    20,   336,   337,   338,   339,    24,    25,     0,
      18,   144,   268,   269,   247,   248,   477,    26,    28,   252,
      37,    16,   483,   173,    11,    42,   259,   488,   152,   375,
      51,   155,   318,    41,    91,    52,   365,     1,    95,     1,
      50,    36,    29,    30,   277,   278,    56,    11,    58,    11,
      16,     1,     1,     1,   111,   112,    18,    67,   344,     5,
      11,     4,    11,     6,     7,     8,     9,    10,    16,    18,
     358,    21,   360,    21,    24,    25,    24,    25,    29,    30,
      23,     5,   315,    26,   317,   371,    51,   373,    31,    32,
      37,    34,    35,    11,    59,    42,   382,   383,   384,   385,
     386,   387,   252,   336,   337,   338,   339,    50,    51,   397,
      41,     1,    41,     4,     4,    58,    11,    60,    61,     4,
      51,   407,    51,    18,   412,   358,   358,   360,   360,   358,
      59,   360,    11,    11,   420,    26,    27,   423,   424,    18,
      31,    32,   375,    34,    35,     1,    11,   380,   381,    27,
      26,    29,    30,    18,   440,    11,     1,    16,     1,     4,
      51,     4,     1,    41,   397,   397,    11,   317,   397,    60,
      61,   457,   305,    51,   460,     1,    60,    61,   464,   412,
     412,    59,    21,   412,   472,    24,    25,     1,     4,     1,
       1,   477,     4,     4,   482,    21,    16,   483,    24,    25,
      11,    21,   488,     1,    24,    25,     1,    21,    63,    64,
      24,    25,     1,    11,    51,     4,    53,     6,     7,     8,
       9,    10,     4,    24,    25,     1,    21,    16,    17,    24,
      25,    37,     4,    22,    23,    11,    37,     4,     4,   472,
     472,    42,    18,   472,    11,   395,   347,     5,   349,   482,
     482,    40,     4,   482,    43,    44,    45,    46,     1,    26,
       1,    50,    51,     4,    31,    32,    55,    34,    35,    58,
       4,    17,    39,    62,     1,    17,    65,     4,     1,     6,
       7,     8,     9,    10,    51,     4,    53,    54,   438,    16,
      17,    10,    11,    60,    61,    22,    23,    37,    21,    37,
       1,    24,    25,     4,    51,     6,     7,     8,     9,    10,
      13,    14,    15,    40,    17,    16,    43,    44,    45,    46,
      27,    22,    23,    50,    51,     4,    21,    26,    55,    24,
      25,    58,    18,    24,    25,    62,    27,    21,    65,    40,
      24,    25,    43,    44,    45,    46,    37,    11,    49,    50,
      51,    42,    26,    19,    55,    21,    26,    58,    24,    25,
       1,    62,     4,     4,    65,     6,     7,     8,     9,    10,
      19,    20,    26,    21,    31,    16,    24,    25,    11,    11,
      11,    22,    23,    27,    33,    29,    30,    36,     1,    38,
      39,     4,     4,     4,     6,     7,     8,     9,    10,    40,
       5,    11,    43,    44,    45,    46,     4,    11,    49,    50,
      51,    23,    21,     4,    55,    24,    25,    58,     4,     1,
       1,    62,     4,     4,    65,     6,     7,     8,     9,    10,
      27,    16,    29,    30,    19,    16,    21,    11,    50,    24,
      25,    22,    23,    63,    21,    11,    58,    24,    25,    21,
      43,    21,    24,    25,    24,    25,     4,    21,     4,    40,
      24,    25,    43,    44,    45,    46,     5,    57,     4,    50,
      51,    18,     1,    17,    55,     4,    52,    58,    51,    11,
      18,    62,    41,     4,    65,     6,     7,     8,     9,    10,
      26,    27,     4,    11,    27,    31,    32,    16,    34,    35,
      41,    11,    23,     5,     4,    26,     5,    52,    17,    16,
      31,    32,    27,    34,    35,    51,     4,    41,    39,    16,
      16,    11,    49,    11,    60,    61,    52,    52,     4,    50,
      51,     5,    53,    54,    27,    49,    11,    58,    26,    60,
      61,    11,    27,    31,    32,    27,    34,    35,    17,     4,
       4,    39,    17,     1,    18,    11,     4,    17,     6,     7,
       8,     9,    10,    51,    27,    53,    54,    18,    17,    17,
       9,    26,    60,    61,    22,    23,    31,    32,    18,    34,
      35,     4,    18,    77,    39,    80,   223,   130,   345,    93,
     305,   356,     4,    16,    17,   245,    51,   464,    53,    54,
      46,   274,    50,    26,     4,    60,    61,   290,    31,    32,
      58,    34,    35,   290,    26,    27,    16,    17,    -1,    31,
      32,    -1,    34,    35,    -1,    -1,    26,    -1,    51,    -1,
      -1,    31,    32,    -1,    34,    35,     4,    60,    61,    51,
      -1,    -1,    -1,     4,    -1,    -1,    -1,    -1,    60,    61,
       4,    51,    -1,    -1,    -1,    16,    -1,    -1,    26,    27,
      60,    61,    -1,    31,    32,    26,    34,    35,    -1,    -1,
      31,    32,    26,    34,    35,    -1,    -1,    31,    32,    -1,
      34,    35,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    -1,    60,    61,    -1,    -1,    -1,    51,    -1,    60,
      61,    -1,    -1,    -1,    -1,    -1,    60,    61,     4,    -1,
       6,     7,     8,     9,    10,    -1,    -1,    13,    14,    15,
      -1,    17,    -1,    -1,    -1,    -1,    22,    23,     4,    -1,
       6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,    28,    50,    56,    58,    67,    74,    75,
      76,    77,    78,    94,    95,   117,   118,   167,   168,   170,
       4,     1,     4,     4,     4,     4,     4,    31,     0,    76,
      16,    19,    21,    24,    25,    79,    80,    84,   107,   108,
     109,   110,    16,    21,    24,    25,    84,   119,   120,   121,
     122,   123,   124,   125,    21,    80,   107,   169,     5,     5,
      11,    16,    11,     4,     6,     7,     8,     9,    10,    13,
      14,    15,    17,    22,    23,    50,    58,    85,    86,    87,
      88,    90,    97,    98,    99,   100,   101,     4,    81,     4,
      26,   111,   112,   113,   114,   111,     1,    21,    84,   107,
       1,    21,   107,     1,    21,   108,     1,    17,    89,    90,
      93,   111,   111,    21,   120,    21,   121,    16,   126,   127,
     126,    21,   107,    21,     1,     4,     4,     4,   171,    37,
      97,     4,     4,    17,    86,    90,    87,     1,     4,    91,
      92,     1,    18,    20,     5,    97,   112,     1,     4,   114,
     112,    21,   107,     1,    21,   107,     1,    21,     1,    21,
      90,     1,     4,    11,    96,    17,    90,   112,   112,    21,
       1,     4,    17,    22,    40,    43,    44,    45,    46,    50,
      51,    55,    62,    65,    97,   126,   128,   129,   130,   131,
     132,   135,   136,   137,   138,   139,   140,   145,   146,   147,
     149,   150,   157,   158,   159,   160,   161,   170,   172,    21,
      18,    41,    17,     4,    91,    37,    37,    51,   102,   104,
       1,   102,    11,    18,     4,   111,   115,   116,    27,     1,
      11,    11,    21,     1,    21,    11,    18,    18,     1,    11,
       1,    11,    96,    11,    17,    97,    26,    26,    26,    26,
       4,     4,    26,    31,    32,    34,    35,    60,    61,   111,
     144,   145,   146,   148,   150,     1,   130,    31,     1,     4,
     133,   134,    17,   130,   130,   130,    11,    41,    51,    59,
       4,   150,   151,    11,   130,   130,    17,    47,    48,   163,
     164,   165,   166,   171,   144,    11,   102,    11,    35,    52,
     103,     1,     1,    92,     4,     5,     1,    96,    11,    11,
       1,    11,   133,     4,    10,    11,   141,    26,    39,    53,
      54,   142,   143,   144,   146,   142,     4,    60,    61,     4,
     146,   148,     4,     4,   148,    11,    24,    25,    37,    42,
      63,   173,    11,   102,    41,   102,   106,     1,    11,    18,
     158,   148,   148,     4,     4,   152,   153,   154,    57,   144,
       5,    17,   165,   166,    17,    18,    52,    51,   116,    11,
      11,    41,     4,    11,   142,    11,   143,   148,   144,    27,
      29,    30,    19,    20,    33,    36,    38,    39,    27,    27,
      27,   148,   148,   148,   148,    16,    63,    64,   174,    41,
     105,   144,   105,   134,   134,    11,    52,     5,    52,     4,
     154,   130,     5,    49,   130,    17,   171,     1,    35,   144,
      41,    27,   144,    11,    11,   142,    27,   143,   143,   144,
     144,   144,   144,   144,   144,    16,   162,    97,    16,   130,
      16,    82,   144,   155,   156,    49,   130,    11,    49,    52,
      52,   144,    27,    27,   144,    27,   144,    11,     4,    97,
      16,    17,    83,   144,     5,    11,    49,    11,    27,    27,
      27,   144,    17,     4,    17,    83,    17,    18,   156,    11,
      27,   130,    17,    18,    17,    83,   130,    83,    18,    83
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
     140,   140,   141,   141,   141,   142,   142,   142,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   144,
     144,   145,   146,   146,   146,   146,   147,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   149,   150,   151,   151,   152,   152,   153,   153,
     154,   155,   155,   156,   157,   158,   159,   159,   159,   160,
     161,   162,   163,   163,   163,   163,   164,   164,   165,   165,
     165,   166,   166,   166,   167,   168,   169,   169,   169,   169,
     170,   170,   171,   171,   171,   171,   172,   172,   173,   173,
     174
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
       6,     5,     4,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     3,     3,     2,     3,     1,     1,     1,     1,
       1,     3,     3,     1,     1,     1,     4,     1,     1,     1,
       1,     1,     3,     3,     3,     3,     3,     2,     2,     2,
       2,     2,     1,     4,     1,     1,     1,     1,     2,     1,
       3,     3,     1,     1,     2,     4,     2,     4,     2,     4,
       5,     1,     3,     2,     2,     1,     2,     1,     6,     4,
       5,     5,     3,     4,     2,     2,     3,     2,     2,     1,
       6,     3,     5,     3,     1,     3,     4,     3,     6,     7,
       2
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
#line 210 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"program: components\n"; 
										 }
#line 2081 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 213 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"components: components component\n";}
#line 2087 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 214 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"components: component\n";}
#line 2093 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 215 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {addFile(*(yyvsp[-1].r.string_val));}
#line 2099 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 217 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"class_interface \n";}
#line 2105 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 218 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"class_implementation \n";}
#line 2111 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 219 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"protocol \n";}
#line 2117 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 220 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"struct \n";}
#line 2123 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 221 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"enum \n";}
#line 2129 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 223 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"class_interface: class_interface_header class_interface_body\n";
																classNode=NULL;
																 idsList.clear();
																 methodsList.clear();
																 method=NULL;
																}
#line 2140 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 232 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"class_interface_header:  AT_INTERFACE IDENTIFIER SEMI_COLUMN IDENTIFIER\n";
																				interface=InterfaceHelper::createNewInterface((yyvsp[-2].r.text),(yyvsp[0].r.text),symbolTable);
																				
																				
																				}
#line 2150 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 237 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																					Streams::verbose()<<"class_interface_header:  AT_INTERFACE IDENTIFIER\n";
																				 interface=InterfaceHelper::createNewInterface((yyvsp[0].r.text),"",symbolTable);

																				}
#line 2160 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 242 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Unknown type name '"<<(yyvsp[-1].r.text)<<"' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2166 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 243 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected Identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2172 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 245 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected Identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2178 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 248 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {	
															
														InterfaceHelper::addMethods(interface,methodsList);
																Streams::verbose()<<"class_interface_body:	protocol_reference_list instance_variables	interface_declaration_list	AT_END\n";
														}
#line 2188 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 254 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														Streams::verbose()<<"class_interface_body:	protocol_reference_list instance_variables AT_END\n";
														}
#line 2196 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 258 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {	
																InterfaceHelper::addMethods(interface,methodsList);
																Streams::verbose()<<"class_interface_body:	protocol_reference_list interface_declaration_list	AT_END\n";
														}
#line 2205 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 263 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {	
																InterfaceHelper::addMethods(interface,methodsList);
																Streams::verbose()<<"class_interface_body:	instance_variables	interface_declaration_list	AT_END\n";
														}
#line 2214 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 268 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																Streams::verbose()<<"class_interface_body:	protocol_reference_list 	AT_END\n";
														}
#line 2222 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 272 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"class_interface_body:instance_variables		AT_END\n";}
#line 2228 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 274 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {														
																InterfaceHelper::addMethods(interface,methodsList);
																Streams::verbose()<<"class_interface_body:interface_declaration_list	AT_END\n";
														}
#line 2237 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 278 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"class_interface_body:AT_END\n";}
#line 2243 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 279 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected '}' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2249 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 280 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected '}' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2255 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 281 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2261 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 282 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2267 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 283 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2273 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 284 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2279 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 285 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2285 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 286 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2291 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 287 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Missing '@end' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2297 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 291 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													if(interface!=NULL){
													InterfaceHelper::addInheritedProtocol(interface,idsList,symbolTable);
														idsList.clear();
													}
													Streams::verbose()<<"protocol_reference_list: LESS_THAN ids_list_identifier MORE_THAN\n";
												}
#line 2309 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 298 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected '>' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2315 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 301 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													Streams::verbose()<<"ids_list:ids_list_identifier COMMA IDENTIFIER\n"; 
													idsList.push_back((yyvsp[0].r.text));
													}
#line 2324 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 305 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													Streams::verbose()<<"ids_list_identifier:IDENTIFIER\n";
													idsList.push_back((yyvsp[0].r.text));
												    }
#line 2333 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 310 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"array with body";}
#line 2339 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 311 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"array without elements";}
#line 2345 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 315 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"array-element \n";}
#line 2351 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 316 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"array-element \n";}
#line 2357 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 317 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"empty element \n";}
#line 2363 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 318 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"inside braces element \n";}
#line 2369 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 319 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"inside braces element \n";}
#line 2375 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 320 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"inside braces element \n";}
#line 2381 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 323 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"instance_variables:OPEN_S	instance_variable_declaration	CLOSE_S\n";}
#line 2387 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 324 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"instance_variables:OPEN_S	 CLOSE_S\n";}
#line 2393 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 327 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"instance_variable_declarations:instance_variable_declarations instance_variable_declaration\n";}
#line 2399 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 328 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"instance_variable_declarations:instance_variable_declaration\n";}
#line 2405 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 329 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"instance_variable_declarations:variable_declaration_list\n";}
#line 2411 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 332 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"instance_variable_declaration:visibility_specification variable_declaration_list\n";
																	}
#line 2418 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 336 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										Streams::verbose()<<"variable_declaration_list: variable_declaration_list variable_declaration\n";
										InterfaceHelper::addDataMembers(interface,idsList,type,arrayList,flag,symbolTable,visibility);
											arrayList.clear();
												idsList.clear();
												flag=false;
										}
#line 2430 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 344 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										       InterfaceHelper::addDataMembers(interface,idsList,type,arrayList,flag,symbolTable,visibility);
												arrayList.clear();
												idsList.clear();
												flag=false;
										Streams::verbose()<<"variable_declaration_list: variable_declaration\n";
										}
#line 2442 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 354 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"visibility_specification:AT_PRIVATE\n";  visibility=new char[256]; visibility[0]='\0';strcat(visibility,(yyvsp[0].r.text));}
#line 2448 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 355 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"visibility_specification:AT_PROTECTED\n"; visibility=new char[256]; visibility[0]='\0';strcat(visibility,(yyvsp[0].r.text));}
#line 2454 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 356 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"visibility_specification:AT_PUBLIC\n"; visibility=new char[256]; visibility[0]='\0';strcat(visibility,(yyvsp[0].r.text));}
#line 2460 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 361 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"struct_variable_declaration:struct_declaration_list\n";}
#line 2466 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 364 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"variable_declaration:type IDENTIFIER	SEMI_COMA\n";
	                                           (yyval.r.text)=(yyvsp[-2].r.text);
												}
#line 2474 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 367 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";
														flag=true;
														 (yyval.r.text)=(yyvsp[-2].r.text);
													}
#line 2483 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 371 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2489 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 375 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									Streams::verbose()<<"ids_list:ids_list COMMA id_dec\n"; 

									}
#line 2498 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 379 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"ids_list:id_dec\n"; }
#line 2504 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 380 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2510 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 383 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose() <<" data_member: IDENTIFIER array_tag \n";
							 var=new Array((yyvsp[0].r.text),arrayAlloc.size(),NULL);
					       ( dynamic_cast<Array*>(var))->set_alloc(arrayAlloc);
						   arrayList.push_back( ( dynamic_cast<Array*>(var)));
						      arrayAlloc.clear();
							}
#line 2521 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 389 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {idsList.push_back((yyvsp[0].r.text)) ;Streams::verbose() <<" data_member: IDENTIFIER  \n";}
#line 2527 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 390 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;arrayAlloc.clear();}
#line 2533 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 391 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;arrayAlloc.clear();}
#line 2539 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 393 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {  
																												StructHelper::addDataMembers( myStruct,idsList,type,arrayList,flag, symbolTable);
																												arrayList.clear();
																												idsList.clear();
																												flag=false;
																										  Streams::verbose()<<"struct_declaration_list: struct_declaration_list  variable_declarationxx\n";
																										}
#line 2551 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 401 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {	
																												StructHelper::addDataMembers( myStruct,idsList,type,arrayList,flag, symbolTable);
																												arrayList.clear();
																														 	idsList.clear();
																															flag=false;
																										Streams::verbose()<<"struct_declaration_list:  variable_declarationxx\n";
																										}
#line 2563 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 408 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Illigal visibility specification at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2569 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 412 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
					myStruct=StructHelper::createNewStruct((yyvsp[0].r.text),symbolTable);
					Streams::verbose()<<"struct_header: STRUCT  IDENTIFIER\n";
					}
#line 2578 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 418 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"struct: STRUCT IDENTIFIER OPEN_S   CLOSE_S  entity SEMI_COMA\n";}
#line 2584 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 419 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"struct: STRUCT IDENTIFIER OPEN_S struct_variable_declaration  CLOSE_S enteity SEMI_COMA \n";}
#line 2590 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 420 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"struct: STRUCT IDENTIFIER OPEN_S   CLOSE_S SEMI_COMA\n";}
#line 2596 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 421 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"struct: STRUCT IDENTIFIER OPEN_S struct_variable_declaration  CLOSE_S  SEMI_COMA  \n";}
#line 2602 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 422 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2608 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 423 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2614 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 424 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2620 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 425 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2626 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 428 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"entity: IDENTIFIER COMMA  entity\n";}
#line 2632 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 429 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"entity:  IDENTIFIER \n";}
#line 2638 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 430 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2644 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 434 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"type:simple type\n";}
#line 2650 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 435 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"type: complex type\n";}
#line 2656 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 436 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"type: struct_type\n";}
#line 2662 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 437 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"type: enum_type\n";}
#line 2668 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 441 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {	Streams::verbose()<<"struct_type: STRUCT IDENTIFIER   \n";
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

  case 88:
#line 450 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"struct_type: STRUCT IDENTIFIER  MULTI \n";
													 type=symbolTable->getType((yyvsp[-1].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[-1].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2696 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 461 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"enum_type: ENUM IDENTIFIER \n";
													 type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2710 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 470 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"enum_type: ENUM IDENTIFIER  MULTI  \n";
													 type=symbolTable->getType((yyvsp[-1].r.text));
																if(type==NULL){
																									string error="Unknown type name '";
		error.append((yyvsp[-1].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
													}
#line 2724 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 481 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"int type \n";
																type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}
																}
#line 2738 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 490 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"char type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2751 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 498 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"float type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2764 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 506 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"NSString type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2777 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 514 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"void type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2790 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 522 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"bool type\n";
	type=symbolTable->getType((yyvsp[0].r.text));
																if(type==NULL){
																										string error="Unknown type name '";
		error.append((yyvsp[0].r.text));
		error.append("'.");
		Program::addError(new SemanticError(error));
																}}
#line 2803 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 532 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
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
#line 2818 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 543 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											Streams::verbose()<<"array_tag: array_first_tag array_tag_list \n"; 
										   }
#line 2826 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 548 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																Streams::verbose()<<"array_tag_list: array_tag_list OPEN_ARR INT_VAL CLOSE_ARR\n"; 
																arrayAlloc.push_back((yyvsp[-1].r.int_val));
														   }
#line 2835 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 553 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<" Error:missing  dimension in array tag  ";arrayAlloc.clear();}
#line 2841 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 556 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											Streams::verbose()<<"array_first_tag: OPEN_ARR INT_VAL CLOSE_ARR\n"; 
											arrayAlloc.push_back((yyvsp[-1].r.int_val));
											}
#line 2850 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 560 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											Streams::verbose()<<"array_first_tag: OPEN_ARR  CLOSE_ARR\n"; 
											arrayAlloc.push_back(-1);
											}
#line 2859 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 566 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"array with value\n";
								(yyval.r.node)=new AssignNode(scoop,NULL,(yyvsp[0].r.node));
							   }
#line 2867 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 571 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								Streams::verbose() <<"with value\n";
								(yyval.r.node)=new AssignNode(scoop,NULL,(yyvsp[0].r.node));
							 }
#line 2876 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 576 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {(yyval.r.node)=NULL;}
#line 2882 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 581 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																Streams::verbose()<<"interface_declaration_list:interface_declaration_list interface_declaration\n";
															 methodsList.push_back(method);
														
															 
																}
#line 2893 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 587 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																 Streams::verbose()<<"interface_declaration_list:interface_declaration\n";
															 methodsList.push_back(method);
															 
																 	
																 }
#line 2904 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 595 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"interface_declaration: class_method_declaration\n";}
#line 2910 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 596 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"interface_declaration: instance_method_declaration\n";}
#line 2916 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 600 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																Streams::verbose()<<"class_method_declaration: PLUS p_type method_selectors	SEMI_COMA\n";
																method=InterfaceHelper::createNewMethod(type,symbolTable,(yyvsp[-1].r.text),selectorsList,true);
															
																 selectorsList.clear();
																
																}
#line 2928 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 608 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2934 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 609 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected ';' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 2940 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 612 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
															Streams::verbose()<<"instance_method_declaration: MINUS p_type	method_selectors		SEMI_COMA\n";
															method=InterfaceHelper::createNewMethod(type,symbolTable,(yyvsp[-1].r.text),selectorsList,false);
																 selectorsList.clear();
																
																
															}
#line 2952 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 621 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																Streams::verbose()<<"p_type : OPEN_P type CLOSE_P\n";
																(yyval.r.text)=(yyvsp[-1].r.text);
																}
#line 2961 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 630 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																Streams::verbose()<<"method_selectors: selectors_list\n";
																	(yyval.r.text)="";
																}
#line 2970 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 634 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"method_selectors:IDENTIFIER \n";(yyval.r.text)=(yyvsp[0].r.text);}
#line 2976 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 636 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													Streams::verbose()<<"selectors_list:	selectors_list selector_decleration\n";
																
													selectorsList.push_back(tselector);
													tselector=NULL;
											}
#line 2987 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 642 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														Streams::verbose()<<"selectors_list:	 selector_decleration\n";
												selectorsList.clear();

												selectorsList.push_back(tselector);
												tselector=NULL;
}
#line 2999 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 650 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																				Streams::verbose()<<"selector_decleration:	IDENTIFIER	SEMI_COLUMN	parameter_list	\n";
																				tselector=new DeclerationSelector((yyvsp[-2].r.text),selectorVarList);
																			}
#line 3008 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 656 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														Streams::verbose()<<"parameter_list: parameter_list parameter\n";
																	selectorVarList.push_back(var);		
											}
#line 3017 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 660 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									selectorVarList.clear();
										selectorVarList.push_back(var);		
											
				 
														Streams::verbose()<<"parameter_list:  parameter\n";
						
					}
#line 3030 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 669 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																Streams::verbose()<<"parameter:  p_type IDENTIFIER\n";
																
																if(type!=NULL){
																var=new Variable((yyvsp[0].r.text),type);
																}
																else{
																Streams::verbose()<<"Error:Type not found.\n";
																}
																}
#line 3045 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 682 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"class_implementation: class_implementation_header class_implementation_body\n";}
#line 3051 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 685 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																	Streams::verbose()<<"class_implementation_header: AT_IMPLEMENTATION IDENTIFIER SEMI_COLUMN IDENTIFIER\n";
																	interface=InterfaceHelper::checkImplementation((yyvsp[-2].r.text),symbolTable,(yyvsp[0].r.text));
																	
																}
#line 3061 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 690 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																interface=InterfaceHelper::checkImplementation((yyvsp[0].r.text),symbolTable,"");
																	
																}
#line 3070 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 696 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																	Streams::verbose()<<"class_implementation_body: instance_variables	implementation_definition_list	AT_END\n";
																			InterfaceHelper:: implementMethods(methodsList, interface);
														methodsList.clear();
														}
#line 3080 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 702 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    { 
																	Streams::verbose()<<"class_implementation_body: instance_variables									AT_END\n";
																}
#line 3088 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 705 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																	Streams::verbose()<<"class_implementation_body:						implementation_definition_list	AT_END\n";
																	InterfaceHelper:: implementMethods(methodsList, interface);
														methodsList.clear();
														
																}
#line 3099 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 711 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"class_implementation_body:	AT_END\n";}
#line 3105 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 714 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {	 methodsList.push_back(method);Streams::verbose()<<"implementation_definition_list: implementation_definition_list implementation_definition\n";}
#line 3111 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 715 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {	 methodsList.push_back(method);Streams::verbose()<<"implementation_definition_list: implementation_definition\n";}
#line 3117 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 718 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"implementation_definition: class_implementation_definition	\n";}
#line 3123 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 719 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"implementation_definition: instance_implementation_definition \n";}
#line 3129 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 722 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														Streams::verbose()<<"class_implementation_definition: class_implementation_definition_header block_body";
														functionNode->addNode(cscoop);
														functionNode=NULL;
																scoop=NULL;
															scoop=NULL;
													}
#line 3141 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 731 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										Streams::verbose()<<"class_implementation_definition_header: PLUS p_type		 method_selectors\n";
										method=InterfaceHelper:: createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,true);
																 selectorsList.clear();
									           functionNode= ScoopHelper::createNewFunctionNode(method,interface->static_twin);
												scoop=functionNode;				
																
										}
#line 3154 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 742 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
															Streams::verbose()<<"instance_implementation_definition: instance_implementation_definition_header block_body\n";
														functionNode->addNode(cscoop);
														functionNode=NULL;
																scoop=NULL;
															scoop=NULL;
										
															}
#line 3167 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 752 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											     Streams::verbose()<<"instance_implementation_definition_header:MINUS p_type		method_selectors\n";
												 method=InterfaceHelper:: createNewMethod(type,symbolTable,(yyvsp[0].r.text),selectorsList,false);
																 selectorsList.clear();
									           functionNode= ScoopHelper::createNewFunctionNode(method,interface);
												scoop=functionNode;
												}
#line 3179 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 761 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												
												Streams::verbose()<<"block_body:OPEN_S  block_body_part \n";
												(yyval.r.node)=(yyvsp[-1].r.node);
												}
#line 3189 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 768 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												
                                                scoop=ScoopHelper::createNewScoop(scoop);
												
												
												scoopVector.push_back(scoop);
												Streams::verbose()<<"block_body_header:OPEN_S	\n";
												(yyval.r.node)=scoop;
												}
#line 3203 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 780 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cscoop=scoop;scoop=scoop->getParent();
												Streams::verbose()<<"block_body_statements:statement_list	CLOSE_S	\n";
												}
#line 3212 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 784 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												cscoop=scoop;scoop=scoop->getParent();
												Streams::verbose()<<"block_body_statements:CLOSE_S\n";
												}
#line 3221 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 788 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											  cscoop=scoop; scoop=scoop->getParent();
												Streams::verbose()<<"block_body_statements: error CLOSE_S\n";
												}
#line 3230 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 794 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"statement_list: statement_list statement\n";
											(yyval.r.text)=(yyvsp[0].r.text);
											scoop->addNode((yyvsp[0].r.node));
											
											}
#line 3240 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 799 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"statement_list: statement\n";
											(yyval.r.text)=(yyvsp[0].r.text);
											(yyval.r.node)=(yyvsp[0].r.node);
											scoop->addNode((yyvsp[0].r.node));
											
											}
#line 3251 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 808 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"statement: loop_statement\n";
											(yyval.r.text)="loop";
											(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3260 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 812 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"statement: conditional_statement\n";
											(yyval.r.text)="cond";
											(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3269 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 816 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												Streams::verbose()<<"statement: expr\n";
												(yyval.r.text)="expr";
												(yyval.r.node)=(yyvsp[-1].r.node);
												//nodeXX=$<r.node>1;
											}
#line 3280 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 822 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											Streams::verbose()<<"statement: variable_declaration\n";
											
												ScoopHelper::addVariables(idsList,arrayList,type,flag,scoop);
												arrayList.clear();
												idsList.clear();
												flag=false;
												(yyval.r.node)=(yyvsp[0].r.node);
										    }
#line 3294 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 831 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"statement: block_body\n";(yyval.r.text)=new char[256];(yyval.r.text)[0]='\0';strcat((yyval.r.text),"Block");
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3302 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 834 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"statement: return_statement\n";
												(yyval.r.text)="return";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3311 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 838 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"statement: try_catch\n";}
#line 3317 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 840 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
	                                            (yyval.r.text)="asm";
												(yyval.r.node)=(yyvsp[0].r.node);}
#line 3325 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 843 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
	 (yyval.r.text)="call";
	(yyval.r.node)=(yyvsp[-1].r.node);
	}
#line 3334 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 848 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    { Streams::verbose()<<"error SEMI_COMA \n";}
#line 3340 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 853 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"@asm command \n";
	                                         (yyval.r.node)=new AsmNode(scoop,*(yyvsp[-1].r.string_val));
											 }
#line 3348 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 859 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														Streams::verbose()<<"variable_declaration:type IDENTIFIER	SEMI_COMA\n";
														 (yyval.r.text)=(yyvsp[-2].r.text);
														 (yyval.r.node)=new DeclerationNode(declarationList,scoop,type->get_name());
														 declarationList.clear();
														}
#line 3359 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 865 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
														Streams::verbose()<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";
														flag=true;
														 (yyval.r.text)=(yyvsp[-2].r.text);
														  (yyval.r.node)=new DeclerationNode(declarationList,scoop,type->get_name());
														 declarationList.clear();
														}
#line 3371 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 872 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"variable_declaration:enum\n";}
#line 3377 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 876 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"variable_list:variable_list COMMA variable\n";}
#line 3383 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 877 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"variable_list:variable\n";
										
										}
#line 3391 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 880 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected ',' at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 3397 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 883 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											Streams::verbose() <<"variable:  IDENTIFIER array_tag initializer \n";
											 var=new Array((yyvsp[-1].r.text),arrayAlloc.size(),NULL);
											(dynamic_cast<Array*>(var))->set_alloc(arrayAlloc);
											 arrayList.push_back( ( dynamic_cast<Array*>(var)));
											 arrayAlloc.clear();
											}
#line 3409 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 890 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    { 
											Streams::verbose() <<"variable:  IDENTIFIER main_initializer \n";
											idsList.push_back((yyvsp[-1].r.text)) ;
											IdentifierNode* identifierNode=new IdentifierNode((yyvsp[-1].r.text),scoop);
											if((yyvsp[0].r.node)!=NULL){
											(dynamic_cast<AssignNode*>((yyvsp[0].r.node)))->setLeftExp(identifierNode);
											}
											declarationList.push_back(make_pair((yyvsp[-1].r.text),(yyvsp[0].r.node)));
											}
#line 3423 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 899 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"Error: Expected identifier at Line No:"<<yylval.r.lineNo<<" Column No:"<<yylval.r.colNo<<endl;}
#line 3429 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 902 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"return_statement: RETURN expr\n";
												 (yyval.r.node)=new ReturnNode(scoop,(yyvsp[-1].r.node));
												}
#line 3437 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 907 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"loop_statement: for_loop\n";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3445 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 910 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"loop_statement: while_loop\n";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3453 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 913 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"loop_statement: do_while_loop\n";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3461 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 918 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"do_while: do_header   statement   while_loop_header   SEMI_COMMA\n";
													(yyval.r.node)=new DoWhileNode((yyvsp[-1].r.node),(yyvsp[-2].r.node),scoop);
													}
#line 3469 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 923 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"do_header: DO\n";}
#line 3475 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 926 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
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
#line 3496 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 945 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P for_initializer	SEMI_COMA logic_expr1 SEMI_COMA expr			CLOSE_P\n";
										(yyval.r.node)=new ForNode((yyvsp[-5].r.node),(yyvsp[-3].r.node),(yyvsp[-1].r.node),NULL,scoop);
										//nodeXX=$<r.node>5;
										}
#line 3505 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 951 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P					SEMI_COMA logic_expr1 SEMI_COMA expr			CLOSE_P\n";
										(yyval.r.node)=new ForNode(NULL,(yyvsp[-3].r.node),(yyvsp[-1].r.node),NULL,scoop);
										}
#line 3513 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 955 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA			 SEMI_COMA expr			CLOSE_P\n";
										(yyval.r.node)=new ForNode((yyvsp[-4].r.node),NULL,(yyvsp[-1].r.node),NULL,scoop);
										}
#line 3521 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 959 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA logic_expr1 SEMI_COMA				CLOSE_P	\n";
										(yyval.r.node)=new ForNode((yyvsp[-4].r.node),(yyvsp[-2].r.node),NULL,NULL,scoop);
										}
#line 3529 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 964 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P	for_initializer	SEMI_COMA			 SEMI_COMA				CLOSE_P	\n";
										(yyval.r.node)=new ForNode((yyvsp[-3].r.node),NULL,NULL,NULL,scoop);
										}
#line 3537 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 968 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P					SEMI_COMA logic_expr1 SEMI_COMA				CLOSE_P\n";
										(yyval.r.node)=new ForNode(NULL,(yyvsp[-2].r.node),NULL,NULL,scoop);
										}
#line 3545 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 972 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"for_loop_header: FOR OPEN_P 				SEMI_COMA			 SEMI_COMA expr			CLOSE_P";
										(yyval.r.node)=new ForNode(NULL,NULL,(yyvsp[-1].r.node),NULL,scoop);
										}
#line 3553 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 977 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"for_loop_hearder: FOR OPEN_P 				SEMI_COMA			SEMI_COMA 				CLOSE_P	\n";
											(yyval.r.node)=new ForNode(NULL,NULL,NULL,NULL,scoop);
											}
#line 3561 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 982 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"for_initializer: INT IDENTIFIER EQUAL expr\n";
											AssignNode * temp=new AssignNode(scoop,new IdentifierNode((yyvsp[-2].r.text),scoop),(yyvsp[0].r.node));
											
											//temp->add($<r.text>2,);
											
											//temp.push_back(make_pair($<r.text>2,$<r.node>4));
											DeclerationNode* temp1=new DeclerationNode(list<pair<string,Node*>>(),scoop,"int");
											temp1->add((yyvsp[-2].r.text),temp);
										 (yyval.r.node)=temp1; 
										 idsList.push_back((yyvsp[-2].r.text));
										}
#line 3577 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 993 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"for_initializer: IDENTIFIER EQUAL expr\n";
										(yyval.r.node)=new AssignNode(scoop,new IdentifierNode((yyvsp[-2].r.text),scoop),(yyvsp[0].r.node));
										}
#line 3585 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 996 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"for_initializer: IDENTIFIER\n";
										(yyval.r.node)=new IdentifierNode((yyvsp[0].r.text),scoop);
										}
#line 3593 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 1001 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"logic_expr:expr AND! expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),AND_AND,scoop);
										}
#line 3601 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 1004 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"logic_expr:logic_expr OR_OR logic_expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),OR_OR,scoop);
										}
#line 3609 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 1007 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {(yyval.r.node)=(yyvsp[0].r.node);
										
										}
#line 3617 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 1013 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"logic_expr:expr LESS_THAN expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),LESS_THAN,scoop);
										}
#line 3625 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 1016 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"logic_expr:expr MORE_THAN expr\n";
										 (yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),MORE_THAN,scoop);
										}
#line 3633 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 1019 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"logic_expr:expr LESS_OR_EQUAL expr\n";
										 (yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),LESS_OR_EQUAL,scoop);
										}
#line 3641 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 1022 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"logic_expr:expr MORE_OR_EQUAL expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),MORE_OR_EQUAL,scoop);
										}
#line 3649 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 1025 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"logic_expr:expr EQUAL_EQUAL expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),EQUAL_EQUAL,scoop);
										}
#line 3657 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 1028 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"logic_expr:expr EQUAL_EQUAL expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),NOT_EQUAL,scoop);
										}
#line 3665 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 1031 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"logic_expr:NOT_EQUAL expr\n";
										 (yyval.r.node)=new UnaryNode(scoop,(yyvsp[0].r.node),NOT_EQUAL);
										}
#line 3673 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 1034 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"logic_expr:OPEN_P logic_expr CLOSE_P\n";
										 (yyval.r.node)=(yyvsp[-1].r.node);
										}
#line 3681 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 1038 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"logic_expr:TRUE\n";
										 (yyval.r.node)=new ConstantNode(true,scoop);
										}
#line 3689 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 1041 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"logic_expr:FALSE\n";
											 (yyval.r.node)=new ConstantNode(false,scoop);
										}
#line 3697 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1044 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"logic_expr:long id\n";
											 (yyval.r.node)=(yyvsp[0].r.node);
										}
#line 3705 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1050 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"expr:assign_expr\n";
										 (yyval.r.node)=(yyvsp[0].r.node);
										}
#line 3713 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1053 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"expr:simple_expr\n";
										(yyval.r.node)=(yyvsp[0].r.node);
										}
#line 3721 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1058 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										Streams::verbose()<<"assign_expr:long_id EQUAL simple_expr\n";
										//LongIdHelper::checkIdenentifier( scoop, interface,"set1");
										(yyval.r.node)=new AssignNode(scoop,(yyvsp[-2].r.node),(yyvsp[0].r.node));
										}
#line 3731 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1065 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"long_id: long_id.IDENTIFIER\n";
																(yyval.r.node)=new DotNode(scoop,(yyvsp[-2].r.node),(yyvsp[0].r.text));

											;}
#line 3740 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1069 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												Streams::verbose()<<"long_id: long_id.message_call\n";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3749 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1073 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																LongIdHelper::addIdentifier((yyvsp[0].r.text)); 
																(yyval.r.node)=new IdentifierNode((yyvsp[0].r.text),scoop);
																Streams::verbose()<<"long_id:IDENTIFIER :"<<(yyvsp[0].r.text)<<"\n";
															   }
#line 3759 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1078 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											Streams::verbose()<<"long_id: long_id.array_access\n";
												(yyval.r.node)=(yyvsp[0].r.node);
											}
#line 3768 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1086 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
							Streams::verbose()<<"array_access: details\n";

							(yyval.r.node)=new ArrayAccessNode((yyvsp[-3].r.node),(yyvsp[-1].r.node),scoop);

						}
#line 3779 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1095 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										Streams::verbose()<<"simple_expr:STRING_VAL\n";
									(yyval.r.node)=new ConstantNode(*((yyvsp[0].r.string_val)),scoop);
									Streams::verbose()<<"node typr"<<(yyval.r.node)->generateType()->get_name()<<"\n";
									(yyval.r.string_val)=(yyvsp[0].r.string_val);
									}
#line 3790 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1101 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									Streams::verbose()<<"simple_expr:INT_VAL\n";
									(yyval.r.node)=new ConstantNode(yylval.r.int_val,scoop);
									}
#line 3799 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1105 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"simple_expr:FLOAT_VAL\n";
									(yyval.r.node)=new ConstantNode(yylval.r.float_val,scoop);
									}
#line 3807 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1108 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"simple_expr:CHAR_VAL\n";
										(yyval.r.node)=new ConstantNode(yylval.r.char_val,scoop);
									}
#line 3815 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1111 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"simple_expr:long_id\n";
									(yyval.r.node)=(yyvsp[0].r.node);
									}
#line 3823 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1114 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										Streams::verbose()<<"simple_expr:expr PLUS expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),PLUS,scoop);
									}
#line 3832 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1118 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										Streams::verbose()<<"simple_expr:expr MINUS expr\n";
										(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),MINUS,scoop);
									}
#line 3841 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1122 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"simple_expr:expr MULTI expr\n";
											(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),MULTI,scoop);
									}
#line 3849 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1125 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									Streams::verbose()<<"simple_expr:expr DIV expr\n";
									(yyval.r.node)=new BinaryOperationNode((yyvsp[-2].r.node),(yyvsp[0].r.node),DIV,scoop);
									}
#line 3858 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1129 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"simple_expr:OPEN_P expr CLOSE_P\n";(yyval.r.node)=(yyvsp[-1].r.node);}
#line 3864 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1130 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"simple_expr:ID++";}
#line 3870 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1131 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"simple_expr:ID--";}
#line 3876 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1132 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"simple_expr:++ID";}
#line 3882 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1133 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"simple_expr:--ID";}
#line 3888 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1134 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																Streams::verbose()<<"expr:p_type expr\n";
																if(type!=NULL)
																(yyval.r.node)=new CastNode(scoop,type,(yyvsp[0].r.node));
															}
#line 3898 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1141 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
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
#line 3914 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1154 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
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
#line 3929 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1166 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"sender: message_call\n";
											
											callNode->setSender((yyvsp[0].r.node));
											 (yyval.r.node)=(yyvsp[0].r.node);
											 
											}
#line 3940 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1172 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"sender: IDENTIFIER\n";
											(yyval.r.node)=new IdentifierNode((yyvsp[0].r.text),scoop);
											
											//callNode=new CallNode(scoop);
											
											callNode->setSender((yyval.r.node));
											
											}
#line 3953 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1182 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"message: IDENTIFIER\n";
											(yyval.r.text)=(yyvsp[0].r.text);
												
											}
#line 3962 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1186 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											Streams::verbose()<<"message_selectors_list\n";
											//$<r.node>$=$<r.text>1;
											(yyval.r.text)="";
											}
#line 3972 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1193 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											Streams::verbose()<<"message_selectors_list:message_selectors_list message_selector \n";
												callNode->addSelector(cselector);
											cselector=NULL;
												}
#line 3982 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1198 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {	callNode->addSelector(cselector);
							cselector=NULL;
								Streams::verbose()<<"message_selectors_list: message_selector\n";
											
		}
#line 3992 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1204 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
									cselector->name=(yyvsp[-2].r.text);
							}
#line 4000 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1208 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"argument_list: argument_list argument\n";
												cselector->addArg((yyvsp[0].r.node));}
#line 4007 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1210 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"argument_list: argument\n";
												cselector=new CallSelector("");
											cselector->addArg((yyvsp[0].r.node));}
#line 4015 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1215 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											Streams::verbose()<<"argument: SEMI_COLUMN expr\n";
											(yyval.r.node)=(yyvsp[0].r.node);
											//callNode->addArgument($<r.node>1,"");
											
											}
#line 4026 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1223 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
											Streams::verbose()<<"while_loop:while_loop_header statement\n";
											 (yyval.r.node)=new WhileNode((yyvsp[-1].r.node),(yyvsp[0].r.node),scoop);
										}
#line 4035 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1229 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"while_loop_header: WHILE OPEN_P logic_expr CLOSE_P\n";
											(yyval.r.node)=(yyvsp[-1].r.node);
											}
#line 4043 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1234 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"conditional_statement: if_header statement\n";
												 (yyval.r.node)=new IfNode((yyvsp[-1].r.node),(yyvsp[0].r.node),scoop,NULL);
												}
#line 4051 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1237 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												Streams::verbose()<<"conditional_statement: if_header statement with else\n";
												 (yyval.r.node)=new IfNode((yyvsp[-3].r.node),(yyvsp[-2].r.node),scoop,new ElseNode((yyvsp[0].r.node),scoop));
												}
#line 4060 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1241 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"conditional_statement: switch_header switch_body statement\n";
											(yyval.r.node)=tempSwitch;
										}
#line 4068 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1246 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"if_header: IF OPEN_P logic_expr CLOSE_P\n";
											(yyval.r.node)=(yyvsp[-1].r.node);
											}
#line 4076 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1251 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"switch_header: SWITCH OPEN_P IDENTIFIER CLOSE_P\n";
										
										tempSwitch->setExpr(new IdentifierNode((yyvsp[-2].r.text),scoop));
									}
#line 4085 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1257 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {scoop=new ScoopNode(scoop);tempSwitch=new SwitchNode(NULL,std::list<pair<Node*,Node*>>(),scoop);}
#line 4091 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1260 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 4097 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1261 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 4103 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 1262 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 4109 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 1263 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 4115 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1266 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 4121 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1267 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {;}
#line 4127 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1270 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase((yyvsp[-4].r.node),(yyvsp[-2].r.node));}
#line 4133 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1271 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase((yyvsp[-2].r.node),(yyvsp[0].r.node));}
#line 4139 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1272 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase((yyvsp[-3].r.node),NULL);}
#line 4145 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1275 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase(NULL,(yyvsp[-2].r.node));}
#line 4151 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1276 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase(NULL,(yyvsp[0].r.node));}
#line 4157 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1277 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {tempSwitch->addCase(NULL,(yyvsp[-1].r.node));}
#line 4163 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1279 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
										Streams::verbose()<<"protocol: protocol_header protocol_body\n";
										idsList.clear();
										methodsList.clear();
										method=NULL;
										}
#line 4174 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1287 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								Streams::verbose()<<"protocol_header: AT_PROTOCOL IDENTIFIER \n";
								protocol=ProtocolHelper ::createNewProtocol((yyvsp[0].r.text),symbolTable );
								
								}
#line 4184 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1294 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								Streams::verbose()<<"protocol_body:	protocol_reference_list interface_declaration_list	AT_END\n";
								ProtocolHelper::addInheritedProtocol( protocol, idsList,symbolTable);
								ProtocolHelper::addMethods( protocol,methodsList);
								methodsList.clear();
								idsList.clear();
								}
#line 4196 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1302 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								Streams::verbose()<<"protocol_body:	interface_declaration_list	AT_END\n";
									
								ProtocolHelper::addMethods( protocol,methodsList);
								methodsList.clear();
								
								}
#line 4208 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 1310 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
								Streams::verbose()<<"protocol_body:	protocol_reference_list AT_END	\n";
											ProtocolHelper::addInheritedProtocol( protocol, idsList,symbolTable);
								idsList.clear();
								}
#line 4218 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1316 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"protocol_body:	AT_END\n";}
#line 4224 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 1318 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																Streams::verbose()<<"enum: ENUM IDENTIFIER  OPEN_S list_expr CLOSE_S SEMI_COMA  \n";
																
																EnumHelper::createNewEnum( (yyvsp[-4].r.text),idsList, symbolTable);
																idsList.clear();
															 }
#line 4235 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 1324 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
																Streams::verbose()<<"enum: ENUM IDENTIFIER SEMI_COMA\n";
																EnumHelper::createNewEnum( (yyvsp[-1].r.text),idsList, symbolTable);
															  }
#line 4244 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 1331 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												Streams::verbose()<<"list_expr:IDENTIFIER EQUAL expr COMMA list_expr\n";
												idsList.push_back((yyvsp[-4].r.text));
													(yyval.r.node)=new AssignNode(scoop,new IdentifierNode((yyvsp[-4].r.text),scoop),(yyvsp[-2].r.node));
												}
#line 4254 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 1336 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												Streams::verbose()<<"list_expr:IDENTIFIER EQUAL expr\n";
												idsList.push_back((yyvsp[-2].r.text));
												(yyval.r.node)=new AssignNode(scoop,new IdentifierNode((yyvsp[-2].r.text),scoop),(yyvsp[0].r.node));
												}
#line 4264 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 1341 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
													Streams::verbose()<<"list_expr:IDENTIFIER \n";
													idsList.push_back((yyvsp[0].r.text));
													//??
												}
#line 4274 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 1346 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												  Streams::verbose()<<"list_expr:IDENTIFIER  COMMA list_expr \n";
												  idsList.push_back((yyvsp[-2].r.text));
												  //??
												}
#line 4284 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 1353 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {
												  Streams::verbose()<<"try_catch:TRY statement catch_list finally_statement \n";
												}
#line 4292 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 1357 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {				  
								Streams::verbose()<<"try_catch:TRY statement catch_list \n";
							  }
#line 4300 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 1362 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"catch_list:CATCH OPEN_S type IDENTIFIER CLOSE_S statement \n";}
#line 4306 "yacc.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 1363 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1646  */
    {Streams::verbose()<<"catch_list:catch_list CATCH OPEN_S type IDENTIFIER CLOSE_S statement \n";}
#line 4312 "yacc.cpp" /* yacc.c:1646  */
    break;


#line 4316 "yacc.cpp" /* yacc.c:1646  */
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
#line 1368 "C:\\Users\\toshiba\\Source\\Repos\\occ3\\compiler\\yacc.y" /* yacc.c:1906  */

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
	 	string input = "code.txt";
	bool f = true;

	   for(int i = 0; i < argc; i++) 
		{
			if(string(argv[i])=="-o")
			{
				if(i+1<argc)
				{
						  ofs=std::ofstream(string(argv[i+1]), std::ofstream::out);
				}	
			}
			if (string(argv[i]) == "-i")
			{
				if (i + 1<argc)
				{
				//	ofs = std::ofstream(string(argv[i]), std::ofstream::out);
					input = string(argv[i+1]);
					addFile(input);
					f = false;
				}
			}

		}
	globalScoop=new ScoopNode(NULL);
	globalScoop->setOffsetRegister("gp");

	addFile("nsobject.oc");

	addFile("system.oc");
	if (f)
	{
		addFile(input);
	}
	
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
