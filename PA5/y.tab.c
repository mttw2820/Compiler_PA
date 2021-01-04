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
#include "tac.h"
STACK *stack;
extern int bar;
int yylex(void);
int yyerror(char*);

#line 76 "y.tab.c" /* yacc.c:339  */

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
    ID = 258,
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
#define ID 258
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
#line 10 "bar.y" /* yacc.c:355  */

	int iVal;
	float rVal;
	char* sVal;

#line 206 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 223 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   192

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  176

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
      43,    44,     2,     2,    45,    52,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    51,    48,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    49,     2,    50,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    46,     2,    47,     2,     2,     2,     2,
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
static const yytype_uint16 yyrline[] =
{
       0,    22,    22,    29,    34,    37,    38,    41,    54,    59,
      63,    66,    71,    74,    83,    92,   102,   105,   114,   115,
     116,   117,   120,   125,   128,   134,   138,   148,   151,   152,
     155,   156,   157,   158,   159,   160,   161,   162,   173,   180,
     191,   203,   212,   221,   226,   229,   234,   237,   240,   241,
     243,   244,   246,   253,   260,   267,   274,   281,   289,   296,
     298,   305,   307,   314,   316,   323,   330,   337,   344,   351,
     358,   361,   368,   375,   378,   385,   392,   399,   402,   403,
     404,   409,   410,   417,   424,   427,   429,   432,   433,   436,
     444,   452,   463,   474,   483,   488,   491,   496
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "STRING", "INTEGER", "CHARACTER",
  "REAL", "BREAK", "CASE", "CHAR", "DEFAULT", "ELSE", "FLOAT", "FOR", "IF",
  "INT", "RETURN", "SWITCH", "VOID", "WHILE", "ERROR", "ASGNOP",
  "ADDORIGIN", "SUBORIGIN", "MULORIGIN", "DIVORIGIN", "MODORIGIN", "OR",
  "AND", "RIGHTBIG", "LEFTBIG", "RIGHTEQBIG", "LEFTEQBIG", "EQUAL",
  "NEQUAL", "ADDOP", "SUBOP", "MULOP", "DIVOP", "MODOP", "INCRE", "DECRE",
  "'('", "')'", "','", "'{'", "'}'", "';'", "'['", "']'", "':'", "'-'",
  "$accept", "Program", "DeclarationList", "Declaration",
  "FuncDeclaration", "Params", "ParamList", "Param", "CompoundStmt",
  "LocalDeclarationList", "VarDeclaration", "TypeSpecifier", "IDs",
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
     295,   296,   297,    40,    41,    44,   123,   125,    59,    91,
      93,    58,    45
};
# endif

#define YYPACT_NINF -142

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-142)))

#define YYTABLE_NINF -20

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -6,  -142,  -142,  -142,  -142,     5,    -6,  -142,  -142,  -142,
      23,  -142,  -142,   -18,   -36,  -142,    68,    39,    83,  -142,
      93,    54,    56,  -142,    83,    53,    60,  -142,    59,    -6,
    -142,  -142,  -142,  -142,  -142,    -6,  -142,    83,    65,    28,
    -142,  -142,    66,    72,    73,    97,    77,    79,  -142,  -142,
     139,  -142,  -142,   139,  -142,  -142,  -142,  -142,  -142,  -142,
    -142,  -142,    78,  -142,    -4,    99,    96,   120,   -20,     3,
    -142,  -142,   125,  -142,  -142,  -142,   139,   139,  -142,   139,
     139,  -142,    84,   139,   139,    85,   -12,  -142,  -142,   139,
     139,   139,   139,   139,   139,  -142,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   139,    86,
    -142,  -142,   103,    98,    91,   100,   112,  -142,   117,   119,
    -142,  -142,  -142,  -142,  -142,  -142,  -142,    96,   120,   -20,
     -20,   -20,   -20,   -20,   -20,     3,     3,  -142,  -142,  -142,
    -142,   139,  -142,   139,   116,   114,    43,  -142,   118,  -142,
     153,   158,  -142,  -142,   139,   116,   170,    81,   132,  -142,
    -142,   126,   173,   128,   136,    47,  -142,   133,  -142,  -142,
    -142,  -142,   116,  -142,   116,   116
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    20,    21,    18,    19,     0,     2,     4,     6,     5,
       0,     1,     3,    25,     0,    23,    10,     0,     0,    17,
       9,     0,     8,    12,     0,     0,    25,    22,     0,     0,
      13,    24,    16,     7,    11,    27,    15,     0,     0,    59,
      85,    86,     0,     0,     0,     0,     0,     0,    87,    88,
       0,    14,    49,     0,    34,    26,    28,    29,    36,    33,
      35,    30,     0,    50,    81,    51,    61,    63,    70,    73,
      77,    84,     0,    32,    31,    79,    95,     0,    47,     0,
       0,    46,     0,     0,     0,     0,    81,    80,    48,     0,
       0,     0,     0,     0,     0,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    59,
      83,    97,     0,    94,     0,     0,     0,    45,     0,     0,
      78,    52,    53,    54,    55,    56,    57,    60,    62,    64,
      66,    65,    67,    68,    69,    71,    72,    74,    75,    76,
      93,     0,    58,     0,     0,     0,     0,    96,     0,    38,
      28,     0,    90,    89,     0,     0,     0,    44,     0,    37,
      39,     0,     0,     0,     0,     0,    27,     0,    27,    40,
      92,    91,    42,    27,    43,    41
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -142,  -142,  -142,   179,  -142,  -142,  -142,   157,   -28,  -142,
     152,    -1,  -142,    70,   -99,    44,  -141,    34,  -142,  -142,
    -142,  -142,  -142,  -142,   -44,  -142,   -45,  -142,    94,    95,
      71,   -29,   -42,  -142,   -62,  -142,  -142,  -142,  -142,  -142
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,     8,    21,    22,    23,    54,    35,
       9,    10,    14,    15,    38,    55,    56,    57,    58,   157,
     164,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,   112,   113
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      33,    82,    95,   150,     1,    11,    85,     2,    86,    18,
       3,    87,    19,     4,   159,    24,   104,   105,    89,    90,
      91,    92,    93,    94,    95,    16,    13,   110,    24,    48,
      49,    17,   111,   114,    37,   115,   116,    48,    49,   118,
     119,   106,   107,   108,    25,   121,   122,   123,   124,   125,
     126,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,   137,   138,   139,   172,    39,   174,
      40,    76,    41,    42,   175,   135,   136,    77,     1,    43,
      44,     2,    45,    46,     3,    47,    26,    20,    27,    32,
     162,   152,   163,    32,    30,   170,   -19,   147,    28,   148,
      39,    29,    40,    31,    41,    32,    48,    49,    50,    17,
     158,    32,    51,    52,    78,    79,    80,    53,   153,    39,
      83,    40,    84,    41,    42,    97,    88,    96,   109,   120,
      43,    44,   117,    45,    46,    77,    47,   171,    48,    49,
      50,   142,    39,   141,    40,    81,    41,   140,   143,    53,
      98,    99,   100,   101,   102,   103,   144,    48,    49,    50,
     151,   145,    32,   146,    52,   155,   154,   156,    53,   129,
     130,   131,   132,   133,   134,   161,   165,   166,   167,   168,
      48,    49,    50,   169,   173,    12,    34,    36,   149,   160,
     127,    53,   128
};

static const yytype_uint8 yycheck[] =
{
      28,    45,    64,   144,    10,     0,    50,    13,    53,    45,
      16,    53,    48,    19,   155,    16,    36,    37,    22,    23,
      24,    25,    26,    27,    86,    43,     3,    72,    29,    41,
      42,    49,    76,    77,    35,    79,    80,    41,    42,    83,
      84,    38,    39,    40,     5,    89,    90,    91,    92,    93,
      94,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   106,   107,   108,   166,     3,   168,
       5,    43,     7,     8,   173,   104,   105,    49,    10,    14,
      15,    13,    17,    18,    16,    20,     3,    19,    18,    46,
       9,    48,    11,    46,    24,    48,     3,   141,    44,   143,
       3,    45,     5,    50,     7,    46,    41,    42,    43,    49,
     154,    46,    47,    48,    48,    43,    43,    52,   146,     3,
      43,     5,    43,     7,     8,    29,    48,    28,     3,    44,
      14,    15,    48,    17,    18,    49,    20,   165,    41,    42,
      43,    50,     3,    45,     5,    48,     7,    44,    48,    52,
      30,    31,    32,    33,    34,    35,    44,    41,    42,    43,
      46,    44,    46,    44,    48,    12,    48,     9,    52,    98,
      99,   100,   101,   102,   103,     5,    44,    51,     5,    51,
      41,    42,    43,    47,    51,     6,    29,    35,   144,   155,
      96,    52,    97
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    13,    16,    19,    54,    55,    56,    57,    63,
      64,     0,    56,     3,    65,    66,    43,    49,    45,    48,
      19,    58,    59,    60,    64,     5,     3,    66,    44,    45,
      66,    50,    46,    61,    60,    62,    63,    64,    67,     3,
       5,     7,     8,    14,    15,    17,    18,    20,    41,    42,
      43,    47,    48,    52,    61,    68,    69,    70,    71,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    43,    49,    48,    43,
      43,    48,    77,    43,    43,    77,    79,    85,    48,    22,
      23,    24,    25,    26,    27,    87,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     3,
      79,    77,    91,    92,    77,    77,    77,    48,    77,    77,
      44,    77,    77,    77,    77,    77,    77,    81,    82,    83,
      83,    83,    83,    83,    83,    84,    84,    85,    85,    85,
      44,    45,    50,    48,    44,    44,    44,    77,    77,    68,
      69,    46,    48,    61,    48,    12,     9,    72,    77,    69,
      70,     5,     9,    11,    73,    44,    51,     5,    51,    47,
      48,    61,    67,    51,    67,    67
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    55,    55,    56,    56,    57,    58,    58,
      58,    59,    59,    60,    61,    62,    62,    63,    64,    64,
      64,    64,    65,    65,    66,    66,    67,    67,    68,    68,
      69,    69,    69,    69,    69,    69,    69,    69,    70,    70,
      71,    72,    72,    73,    73,    74,    74,    75,    76,    76,
      77,    77,    78,    78,    78,    78,    78,    78,    79,    79,
      80,    80,    81,    81,    82,    82,    82,    82,    82,    82,
      82,    83,    83,    83,    84,    84,    84,    84,    85,    85,
      85,    85,    85,    85,    85,    86,    86,    87,    87,    88,
      88,    89,    89,    90,    91,    91,    92,    92
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     6,     1,     1,
       0,     3,     1,     2,     4,     2,     0,     3,     1,     1,
       1,     1,     3,     1,     4,     1,     2,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     7,     5,     7,
       8,     5,     4,     3,     0,     3,     2,     2,     2,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     4,     1,
       3,     1,     3,     1,     3,     3,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     1,     3,     1,
       2,     1,     2,     2,     1,     1,     1,     1,     1,     5,
       5,     9,     9,     4,     1,     0,     3,     1
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
#line 22 "bar.y" /* yacc.c:1646  */
    {
		ASTNode *prog = makeASTNode(_PROG, NO_TYPE);
		ASTNode *dec = pop(stack);
		setChild(prog, dec);
		push(stack, prog); }
#line 1436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 29 "bar.y" /* yacc.c:1646  */
    {
			ASTNode *dec = pop(stack);
			ASTNode *declist = pop(stack);
			setLastSibling(declist, dec);
			push(stack, declist); }
#line 1446 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 34 "bar.y" /* yacc.c:1646  */
    { }
#line 1452 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 37 "bar.y" /* yacc.c:1646  */
    { }
#line 1458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 38 "bar.y" /* yacc.c:1646  */
    { }
#line 1464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 41 "bar.y" /* yacc.c:1646  */
    {
				ASTNode *funcdec = makeASTNode(_FUNCDEC, NO_TYPE);
				ASTNode *cmpdstmt = pop(stack);
				ASTNode *params = pop(stack);
				ASTNode *funcid = makeASTNodeID((yyvsp[-4].sVal), NO_TYPE);
				ASTNode *types = pop(stack);
				setSibling(params, cmpdstmt);
				setSibling(funcid, params);
				setSibling(types, funcid);
				setChild(funcdec, types);
				push(stack, funcdec); }
#line 1480 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 54 "bar.y" /* yacc.c:1646  */
    {
       		ASTNode *params = makeASTNode(_PARAMS, NO_TYPE);
		ASTNode *paramlist = pop(stack);
		setChild(params, paramlist);
		push(stack, params); }
#line 1490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 59 "bar.y" /* yacc.c:1646  */
    {
		ASTNode *params = makeASTNode(_PARAMS, NO_TYPE);
		setChild(params, makeASTNode(_TYPE, TYPE_VOID));
		push(stack, params); }
#line 1499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 63 "bar.y" /* yacc.c:1646  */
    { push(stack, makeASTNode(_PARAMS, NO_TYPE)); }
#line 1505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 66 "bar.y" /* yacc.c:1646  */
    {
	  		ASTNode *param = pop(stack);
			ASTNode *paramlist = pop(stack);
			setLastSibling(paramlist, param);
			push(stack, paramlist); }
#line 1515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 71 "bar.y" /* yacc.c:1646  */
    { }
#line 1521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 74 "bar.y" /* yacc.c:1646  */
    { 
      		ASTNode *value = pop(stack);
		ASTNode *types = pop(stack);
		ASTNode *params = makeASTNode(_PARAM, NO_TYPE);
		setSibling(types, value);
		setChild(params, types);
		push(stack, params); }
#line 1533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 83 "bar.y" /* yacc.c:1646  */
    {
	     		ASTNode *stmtlist = pop(stack);
			ASTNode *ldeclist = pop(stack);
			ASTNode *cmpdstmt = makeASTNode(_CPDSTMT, NO_TYPE);
			setSibling(ldeclist, stmtlist);
			setChild(cmpdstmt, ldeclist);
			push(stack, cmpdstmt); }
#line 1545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 92 "bar.y" /* yacc.c:1646  */
    {
		     		ASTNode *vardec = pop(stack);
		     		ASTNode *ldeclist = pop(stack);
				if(getChild(ldeclist)==0){
					setChild(ldeclist, vardec);
				}
				else {
					setLastSibling(getChild(ldeclist), vardec);
				}
				push(stack, ldeclist); }
#line 1560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 102 "bar.y" /* yacc.c:1646  */
    {push(stack, makeASTNode(_LDECLIST, NO_TYPE));}
#line 1566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 105 "bar.y" /* yacc.c:1646  */
    {
	       		ASTNode *ids = pop(stack);
			ASTNode *types = pop(stack);
			ASTNode *varDec = makeASTNode(_VARDEC, NO_TYPE);
			setSibling(types, ids);
			setChild(varDec, types);
			push(stack, varDec); }
#line 1578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 114 "bar.y" /* yacc.c:1646  */
    {push(stack, makeASTNode(_TYPE, TYPE_INT));}
#line 1584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 115 "bar.y" /* yacc.c:1646  */
    {push(stack, makeASTNode(_TYPE, TYPE_VOID));}
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 116 "bar.y" /* yacc.c:1646  */
    {push(stack, makeASTNode(_TYPE, TYPE_INT));}
#line 1596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 117 "bar.y" /* yacc.c:1646  */
    {push(stack, makeASTNode(_TYPE, TYPE_FLOAT));}
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 120 "bar.y" /* yacc.c:1646  */
    {
    		ASTNode *value = pop(stack);
		ASTNode *ids = pop(stack);
		setLastSibling(ids, value);
		push(stack, ids);}
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 125 "bar.y" /* yacc.c:1646  */
    { }
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 128 "bar.y" /* yacc.c:1646  */
    {
      			ASTNode *value = makeASTNode(_VALUE, NO_TYPE);
			ASTNode *id = makeASTNodeID((yyvsp[-3].sVal), NO_TYPE);
			setSibling(id, makeASTNodeINT((yyvsp[-1].iVal)));
			setChild(value, id);
			push(stack, value); }
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 134 "bar.y" /* yacc.c:1646  */
    {	ASTNode *id = makeASTNodeID((yyvsp[0].sVal), NO_TYPE);
		push(stack, id); }
#line 1636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 138 "bar.y" /* yacc.c:1646  */
    {
			ASTNode *stmt = pop(stack);
			ASTNode *stmtlist = pop(stack);
			if(getChild(stmtlist) == 0){
				setChild(stmtlist, stmt);
			}
			else {
				setLastSibling(getChild(stmtlist), stmt);
			}
			push(stack, stmtlist); }
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 148 "bar.y" /* yacc.c:1646  */
    { push(stack, makeASTNode(_STMTLIST, NO_TYPE)); }
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 151 "bar.y" /* yacc.c:1646  */
    { }
#line 1663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 152 "bar.y" /* yacc.c:1646  */
    { }
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 155 "bar.y" /* yacc.c:1646  */
    { }
#line 1675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 156 "bar.y" /* yacc.c:1646  */
    { }
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 157 "bar.y" /* yacc.c:1646  */
    { }
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 158 "bar.y" /* yacc.c:1646  */
    { }
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 159 "bar.y" /* yacc.c:1646  */
    { }
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 160 "bar.y" /* yacc.c:1646  */
    { }
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 161 "bar.y" /* yacc.c:1646  */
    { }
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 162 "bar.y" /* yacc.c:1646  */
    {
			ASTNode *secondMstmt = pop(stack);
			ASTNode *firstMstmt = pop(stack);
			ASTNode *expr = pop(stack);
			ASTNode *ifstmt = makeASTNode(_IFSTMT, NO_TYPE); 
			setSibling(firstMstmt, secondMstmt);
			setSibling(expr, firstMstmt);
			setChild(ifstmt, expr); 
			push(stack, ifstmt); }
#line 1725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 173 "bar.y" /* yacc.c:1646  */
    {
			ASTNode *stmt = pop(stack);
			ASTNode *expr = pop(stack);
			ASTNode *ifstmt = makeASTNode(_IFSTMT, NO_TYPE);
			setSibling(expr, stmt);
			setChild(ifstmt, expr);
			push(stack, ifstmt); }
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 180 "bar.y" /* yacc.c:1646  */
    {
			ASTNode *ostmt = pop(stack);
			ASTNode *mstmt = pop(stack);
			ASTNode *expr = pop(stack);
			ASTNode *openstmt = makeASTNode(_IFSTMT, NO_TYPE);
			setSibling(mstmt, ostmt);
			setSibling(expr, mstmt);
			setChild(openstmt, expr);
			push(stack, openstmt); }
#line 1751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 191 "bar.y" /* yacc.c:1646  */
    {
	   		bar--;
	   		ASTNode *dfcase = pop(stack);
			ASTNode *caselist = pop(stack);
			ASTNode *expr = pop(stack);
			ASTNode *switchstmt = makeASTNode(_SWSTMT, NO_TYPE);
			setSibling(expr, caselist);
			setLastSibling(caselist, dfcase);
			setChild(switchstmt, expr);
			push(stack, switchstmt); }
#line 1766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 203 "bar.y" /* yacc.c:1646  */
    {
	 		ASTNode *stmtlist = pop(stack);
			ASTNode *integer = makeASTNodeINT((yyvsp[-2].iVal));
			ASTNode *newcase = makeASTNode(_CASE, NO_TYPE);
			ASTNode *caselist = pop(stack);
			setSibling(integer, stmtlist);
			setChild(newcase, integer);
			setLastSibling(caselist, newcase);
			push(stack, caselist); }
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 212 "bar.y" /* yacc.c:1646  */
    {
			ASTNode *stmtlist = pop(stack);
			ASTNode *integer = makeASTNodeINT((yyvsp[-2].iVal));
			ASTNode *newcase = makeASTNode(_CASE, NO_TYPE);
			setSibling(integer, stmtlist);
			setChild(newcase, integer);
			push(stack, newcase);}
#line 1792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 221 "bar.y" /* yacc.c:1646  */
    {
	   		ASTNode *stmtlist = pop(stack);
			ASTNode *def = makeASTNode(_DEFAULT, NO_TYPE);
			setChild(def, stmtlist);
			push(stack, def);}
#line 1802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 226 "bar.y" /* yacc.c:1646  */
    { push(stack, makeASTNode(_DEFAULT, NO_TYPE));}
#line 1808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 229 "bar.y" /* yacc.c:1646  */
    {
	   		ASTNode *expr = pop(stack);
			ASTNode *rtstmt = makeASTNode(_RTSTMT, NO_TYPE);
			setChild(rtstmt, expr);
			push(stack, rtstmt); }
#line 1818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 234 "bar.y" /* yacc.c:1646  */
    {
			push(stack, makeASTNode(_RTSTMT, TYPE_VOID));}
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 237 "bar.y" /* yacc.c:1646  */
    {
	  	push(stack, makeASTNode(_BRKSTMT, NO_TYPE));}
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 240 "bar.y" /* yacc.c:1646  */
    { }
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 241 "bar.y" /* yacc.c:1646  */
    { }
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 243 "bar.y" /* yacc.c:1646  */
    { }
#line 1850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 244 "bar.y" /* yacc.c:1646  */
    { }
#line 1856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 246 "bar.y" /* yacc.c:1646  */
    {
	   		ASTNode *expr = pop(stack);
			ASTNode *asgnop = makeASTNodeOP("=", NO_TYPE);
			ASTNode *var = pop(stack);
			setSibling(var, expr);
			setChild(asgnop, var);
			push(stack, asgnop); }
#line 1868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 253 "bar.y" /* yacc.c:1646  */
    {
			ASTNode *expr = pop(stack);
			ASTNode *addorigin = makeASTNodeOP("+=", NO_TYPE);
			ASTNode *var = pop(stack);
			setSibling(var, expr);
			setChild(addorigin, var);
			push(stack, addorigin); }
#line 1880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 260 "bar.y" /* yacc.c:1646  */
    {
			ASTNode *expr = pop(stack);
			ASTNode *suborigin = makeASTNodeOP("-=", NO_TYPE);
			ASTNode *var = pop(stack);
			setSibling(var, expr);
			setChild(suborigin, var);
			push(stack, suborigin); }
#line 1892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 267 "bar.y" /* yacc.c:1646  */
    {
			ASTNode *expr = pop(stack);
			ASTNode *mulorigin = makeASTNodeOP("*=", NO_TYPE);
			ASTNode *var = pop(stack);
			setSibling(var, expr);
			setChild(mulorigin, var);
			push(stack, mulorigin); }
#line 1904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 274 "bar.y" /* yacc.c:1646  */
    {
			ASTNode *expr = pop(stack);
			ASTNode *divorigin = makeASTNodeOP("/=", NO_TYPE);
			ASTNode *var = pop(stack);
			setSibling(var, expr);
			setChild(divorigin, var);
			push(stack, divorigin); }
#line 1916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 281 "bar.y" /* yacc.c:1646  */
    {
			ASTNode *expr = pop(stack);
			ASTNode *modorigin = makeASTNodeOP("%=", NO_TYPE);
			ASTNode *var = pop(stack);
			setSibling(var, expr);
			setChild(modorigin, var);
			push(stack, modorigin); }
#line 1928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 289 "bar.y" /* yacc.c:1646  */
    {
	 		ASTNode *expr = pop(stack);
			ASTNode *id = makeASTNodeID((yyvsp[-3].sVal), NO_TYPE);
			ASTNode *array = makeASTNode(_ID_ARR, NO_TYPE);
			setSibling(id, expr);
			setChild(array, id);
			push(stack, array); }
#line 1940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 296 "bar.y" /* yacc.c:1646  */
    { push(stack, makeASTNodeID((yyvsp[0].sVal), NO_TYPE)); }
#line 1946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 298 "bar.y" /* yacc.c:1646  */
    {
	 		ASTNode *andexpr = pop(stack);
			ASTNode *simpexpr = pop(stack);
			ASTNode *orop = makeASTNodeOP("||", NO_TYPE);
			setSibling(simpexpr, andexpr);
			setChild(orop, simpexpr);
			push(stack, orop); }
#line 1958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 305 "bar.y" /* yacc.c:1646  */
    { }
#line 1964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 307 "bar.y" /* yacc.c:1646  */
    {
		ASTNode *relexpr = pop(stack);
		ASTNode *andexpr = pop(stack);
		ASTNode *andop = makeASTNodeOP("&&", NO_TYPE);
		setSibling(andexpr, relexpr);
		setChild(andop, andexpr);
		push(stack, andop); }
#line 1976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 314 "bar.y" /* yacc.c:1646  */
    { }
#line 1982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 316 "bar.y" /* yacc.c:1646  */
    {
		ASTNode *addexpr = pop(stack);
		ASTNode *relexpr = pop(stack);
		ASTNode *rightbig = makeASTNodeOP("<", NO_TYPE);
		setSibling(relexpr, addexpr);
		setChild(rightbig, relexpr);
		push(stack, rightbig); }
#line 1994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 323 "bar.y" /* yacc.c:1646  */
    {
		ASTNode *addexpr = pop(stack);
		ASTNode *relexpr = pop(stack);
		ASTNode *righteqbig = makeASTNodeOP("<=", NO_TYPE);
		setSibling(relexpr, addexpr);
		setChild(righteqbig, relexpr);
		push(stack, righteqbig); }
#line 2006 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 330 "bar.y" /* yacc.c:1646  */
    {
		ASTNode *addexpr = pop(stack);
		ASTNode *relexpr = pop(stack);
		ASTNode *leftbig = makeASTNodeOP(">", NO_TYPE);
		setSibling(relexpr, addexpr);
		setChild(leftbig, relexpr);
		push(stack, leftbig); }
#line 2018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 337 "bar.y" /* yacc.c:1646  */
    {
		ASTNode *addexpr = pop(stack);
		ASTNode *relexpr = pop(stack);
		ASTNode *lefteqbig = makeASTNodeOP(">=", NO_TYPE);
		setSibling(relexpr, addexpr);
		setChild(lefteqbig, relexpr);
		push(stack, lefteqbig); }
#line 2030 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 344 "bar.y" /* yacc.c:1646  */
    {
		ASTNode *addexpr = pop(stack);
		ASTNode *relexpr = pop(stack);
		ASTNode *equal = makeASTNodeOP("==", NO_TYPE);
		setSibling(relexpr, addexpr);
		setChild(equal, relexpr);
		push(stack, equal); }
#line 2042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 351 "bar.y" /* yacc.c:1646  */
    {
		ASTNode *addexpr = pop(stack);
		ASTNode *relexpr = pop(stack);
		ASTNode *nequal = makeASTNodeOP("!=", NO_TYPE);
		setSibling(relexpr, addexpr);
		setChild(nequal, relexpr);
		push(stack, nequal); }
#line 2054 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 358 "bar.y" /* yacc.c:1646  */
    { }
#line 2060 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 361 "bar.y" /* yacc.c:1646  */
    {
		ASTNode *term = pop(stack);
		ASTNode *addexpr = pop(stack);
		ASTNode *addop = makeASTNodeOP("+", NO_TYPE);
		setSibling(addexpr, term);
		setChild(addop, addexpr);
		push(stack, addop); }
#line 2072 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 368 "bar.y" /* yacc.c:1646  */
    {
		ASTNode *term = pop(stack);
		ASTNode *addexpr = pop(stack);
		ASTNode *subop = makeASTNodeOP("-", NO_TYPE);
		setSibling(addexpr, term);
		setChild(subop, addexpr);
		push(stack, subop); }
#line 2084 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 375 "bar.y" /* yacc.c:1646  */
    { }
#line 2090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 378 "bar.y" /* yacc.c:1646  */
    {
     		ASTNode *factor = pop(stack);
		ASTNode *term = pop(stack);
		ASTNode *mulop = makeASTNodeOP("*", NO_TYPE);
		setSibling(term, factor);
		setChild(mulop, term);
		push(stack, mulop); }
#line 2102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 385 "bar.y" /* yacc.c:1646  */
    {
		ASTNode *factor = pop(stack);
		ASTNode *term = pop(stack);
		ASTNode *divop = makeASTNodeOP("/", NO_TYPE);
		setSibling(term, factor);
		setChild(divop, term);
		push(stack, divop); }
#line 2114 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 392 "bar.y" /* yacc.c:1646  */
    {
		ASTNode *factor = pop(stack);
		ASTNode *term = pop(stack);
		ASTNode *modop = makeASTNodeOP("%", NO_TYPE);
		setSibling(term, factor);
		setChild(modop, term);
		push(stack, modop); }
#line 2126 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 399 "bar.y" /* yacc.c:1646  */
    { }
#line 2132 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 402 "bar.y" /* yacc.c:1646  */
    { }
#line 2138 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 403 "bar.y" /* yacc.c:1646  */
    { }
#line 2144 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 404 "bar.y" /* yacc.c:1646  */
    {
		ASTNode *factor = pop(stack);
		ASTNode *subop = makeASTNodeOP("-", TYPE_VOID);
		setChild(subop, factor);
		push(stack, subop); }
#line 2154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 409 "bar.y" /* yacc.c:1646  */
    { }
#line 2160 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 410 "bar.y" /* yacc.c:1646  */
    {
		ASTNode *incdec = pop(stack);
		ASTNode *var = pop(stack);
		ASTNode *incdecexpr = makeASTNode(_INCDEC_EXP, NO_TYPE);
		setSibling(var, incdec);
		setChild(incdecexpr, var);
		push(stack, incdecexpr); }
#line 2172 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 417 "bar.y" /* yacc.c:1646  */
    {
		ASTNode *var = pop(stack);
		ASTNode *incdec = pop(stack);
		ASTNode *incdecexpr = makeASTNode(_INCDEC_EXP, NO_TYPE);
		setSibling(incdec, var);
		setChild(incdecexpr, incdec);
		push(stack, incdecexpr); }
#line 2184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 424 "bar.y" /* yacc.c:1646  */
    { }
#line 2190 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 427 "bar.y" /* yacc.c:1646  */
    { 
	      		push(stack, makeASTNodeINT((yyvsp[0].iVal))); }
#line 2197 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 429 "bar.y" /* yacc.c:1646  */
    { 
			push(stack, makeASTNodeREAL((yyvsp[0].rVal)));}
#line 2204 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 432 "bar.y" /* yacc.c:1646  */
    { push(stack, makeASTNodeOP("++", NO_TYPE)); }
#line 2210 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 433 "bar.y" /* yacc.c:1646  */
    { push(stack, makeASTNodeOP("--", NO_TYPE)); }
#line 2216 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 436 "bar.y" /* yacc.c:1646  */
    {
			bar--;
			ASTNode *cmpdstmt = pop(stack);
			ASTNode *expr = pop(stack);
			ASTNode *whilestmt = makeASTNode(_WHLSTMT, NO_TYPE);
			setSibling(expr, cmpdstmt);
			setChild(whilestmt, expr);
			push(stack, whilestmt); }
#line 2229 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 444 "bar.y" /* yacc.c:1646  */
    {
			bar--;
			ASTNode *expr = pop(stack);
			ASTNode *whilestmt = makeASTNode(_WHLSTMT, NO_TYPE);
			setChild(whilestmt, expr);
			push(stack, whilestmt); }
#line 2240 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 452 "bar.y" /* yacc.c:1646  */
    {
		bar--;
		ASTNode *forstmt = makeASTNode(_FORSTMT, NO_TYPE);
		ASTNode *cmpdstmt = pop(stack);
		ASTNode *expr3 = pop(stack);
		ASTNode *expr2 = pop(stack);
		ASTNode *expr1 = pop(stack);
		setSibling(expr1, setSibling(expr2, expr3));
		setLastSibling(expr1, cmpdstmt);
		setChild(forstmt, expr1);
		push(stack, forstmt); }
#line 2256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 463 "bar.y" /* yacc.c:1646  */
    {
		bar--;
		ASTNode *forstmt = makeASTNode(_FORSTMT, NO_TYPE);
		ASTNode *expr3 = pop(stack);
		ASTNode *expr2 = pop(stack);
		ASTNode *expr1 = pop(stack);
		setSibling(expr1, setSibling(expr2, expr3));
		setChild(forstmt, expr1);
		push(stack, forstmt); }
#line 2270 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 474 "bar.y" /* yacc.c:1646  */
    {
	     		ASTNode *args = pop(stack);
			ASTNode *id = makeASTNodeID((yyvsp[-3].sVal), NO_TYPE);
			ASTNode *funccall = makeASTNode(_FUNCCALL, NO_TYPE);
			setSibling(id, args);
			setChild(funccall, id);
			push(stack, funccall);}
#line 2282 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 483 "bar.y" /* yacc.c:1646  */
    {
	  		ASTNode *arg = pop(stack);
			ASTNode *args = makeASTNode(_ARGS, NO_TYPE);
			setChild(args, arg);
			push(stack, args); }
#line 2292 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 488 "bar.y" /* yacc.c:1646  */
    { push(stack, makeASTNode(_ARGS, NO_TYPE)); }
#line 2298 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 491 "bar.y" /* yacc.c:1646  */
    {
	     		ASTNode *expr = pop(stack);
			ASTNode *arglist = pop(stack);
			setLastSibling(arglist, expr);
			push(stack, arglist); }
#line 2308 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 496 "bar.y" /* yacc.c:1646  */
    { }
#line 2314 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2318 "y.tab.c" /* yacc.c:1646  */
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
#line 500 "bar.y" /* yacc.c:1906  */


int main(int argc, char *argv[]){	
	extern FILE *yyin;
	extern FILE *yyout;
	ASTNode *root = 0;
	stack = initStack();

	yyin = fopen(argv[1], "r");
	yyparse();
	fclose(yyin);

	root = pop(stack);
	yyout = fopen(genOutputFN(argv[1]), "w");
	buildTAC(root);
	fclose(yyout);
	return 0;
}

