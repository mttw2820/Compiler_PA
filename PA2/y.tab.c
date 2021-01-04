/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "bar.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
int yylex(void);
int yyerror(char*);

#line 73 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    STRING = 259,
    INTEGER = 260,
    CHARACTER = 261,
    REAL = 262,
    BREAK = 263,
    CASE = 264,
    CHAR = 265,
    DEFAULT = 266,
    ELSE = 267,
    FLOAT = 268,
    FOR = 269,
    IF = 270,
    INT = 271,
    RETURN = 272,
    SWITCH = 273,
    VOID = 274,
    WHILE = 275,
    ERROR = 276,
    ASGNOP = 277,
    ADDORIGIN = 278,
    SUBORIGIN = 279,
    MULORIGIN = 280,
    DIVORIGIN = 281,
    MODORIGIN = 282,
    OR = 283,
    AND = 284,
    RIGHTBIG = 285,
    LEFTBIG = 286,
    RIGHTEQBIG = 287,
    LEFTEQBIG = 288,
    EQUAL = 289,
    NEQUAL = 290,
    ADDOP = 291,
    SUBOP = 292,
    MULOP = 293,
    DIVOP = 294,
    MODOP = 295,
    INCRE = 296,
    DECRE = 297
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define STRING 259
#define INTEGER 260
#define CHARACTER 261
#define REAL 262
#define BREAK 263
#define CASE 264
#define CHAR 265
#define DEFAULT 266
#define ELSE 267
#define FLOAT 268
#define FOR 269
#define IF 270
#define INT 271
#define RETURN 272
#define SWITCH 273
#define VOID 274
#define WHILE 275
#define ERROR 276
#define ASGNOP 277
#define ADDORIGIN 278
#define SUBORIGIN 279
#define MULORIGIN 280
#define DIVORIGIN 281
#define MODORIGIN 282
#define OR 283
#define AND 284
#define RIGHTBIG 285
#define LEFTBIG 286
#define RIGHTEQBIG 287
#define LEFTEQBIG 288
#define EQUAL 289
#define NEQUAL 290
#define ADDOP 291
#define SUBOP 292
#define MULOP 293
#define DIVOP 294
#define MODOP 295
#define INCRE 296
#define DECRE 297

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 7 "bar.y" /* yacc.c:355  */

	int iVal;
	float rVal;
	char* sVal;

#line 203 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 220 "y.tab.c" /* yacc.c:358  */

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
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


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   213

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  179

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

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
      43,    44,     2,     2,    46,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    51,    45,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    49,     2,    50,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    47,     2,    48,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    19,    19,    21,    22,    24,    25,    27,    28,    30,
      31,    32,    34,    35,    37,    39,    41,    42,    44,    46,
      47,    48,    49,    51,    52,    54,    55,    57,    58,    60,
      61,    63,    64,    65,    66,    67,    68,    69,    70,    72,
      73,    75,    77,    78,    80,    81,    83,    84,    86,    88,
      89,    91,    92,    94,    95,    96,    97,    98,    99,   101,
     102,   104,   105,   107,   108,   110,   111,   112,   113,   114,
     115,   116,   118,   119,   120,   122,   123,   124,   125,   127,
     128,   129,   130,   131,   132,   133,   135,   136,   138,   139,
     141,   142,   144,   145,   147,   148,   149,   151,   152,   153,
     154
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "STRING", "INTEGER",
  "CHARACTER", "REAL", "BREAK", "CASE", "CHAR", "DEFAULT", "ELSE", "FLOAT",
  "FOR", "IF", "INT", "RETURN", "SWITCH", "VOID", "WHILE", "ERROR",
  "ASGNOP", "ADDORIGIN", "SUBORIGIN", "MULORIGIN", "DIVORIGIN",
  "MODORIGIN", "OR", "AND", "RIGHTBIG", "LEFTBIG", "RIGHTEQBIG",
  "LEFTEQBIG", "EQUAL", "NEQUAL", "ADDOP", "SUBOP", "MULOP", "DIVOP",
  "MODOP", "INCRE", "DECRE", "'('", "')'", "';'", "','", "'{'", "'}'",
  "'['", "']'", "':'", "$accept", "Program", "DeclarationList",
  "Declaration", "FuncDeclaration", "Params", "ParamList", "Param",
  "CompoundStmt", "LocalDeclarationList", "VarDeclaration", "Type", "IDs",
  "Value", "StmtList", "Stmt", "MatchedStmt", "OpenStmt", "SwitchStmt",
  "CaseList", "DefaultCase", "ReturnStmt", "BreakStmt", "ExprStmt", "Expr",
  "AssignExpr", "Variable", "SimpleExpr", "AndExpr", "RelExpr", "AddExpr",
  "Term", "Factor", "NumberLiteral", "IncDec", "WhileStmt", "ForStmt",
  "FunctionCall", "Arguments", "ArgumentList", YY_NULLPTR
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
     295,   296,   297,    40,    41,    59,    44,   123,   125,    91,
      93,    58
};
# endif

#define YYPACT_NINF -139

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-139)))

#define YYTABLE_NINF -21

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       6,  -139,  -139,  -139,  -139,    15,     6,  -139,  -139,  -139,
      31,  -139,  -139,    -6,   -15,  -139,    69,     0,  -139,    84,
     107,   -26,    21,  -139,    84,    22,    47,  -139,    50,     6,
    -139,  -139,  -139,  -139,  -139,  -139,     6,  -139,    84,    66,
      -5,  -139,  -139,    70,    82,    83,   130,    95,    96,   142,
    -139,  -139,   142,  -139,  -139,  -139,  -139,  -139,  -139,  -139,
    -139,  -139,  -139,    85,  -139,   -13,    99,   112,    59,     5,
      38,  -139,  -139,   133,  -139,  -139,  -139,   139,   142,  -139,
     142,   142,  -139,   103,   142,   142,    64,  -139,   106,  -139,
     142,   142,   142,   142,   142,   142,  -139,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     104,  -139,  -139,  -139,   108,   119,   110,   109,   124,  -139,
     125,   126,  -139,  -139,  -139,  -139,  -139,  -139,  -139,   112,
      59,     5,     5,     5,     5,     5,     5,    38,    38,  -139,
    -139,  -139,  -139,   159,  -139,   142,   114,   111,    54,  -139,
    -139,   129,  -139,   165,   169,  -139,  -139,   142,   114,   187,
      93,   149,  -139,  -139,   143,   190,   146,   150,    71,  -139,
     148,  -139,  -139,  -139,  -139,   114,  -139,   114,   114
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    21,    22,    19,    20,     0,     2,     4,     6,     5,
       0,     1,     3,    26,     0,    24,    11,     0,    18,     0,
      10,     0,     9,    13,     0,     0,    26,    23,     0,     0,
      14,    25,     8,    17,     7,    12,    28,    16,     0,     0,
      60,    86,    87,     0,     0,     0,     0,     0,     0,     0,
      88,    89,     0,    50,    15,    35,    27,    29,    30,    37,
      34,    36,    31,     0,    51,    82,    52,    62,    64,    71,
      74,    78,    85,     0,    33,    32,    80,    96,     0,    48,
       0,     0,    47,     0,     0,     0,    82,    81,     0,    49,
       0,     0,     0,     0,     0,     0,    83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      60,    84,   100,    99,     0,    95,     0,     0,     0,    46,
       0,     0,    79,    53,    54,    55,    56,    57,    58,    61,
      63,    65,    67,    66,    68,    69,    70,    72,    73,    75,
      76,    77,    94,     0,    59,     0,     0,     0,     0,    98,
      97,     0,    39,    29,     0,    91,    90,     0,     0,     0,
      45,     0,    38,    40,     0,     0,     0,     0,     0,    28,
       0,    28,    41,    93,    92,    43,    28,    44,    42
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -139,  -139,  -139,   197,  -139,  -139,  -139,   175,   -28,  -139,
     170,   -12,  -139,     2,  -101,    61,  -138,    51,  -139,  -139,
    -139,  -139,  -139,  -139,   -45,  -139,   -46,  -139,   113,   115,
      87,    18,   -43,  -139,   -63,  -139,  -139,  -139,  -139,  -139
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,     8,    21,    22,    23,    55,    36,
       9,    10,    14,    15,    39,    56,    57,    58,    59,   160,
     167,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,   114,   115
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      34,    83,    96,    86,    24,    25,    87,    88,   153,    90,
      91,    92,    93,    94,    95,    11,     1,    24,    28,     2,
     162,    27,     3,    96,    38,     4,    30,   111,    50,    51,
      18,    19,   113,   116,    13,   117,   118,    16,    77,   120,
     121,   105,   106,    17,    78,   123,   124,   125,   126,   127,
     128,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,   139,   140,   141,    29,   175,    40,
     177,    41,    31,    42,    43,   178,   107,   108,   109,     1,
      44,    45,     2,    46,    47,     3,    48,    26,    20,    99,
     100,   101,   102,   103,   104,    32,    17,    33,   150,   155,
     151,    33,   165,    49,   166,    50,    51,    50,    51,    52,
     -20,    53,   161,    33,    54,    79,   173,    40,    33,    41,
     156,    42,    43,   137,   138,    80,    81,    97,    44,    45,
      89,    46,    47,    40,    48,    41,   110,    42,    84,    85,
     174,    98,    40,   112,    41,    40,    42,    41,   119,    42,
     122,    49,   142,    78,   145,    50,    51,    52,   154,    53,
     144,    33,    40,   149,    41,   143,    42,    49,   146,   147,
     148,    50,    51,    52,   157,    82,    49,   158,   159,    49,
      50,    51,    52,    50,    51,    52,   131,   132,   133,   134,
     135,   136,   164,   168,   169,   170,    49,   171,   172,   176,
      50,    51,    52,    12,    35,     0,    37,   152,     0,   163,
     129,     0,     0,   130
};

static const yytype_int16 yycheck[] =
{
      28,    46,    65,    49,    16,     5,    49,    52,   146,    22,
      23,    24,    25,    26,    27,     0,    10,    29,    44,    13,
     158,    19,    16,    86,    36,    19,    24,    73,    41,    42,
      45,    46,    77,    78,     3,    80,    81,    43,    43,    84,
      85,    36,    37,    49,    49,    90,    91,    92,    93,    94,
      95,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   107,   108,   109,    46,   169,     3,
     171,     5,    50,     7,     8,   176,    38,    39,    40,    10,
      14,    15,    13,    17,    18,    16,    20,     3,    19,    30,
      31,    32,    33,    34,    35,    45,    49,    47,   143,    45,
     145,    47,     9,    37,    11,    41,    42,    41,    42,    43,
       3,    45,   157,    47,    48,    45,    45,     3,    47,     5,
     148,     7,     8,   105,   106,    43,    43,    28,    14,    15,
      45,    17,    18,     3,    20,     5,     3,     7,    43,    43,
     168,    29,     3,     4,     5,     3,     7,     5,    45,     7,
      44,    37,    44,    49,    45,    41,    42,    43,    47,    45,
      50,    47,     3,     4,     5,    46,     7,    37,    44,    44,
      44,    41,    42,    43,    45,    45,    37,    12,     9,    37,
      41,    42,    43,    41,    42,    43,    99,   100,   101,   102,
     103,   104,     5,    44,    51,     5,    37,    51,    48,    51,
      41,    42,    43,     6,    29,    -1,    36,   146,    -1,   158,
      97,    -1,    -1,    98
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    13,    16,    19,    53,    54,    55,    56,    62,
      63,     0,    55,     3,    64,    65,    43,    49,    45,    46,
      19,    57,    58,    59,    63,     5,     3,    65,    44,    46,
      65,    50,    45,    47,    60,    59,    61,    62,    63,    66,
       3,     5,     7,     8,    14,    15,    17,    18,    20,    37,
      41,    42,    43,    45,    48,    60,    67,    68,    69,    70,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    43,    49,    45,
      43,    43,    45,    76,    43,    43,    78,    84,    76,    45,
      22,    23,    24,    25,    26,    27,    86,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
       3,    78,     4,    76,    90,    91,    76,    76,    76,    45,
      76,    76,    44,    76,    76,    76,    76,    76,    76,    80,
      81,    82,    82,    82,    82,    82,    82,    83,    83,    84,
      84,    84,    44,    46,    50,    45,    44,    44,    44,     4,
      76,    76,    67,    68,    47,    45,    60,    45,    12,     9,
      71,    76,    68,    69,     5,     9,    11,    72,    44,    51,
       5,    51,    48,    45,    60,    66,    51,    66,    66
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    54,    54,    55,    55,    56,    56,    57,
      57,    57,    58,    58,    59,    60,    61,    61,    62,    63,
      63,    63,    63,    64,    64,    65,    65,    66,    66,    67,
      67,    68,    68,    68,    68,    68,    68,    68,    68,    69,
      69,    70,    71,    71,    72,    72,    73,    73,    74,    75,
      75,    76,    76,    77,    77,    77,    77,    77,    77,    78,
      78,    79,    79,    80,    80,    81,    81,    81,    81,    81,
      81,    81,    82,    82,    82,    83,    83,    83,    83,    84,
      84,    84,    84,    84,    84,    84,    85,    85,    86,    86,
      87,    87,    88,    88,    89,    90,    90,    91,    91,    91,
      91
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     6,     6,     1,
       1,     0,     3,     1,     2,     4,     2,     0,     3,     1,
       1,     1,     1,     3,     1,     4,     1,     2,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     7,     5,
       7,     8,     5,     4,     3,     0,     3,     2,     2,     2,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     4,
       1,     3,     1,     3,     1,     3,     3,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     1,     3,
       1,     2,     1,     2,     2,     1,     1,     1,     1,     1,
       5,     5,     9,     9,     4,     1,     0,     3,     3,     1,
       1
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
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
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
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
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
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
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
  switch (yyn)
    {
        case 2:
#line 19 "bar.y" /* yacc.c:1646  */
    {printf("Program -> DeclarationList\n");}
#line 1436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 21 "bar.y" /* yacc.c:1646  */
    {printf("DeclarationList -> DeclarationList Declaration\n");}
#line 1442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 22 "bar.y" /* yacc.c:1646  */
    {printf("DeclarationList -> Declaration\n");}
#line 1448 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 24 "bar.y" /* yacc.c:1646  */
    {printf("Declaration -> VarDeclaration\n");}
#line 1454 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 25 "bar.y" /* yacc.c:1646  */
    {printf("Declaration -> FuncDeclaration\n");}
#line 1460 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 27 "bar.y" /* yacc.c:1646  */
    {printf("FuncDeclaration -> Type %s ( Params ) CompoundStmt\n", (yyvsp[-4].sVal));}
#line 1466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 28 "bar.y" /* yacc.c:1646  */
    {printf("FuncDeclaration -> Type %s ( Params ) ;\n", (yyvsp[-4].sVal));}
#line 1472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 30 "bar.y" /* yacc.c:1646  */
    {printf("Params -> ParamList\n");}
#line 1478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 31 "bar.y" /* yacc.c:1646  */
    {printf("Params -> void\n");}
#line 1484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 32 "bar.y" /* yacc.c:1646  */
    {printf("Params -> Empty\n");}
#line 1490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 34 "bar.y" /* yacc.c:1646  */
    {printf("ParamList -> ParamList , Param\n");}
#line 1496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 35 "bar.y" /* yacc.c:1646  */
    {printf("ParamList -> Param\n");}
#line 1502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 37 "bar.y" /* yacc.c:1646  */
    {printf("Param -> Type Value\n");}
#line 1508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 39 "bar.y" /* yacc.c:1646  */
    {printf("CompoundStmt -> { LocalDeclarationList StmtList }\n");}
#line 1514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 41 "bar.y" /* yacc.c:1646  */
    {printf("LocalDeclarationList -> LocalDeclarationList VarDeclaration\n");}
#line 1520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 42 "bar.y" /* yacc.c:1646  */
    {printf("LocalDeclarationList -> Empty\n");}
#line 1526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 44 "bar.y" /* yacc.c:1646  */
    {printf("VarDeclaration -> Type IDs ;\n");}
#line 1532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 46 "bar.y" /* yacc.c:1646  */
    {printf("Type -> int\n");}
#line 1538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 47 "bar.y" /* yacc.c:1646  */
    {printf("Type -> void\n");}
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 48 "bar.y" /* yacc.c:1646  */
    {printf("Type -> char\n");}
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 49 "bar.y" /* yacc.c:1646  */
    {printf("Type -> float\n");}
#line 1556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 51 "bar.y" /* yacc.c:1646  */
    {printf("IDs -> IDs , Value\n");}
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 52 "bar.y" /* yacc.c:1646  */
    {printf("IDs -> Value\n");}
#line 1568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 54 "bar.y" /* yacc.c:1646  */
    {printf("Value -> %s [ %d ]\n", (yyvsp[-3].sVal), (yyvsp[-1].iVal));}
#line 1574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 55 "bar.y" /* yacc.c:1646  */
    {printf("Value -> %s\n", (yyvsp[0].sVal));}
#line 1580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 57 "bar.y" /* yacc.c:1646  */
    {printf("StmtList -> StmtList Stmt\n");}
#line 1586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 58 "bar.y" /* yacc.c:1646  */
    {printf("StmtList -> Empty\n");}
#line 1592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 60 "bar.y" /* yacc.c:1646  */
    {printf("Stmt -> MatchedStmt\n");}
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 61 "bar.y" /* yacc.c:1646  */
    {printf("Stmt -> OpenStmt\n");}
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 63 "bar.y" /* yacc.c:1646  */
    {printf("MatchedStmt -> ExprStmt\n");}
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 64 "bar.y" /* yacc.c:1646  */
    {printf("MatchedStmt -> ForStmt\n");}
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 65 "bar.y" /* yacc.c:1646  */
    {printf("MatchedStmt -> WhileStmt\n");}
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 66 "bar.y" /* yacc.c:1646  */
    {printf("MatchedStmt -> ReturnStmt\n");}
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 67 "bar.y" /* yacc.c:1646  */
    {printf("MatchedStmt -> CompoundStmt\n");}
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 68 "bar.y" /* yacc.c:1646  */
    {printf("MatchedStmt -> BreakStmt\n");}
#line 1640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 69 "bar.y" /* yacc.c:1646  */
    {printf("MatchedStmt -> SwitchStmt\n");}
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 70 "bar.y" /* yacc.c:1646  */
    {printf("MatchedStmt -> if ( Expr ) MatchedStmt else MatchedStmt\n");}
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 72 "bar.y" /* yacc.c:1646  */
    {printf("OpenStmt -> if ( Expr ) Stmt\n");}
#line 1658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 73 "bar.y" /* yacc.c:1646  */
    {printf("OpenStmt -> if ( Expr ) MatchedStmt else OpenStmt\n");}
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 75 "bar.y" /* yacc.c:1646  */
    {printf("SwitchStmt -> switch ( Expr ) { CaseList DefaultCase }\n");}
#line 1670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 77 "bar.y" /* yacc.c:1646  */
    {printf("CaseList -> CaseList case %d : StmtList\n", (yyvsp[-2].iVal));}
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 78 "bar.y" /* yacc.c:1646  */
    {printf("CaseList -> case %d : StmtList\n", (yyvsp[-2].iVal));}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 80 "bar.y" /* yacc.c:1646  */
    {printf("DefaultCase -> default : StmtList\n");}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 81 "bar.y" /* yacc.c:1646  */
    {printf("DefaultCase -> Empty\n");}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 83 "bar.y" /* yacc.c:1646  */
    {printf("ReturnStmt -> return Expr ;\n");}
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 84 "bar.y" /* yacc.c:1646  */
    {printf("ReturnStmt -> return ;\n");}
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 86 "bar.y" /* yacc.c:1646  */
    {printf("BreakStmt -> break ;\n");}
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 88 "bar.y" /* yacc.c:1646  */
    {printf("ExprStmt -> Expr ;\n");}
#line 1718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 89 "bar.y" /* yacc.c:1646  */
    {printf("ExprStmt -> ;\n");}
#line 1724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 91 "bar.y" /* yacc.c:1646  */
    {printf("Expr -> AssignExpr\n");}
#line 1730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 92 "bar.y" /* yacc.c:1646  */
    {printf("Expr -> SimpleExpr\n");}
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 94 "bar.y" /* yacc.c:1646  */
    {printf("AssignExpr -> Variable = Expr\n");}
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 95 "bar.y" /* yacc.c:1646  */
    {printf("AssignExpr -> Variable += Expr\n");}
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 96 "bar.y" /* yacc.c:1646  */
    {printf("AssignExpr -> Variable -= Expr\n");}
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 97 "bar.y" /* yacc.c:1646  */
    {printf("AssignExpr -> Variable *= Expr\n");}
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 98 "bar.y" /* yacc.c:1646  */
    {printf("AssignExpr -> Variable /= Expr\n");}
#line 1766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 99 "bar.y" /* yacc.c:1646  */
    {printf("AssignExpr -> Variable %%= Expr\n");}
#line 1772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 101 "bar.y" /* yacc.c:1646  */
    {printf("Variable -> %s [ Expr ]\n", (yyvsp[-3].sVal));}
#line 1778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 102 "bar.y" /* yacc.c:1646  */
    {printf("Variable -> %s\n", (yyvsp[0].sVal));}
#line 1784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 104 "bar.y" /* yacc.c:1646  */
    {printf("SimpleExpr -> SimpleExpr || AndExpr\n");}
#line 1790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 105 "bar.y" /* yacc.c:1646  */
    {printf("SimpleExpr -> AndExpr\n");}
#line 1796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 107 "bar.y" /* yacc.c:1646  */
    {printf("AndExpr -> AndExpr && RelExpr\n");}
#line 1802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 108 "bar.y" /* yacc.c:1646  */
    {printf("AndExpr -> RelExpr\n");}
#line 1808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 110 "bar.y" /* yacc.c:1646  */
    {printf("RelExpr -> RelExpr < AddExpr\n");}
#line 1814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 111 "bar.y" /* yacc.c:1646  */
    {printf("RelExpr -> RelExpr <= AddExpr\n");}
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 112 "bar.y" /* yacc.c:1646  */
    {printf("RelExpr -> RelExpr > AddExpr\n");}
#line 1826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 113 "bar.y" /* yacc.c:1646  */
    {printf("RelExpr -> RelExpr >= AddExpr\n");}
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 114 "bar.y" /* yacc.c:1646  */
    {printf("RelExpr -> RelExpr == AddExpr\n");}
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 115 "bar.y" /* yacc.c:1646  */
    {printf("RelExpr -> RelExpr != AddExpr\n");}
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 116 "bar.y" /* yacc.c:1646  */
    {printf("RelExpr -> AddExpr\n");}
#line 1850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 118 "bar.y" /* yacc.c:1646  */
    {printf("AddExpr -> AddExpr + Term\n");}
#line 1856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 119 "bar.y" /* yacc.c:1646  */
    {printf("AddExpr -> AddExrp - Term\n");}
#line 1862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 120 "bar.y" /* yacc.c:1646  */
    {printf("AddExpr -> Term\n");}
#line 1868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 122 "bar.y" /* yacc.c:1646  */
    {printf("Term -> Term * Factor\n");}
#line 1874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 123 "bar.y" /* yacc.c:1646  */
    {printf("Term -> Term / Factor\n");}
#line 1880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 124 "bar.y" /* yacc.c:1646  */
    {printf("Term -> Term %% Factor\n");}
#line 1886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 125 "bar.y" /* yacc.c:1646  */
    {printf("Term -> Factor\n");}
#line 1892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 127 "bar.y" /* yacc.c:1646  */
    {printf("Factor -> ( Expr )\n");}
#line 1898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 128 "bar.y" /* yacc.c:1646  */
    {printf("Factor -> FunctionCall\n");}
#line 1904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 129 "bar.y" /* yacc.c:1646  */
    {printf("Factor -> - Factor\n");}
#line 1910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 130 "bar.y" /* yacc.c:1646  */
    {printf("Factor -> Variable\n");}
#line 1916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 131 "bar.y" /* yacc.c:1646  */
    {printf("Factor -> Variable IncDec\n");}
#line 1922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 132 "bar.y" /* yacc.c:1646  */
    {printf("Factor -> IncDec Variable\n");}
#line 1928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 133 "bar.y" /* yacc.c:1646  */
    {printf("Factor -> NumberLiteral\n");}
#line 1934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 135 "bar.y" /* yacc.c:1646  */
    {printf("NumberLiteral -> %d\n", (yyvsp[0].iVal));}
#line 1940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 136 "bar.y" /* yacc.c:1646  */
    {printf("NumberLiteral -> %f\n", (yyvsp[0].rVal));}
#line 1946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 138 "bar.y" /* yacc.c:1646  */
    {printf("IncDec -> ++\n");}
#line 1952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 139 "bar.y" /* yacc.c:1646  */
    {printf("IncDec -> --\n");}
#line 1958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 141 "bar.y" /* yacc.c:1646  */
    {printf("WhileStmt -> while ( Expr ) CompoundStmt\n");}
#line 1964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 142 "bar.y" /* yacc.c:1646  */
    {printf("WhileStmt -> while ( Expr ) ;\n");}
#line 1970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 144 "bar.y" /* yacc.c:1646  */
    {printf("ForStmt -> for ( Expr ; Expr ; Expr ) CompoundStmt\n");}
#line 1976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 145 "bar.y" /* yacc.c:1646  */
    {printf("ForStmt -> for ( Expr ; Expr ; Expr ) ;\n");}
#line 1982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 147 "bar.y" /* yacc.c:1646  */
    {printf("FunctionCall -> %s ( Arguments )\n", (yyvsp[-3].sVal));}
#line 1988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 148 "bar.y" /* yacc.c:1646  */
    {printf("Arguments -> ArgumentList\n");}
#line 1994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 149 "bar.y" /* yacc.c:1646  */
    {printf("FunctionCall -> Empty\n");}
#line 2000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 151 "bar.y" /* yacc.c:1646  */
    {printf("ArgumentList -> ArgumentList , Expr\n");}
#line 2006 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 152 "bar.y" /* yacc.c:1646  */
    {printf("ArgumentList -> ArgumentList , %s\n", (yyvsp[0].sVal));}
#line 2012 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 153 "bar.y" /* yacc.c:1646  */
    {printf("ArgumentList -> Expr\n");}
#line 2018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 154 "bar.y" /* yacc.c:1646  */
    {printf("ArgumentList -> %s\n", (yyvsp[0].sVal)); }
#line 2024 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2028 "y.tab.c" /* yacc.c:1646  */
      default: break;
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
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
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

#if !defined yyoverflow || YYERROR_VERBOSE
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
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 158 "bar.y" /* yacc.c:1906  */

int main(int argc, char *argv[]){
//	if(argc == 1) exit(0);	
	extern FILE *yyin;
	yyin = fopen(argv[1], "r");
	yyparse();
	fclose(yyin);
	return 0;
}

