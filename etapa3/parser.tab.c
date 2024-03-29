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
#line 1 "parser.y" /* yacc.c:339  */

#include "tree.h"
int yylex(void); void yyerror (char const *s);
extern tree* arvore;

#line 72 "parser.tab.c" /* yacc.c:339  */

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
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    TK_LIT_INT = 258,
    TK_LIT_FLOAT = 259,
    TK_LIT_FALSE = 260,
    TK_LIT_TRUE = 261,
    TK_LIT_CHAR = 262,
    TK_LIT_STRING = 263,
    TK_IDENTIFICADOR = 264,
    TK_PR_INT = 265,
    TK_PR_FLOAT = 266,
    TK_PR_BOOL = 267,
    TK_PR_STRING = 268,
    TK_PR_CHAR = 269,
    TK_PR_IF = 270,
    TK_PR_THEN = 271,
    TK_PR_ELSE = 272,
    TK_PR_WHILE = 273,
    TK_PR_DO = 274,
    TK_PR_INPUT = 275,
    TK_PR_OUTPUT = 276,
    TK_PR_RETURN = 277,
    TK_PR_CONST = 278,
    TK_PR_STATIC = 279,
    TK_PR_FOREACH = 280,
    TK_PR_FOR = 281,
    TK_PR_SWITCH = 282,
    TK_PR_CASE = 283,
    TK_PR_BREAK = 284,
    TK_PR_CONTINUE = 285,
    TK_PR_CLASS = 286,
    TK_PR_PRIVATE = 287,
    TK_PR_PUBLIC = 288,
    TK_PR_PROTECTED = 289,
    TK_PR_END = 290,
    TK_PR_DEFAULT = 291,
    TK_OC_LE = 292,
    TK_OC_GE = 293,
    TK_OC_EQ = 294,
    TK_OC_NE = 295,
    TK_OC_AND = 296,
    TK_OC_OR = 297,
    TK_OC_SL = 298,
    TK_OC_SR = 299,
    TOKEN_ERRO = 300
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 9 "parser.y" /* yacc.c:355  */

    symbol valor_lexico;
    tree* ast;

#line 163 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 180 "parser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   200

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  121
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  210

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    60,     2,    64,    66,    63,    62,     2,
      47,    46,    55,    53,    67,    52,    70,    56,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    69,    68,
      59,    61,    58,    54,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    49,     2,    48,    65,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    51,    57,    50,     2,     2,     2,     2,
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
      45
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    40,    40,    43,    44,    48,    49,    53,    57,    58,
      62,    63,    67,    68,    72,    76,    80,    84,    85,    89,
      90,    94,    95,    99,   103,   105,   106,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   123,   127,   128,
     129,   130,   134,   135,   140,   141,   142,   143,   144,   145,
     149,   150,   154,   160,   164,   168,   172,   173,   174,   178,
     179,   183,   184,   188,   189,   193,   194,   198,   199,   200,
     204,   205,   206,   207,   208,   212,   213,   214,   218,   219,
     220,   221,   225,   226,   230,   231,   232,   233,   234,   235,
     239,   240,   244,   245,   249,   251,   257,   261,   268,   272,
     273,   277,   281,   285,   289,   290,   291,   292,   296,   300,
     301,   302,   306,   307,   308,   309,   310,   314,   315,   316,
     317,   318
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TK_LIT_INT", "TK_LIT_FLOAT",
  "TK_LIT_FALSE", "TK_LIT_TRUE", "TK_LIT_CHAR", "TK_LIT_STRING",
  "TK_IDENTIFICADOR", "TK_PR_INT", "TK_PR_FLOAT", "TK_PR_BOOL",
  "TK_PR_STRING", "TK_PR_CHAR", "TK_PR_IF", "TK_PR_THEN", "TK_PR_ELSE",
  "TK_PR_WHILE", "TK_PR_DO", "TK_PR_INPUT", "TK_PR_OUTPUT", "TK_PR_RETURN",
  "TK_PR_CONST", "TK_PR_STATIC", "TK_PR_FOREACH", "TK_PR_FOR",
  "TK_PR_SWITCH", "TK_PR_CASE", "TK_PR_BREAK", "TK_PR_CONTINUE",
  "TK_PR_CLASS", "TK_PR_PRIVATE", "TK_PR_PUBLIC", "TK_PR_PROTECTED",
  "TK_PR_END", "TK_PR_DEFAULT", "TK_OC_LE", "TK_OC_GE", "TK_OC_EQ",
  "TK_OC_NE", "TK_OC_AND", "TK_OC_OR", "TK_OC_SL", "TK_OC_SR",
  "TOKEN_ERRO", "')'", "'('", "']'", "'['", "'}'", "'{'", "'-'", "'+'",
  "'?'", "'*'", "'/'", "'|'", "'>'", "'<'", "'!'", "'='", "'&'", "'%'",
  "'#'", "'^'", "'$'", "','", "';'", "':'", "'.'", "$accept", "start",
  "program", "declaration", "global_variable", "global_fotter",
  "vector_declaration", "static", "id", "function", "func_header", "list",
  "parameters", "const", "command_block", "command", "simple_command",
  "local_variable", "id_list", "assignment", "literal", "attribution",
  "vector_attribution", "expr", "ternary", "unary_minus", "or", "and",
  "or_log", "and_log", "equal", "rel", "soma_sub", "mult_div",
  "exponential", "unary", "parenthesis", "flux_control", "conditional",
  "iterative", "input", "output", "return", "break", "continue", "shift",
  "func_call", "args", "operand_arit", "type", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,    41,    40,    93,    91,
     125,   123,    45,    43,    63,    42,    47,   124,    62,    60,
      33,    61,    38,    37,    35,    94,    36,    44,    59,    58,
      46
};
# endif

#define YYPACT_NINF -87

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-87)))

#define YYTABLE_NINF -27

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      12,   -87,    25,   -87,    12,   -87,   124,   -87,   -23,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,    11,    20,   -87,   -87,
     -10,   -17,     7,    11,   123,    55,    16,   -87,   -87,    71,
       8,   -87,    24,    33,   -87,   -87,    43,    35,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -12,    63,    39,
     -87,    55,    55,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,    55,    55,    55,    58,    58,    58,
      58,    58,    48,   -87,   -87,   -87,    62,    79,    92,    87,
      85,    51,   -11,    46,   -32,    83,   -87,   -87,   -87,   -87,
      11,   -87,   124,   146,   148,    55,    55,    55,   -87,    20,
     149,   150,    55,    20,   -87,   -24,   124,   106,    11,    88,
     109,   111,   112,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
      55,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,     4,    91,   100,
      11,   -87,   -87,    95,   117,   116,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,    71,    11,   -87,   118,   -87,   -23,   147,
     -87,    96,    92,    87,    85,    51,   -11,   -11,    46,    46,
      46,    46,   -32,   -32,   -87,   -87,   -87,   -87,    55,   131,
     102,   -87,    55,   -87,   -87,   124,   -87,    39,   153,   -23,
      55,   103,   123,    11,   -87,    11,   -87,   -23,   -87,   -87,
      11,   -87,   -87,   131,   -87,   -87,   -87,   125,   -23,   -87
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      13,    12,     0,     2,    13,     6,     0,     5,     0,     1,
       3,   117,   118,   119,   121,   120,     0,    13,    15,    14,
      11,     0,     0,     0,     0,     0,     0,   102,   103,    22,
       0,    32,     0,     0,    27,    28,     0,     0,    92,    93,
      29,    30,    31,    34,    35,    33,    36,    22,     0,     9,
      16,     0,     0,    98,    44,    45,    46,    47,    48,    49,
      99,   100,   114,   115,     0,     0,     0,     0,     0,     0,
       0,     0,   113,   112,   101,    53,    55,    58,    60,    62,
      64,    66,    69,    74,    77,    81,    83,    89,   116,    91,
       0,    21,     0,     0,     0,   111,     0,     0,    23,    13,
       0,     0,     0,    13,    18,     0,     0,     0,     0,     0,
       0,     0,     0,    57,    56,    87,    84,    88,    85,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   104,   105,   110,     0,     0,    50,    24,   106,   107,
      51,    25,    17,    22,     0,    10,    11,     7,     0,     0,
      90,     0,    59,    61,    63,    65,    67,    68,    70,    71,
      72,    73,    76,    75,    78,    79,    80,    82,     0,    41,
      37,    38,   111,   108,    52,     0,    20,     9,    94,     0,
       0,     0,     0,     0,   109,     0,     8,     0,    97,    54,
       0,    42,    43,    40,    39,    19,    95,     0,     0,    96
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -87,   -87,   169,   -87,   -87,   -13,    19,    56,   -15,   -87,
     -87,   -87,   -87,   -42,    -8,   -31,   -87,   -87,   -87,    -9,
     -16,   -86,   -14,   -19,    -3,   -47,   -87,    61,    57,    60,
      64,    -2,    13,    14,   -87,   -54,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,    -7,     9,   -87,   -85
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     5,   109,    49,    29,    72,     7,
       8,    50,   105,    92,    31,    32,    33,    34,   180,   181,
      61,    35,    73,   143,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    88,   144,    89,    16
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      18,    20,    30,    36,   138,   106,    74,   140,    53,    60,
      46,    91,    -4,   115,   116,   117,   118,   119,   113,   114,
      19,   154,   152,   133,   134,     9,   127,   128,    17,    19,
      51,   135,   110,   111,   104,    21,     1,    47,    22,    48,
      23,    24,    25,   153,     1,   112,    26,   129,   130,    27,
      28,    93,    94,    96,    52,    95,     6,    96,    62,    63,
       6,    62,    63,    90,    19,    97,   107,    19,   147,    97,
     -26,    17,   151,   161,    98,   137,   139,   145,   146,   174,
     175,   176,   177,   150,    30,    36,   100,   101,    30,    36,
     125,   126,    46,   156,    91,    95,    46,    96,   131,   132,
     195,    99,    64,   103,   102,    64,   108,    65,    66,    67,
      68,   185,    67,    68,   207,    69,   120,    70,    69,    71,
      70,   121,    71,   166,   167,   179,    54,    55,    56,    57,
      58,    59,    19,   122,    11,    12,    13,    14,    15,   186,
     168,   169,   170,   171,   123,   172,   173,   124,   136,   141,
     188,   142,   148,   149,   155,   158,   157,   159,   160,   191,
     178,   102,   182,   183,   184,   190,   189,    48,   192,   193,
     197,   208,   200,    10,   196,   187,   202,   201,   203,   163,
     205,   198,   162,   164,   204,   137,   139,   199,   165,   206,
       0,   194,     0,     0,     0,     0,     0,     0,     0,     0,
     209
};

static const yytype_int16 yycheck[] =
{
       8,    16,    17,    17,    90,    47,    25,    92,    23,    24,
      17,    23,     0,    67,    68,    69,    70,    71,    65,    66,
       9,   106,    46,    55,    56,     0,    37,    38,    51,     9,
      47,    63,    51,    52,    46,    15,    24,    47,    18,    49,
      20,    21,    22,    67,    24,    64,    26,    58,    59,    29,
      30,    43,    44,    49,    47,    47,     0,    49,     3,     4,
       4,     3,     4,    47,     9,    61,     3,     9,    99,    61,
      50,    51,   103,   120,    50,    90,    90,    96,    97,   133,
     134,   135,   136,   102,    99,    99,    43,    44,   103,   103,
      39,    40,    99,   108,    23,    47,   103,    49,    52,    53,
     185,    68,    47,    68,    61,    47,    67,    52,    53,    54,
      55,   153,    54,    55,   200,    60,    54,    62,    60,    64,
      62,    42,    64,   125,   126,   140,     3,     4,     5,     6,
       7,     8,     9,    41,    10,    11,    12,    13,    14,   154,
     127,   128,   129,   130,    57,   131,   132,    62,    65,     3,
     158,     3,     3,     3,    48,    46,    68,    46,    46,   178,
      69,    61,    67,    46,    48,    69,    19,    49,    37,    67,
      17,    46,    69,     4,   187,   156,   192,   192,   193,   122,
     195,   189,   121,   123,   193,   200,   200,   190,   124,   197,
      -1,   182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     208
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    24,    72,    73,    74,    75,    78,    80,    81,     0,
      73,    10,    11,    12,    13,    14,   120,    51,    85,     9,
      79,    15,    18,    20,    21,    22,    26,    29,    30,    78,
      79,    85,    86,    87,    88,    92,    93,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,    47,    49,    77,
      82,    47,    47,    79,     3,     4,     5,     6,     7,     8,
      79,    91,     3,     4,    47,    52,    53,    54,    55,    60,
      62,    64,    79,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   117,   119,
      47,    23,    84,    43,    44,    47,    49,    61,    50,    68,
      43,    44,    61,    68,    46,    83,    84,     3,    67,    76,
      94,    94,    94,    96,    96,   106,   106,   106,   106,   106,
      54,    42,    41,    57,    62,    39,    40,    37,    38,    58,
      59,    52,    53,    55,    56,    63,    65,    79,    92,    93,
     120,     3,     3,    94,   118,    94,    94,    86,     3,     3,
      94,    86,    46,    67,   120,    48,    79,    68,    46,    46,
      46,    96,    98,    99,   100,   101,   102,   102,   103,   103,
     103,   103,   104,   104,   106,   106,   106,   106,    69,    79,
      89,    90,    67,    46,    48,    84,    79,    77,    85,    19,
      69,    94,    37,    67,   118,   120,    76,    17,    85,    95,
      69,    79,    91,    79,    90,    79,    85,    92,    46,    85
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    71,    72,    73,    73,    74,    74,    75,    76,    76,
      77,    77,    78,    78,    79,    80,    81,    82,    82,    83,
      83,    84,    84,    85,    86,    86,    86,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    88,    89,    89,
      89,    89,    90,    90,    91,    91,    91,    91,    91,    91,
      92,    92,    93,    94,    95,    95,    96,    96,    96,    97,
      97,    98,    98,    99,    99,   100,   100,   101,   101,   101,
     102,   102,   102,   102,   102,   103,   103,   103,   104,   104,
     104,   104,   105,   105,   106,   106,   106,   106,   106,   106,
     107,   107,   108,   108,   109,   109,   110,   110,   111,   112,
     112,   113,   114,   115,   116,   116,   116,   116,   117,   118,
     118,   118,   119,   119,   119,   119,   119,   120,   120,   120,
     120,   120
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     6,     4,     0,
       3,     0,     1,     0,     1,     2,     4,     3,     2,     5,
       3,     1,     0,     3,     3,     3,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     3,
       3,     1,     3,     3,     1,     1,     1,     1,     1,     1,
       3,     3,     4,     1,     5,     1,     2,     2,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     1,     3,     1,     2,     2,     2,     2,     2,     1,
       3,     1,     1,     1,     5,     7,     9,     6,     2,     2,
       2,     2,     1,     1,     3,     3,     3,     3,     4,     3,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1
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
#line 40 "parser.y" /* yacc.c:1646  */
    {arvore = (yyvsp[0].ast);}
#line 1421 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 43 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[-1].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1427 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 44 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = NULL;}
#line 1433 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 48 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1439 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 49 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = NULL;}
#line 1445 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 53 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = NULL; libera((yyvsp[-3].ast));}
#line 1451 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 57 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = NULL; libera((yyvsp[-2].ast));}
#line 1457 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 58 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = NULL;}
#line 1463 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 62 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = NULL;}
#line 1469 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 63 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = NULL;}
#line 1475 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 67 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = NULL;}
#line 1481 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 68 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = NULL;}
#line 1487 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 72 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1493 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 76 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[-1].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1499 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 80 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[-1].ast);}
#line 1505 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 84 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = NULL;}
#line 1511 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 85 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = NULL;}
#line 1517 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 89 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = NULL; libera((yyvsp[0].ast));}
#line 1523 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 90 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = NULL; libera((yyvsp[0].ast));}
#line 1529 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 94 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = NULL;}
#line 1535 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 95 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = NULL;}
#line 1541 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 99 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[-1].ast);}
#line 1547 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 103 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[-2].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1553 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 105 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[-2].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1559 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 106 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = NULL;}
#line 1565 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 110 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1571 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 111 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1577 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 112 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1583 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 113 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1589 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 114 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1595 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 115 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1601 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 116 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1607 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 117 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1613 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 118 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1619 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 119 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1625 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 123 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1631 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 127 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1637 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 128 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[-2].ast);  (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1643 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 129 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[-2].ast); libera((yyvsp[0].ast));}
#line 1649 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 130 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = NULL; libera((yyvsp[0].ast));}
#line 1655 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 134 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1661 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 135 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1667 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 140 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico)); }
#line 1673 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 141 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico)); }
#line 1679 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 142 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico)); }
#line 1685 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 143 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico)); }
#line 1691 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 144 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico)); }
#line 1697 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 145 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico)); }
#line 1703 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 149 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1709 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 150 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1715 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 154 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-2].valor_lexico)); (yyval.ast)->data.lv.v.vs = "[]"; (yyval.ast)->data.token_t = COMPOSE_OP;
                       (yyval.ast) = insert_child((yyval.ast), (yyvsp[-3].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-1].ast));}
#line 1722 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 160 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1728 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 164 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-3].valor_lexico)); (yyval.ast)->data.lv.v.vs = "?:";
                                       (yyval.ast)->data.token_t = COMPOSE_OP;
                                       (yyval.ast) = insert_child((yyval.ast), (yyvsp[-4].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));
                                       (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1737 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 168 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1743 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 172 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1749 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 173 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1755 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 174 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1761 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 178 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1767 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 179 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1773 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 183 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1779 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 184 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1785 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 188 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1791 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 189 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) =  (yyvsp[0].ast);}
#line 1797 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 193 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1803 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 194 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1809 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 198 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1815 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 199 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1821 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 200 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1827 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 204 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1833 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 205 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1839 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 206 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1845 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 207 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1851 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 208 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1857 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 212 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1863 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 213 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1869 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 214 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1875 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 218 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1881 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 219 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1887 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 220 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1893 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 221 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1899 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 225 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1905 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 226 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1911 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 230 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1917 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 231 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1923 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 232 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1929 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 233 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1935 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 234 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1941 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 235 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1947 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 239 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[-1].ast);}
#line 1953 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 240 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1959 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 244 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1965 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 245 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1971 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 249 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-4].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1977 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 251 "parser.y" /* yacc.c:1646  */
    {
        (yyval.ast) = insert_leaf((yyvsp[-6].valor_lexico));
        (yyval.ast) = insert_child((yyval.ast), (yyvsp[-4].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1985 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 257 "parser.y" /* yacc.c:1646  */
    {
        (yyval.ast) = insert_leaf((yyvsp[-8].valor_lexico));
        (yyval.ast) = insert_child((yyval.ast), (yyvsp[-6].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-4].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));
        (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1994 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 261 "parser.y" /* yacc.c:1646  */
    {
        (yyval.ast) = insert_leaf((yyvsp[-5].valor_lexico));
        (yyval.ast) = insert_child((yyval.ast), (yyvsp[-3].ast));
        (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 2003 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 268 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 2009 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 272 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 2015 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 273 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child ((yyval.ast), (yyvsp[0].ast));}
#line 2021 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 277 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 2027 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 281 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 2033 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 285 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 2039 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 289 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), insert_leaf((yyvsp[0].valor_lexico)));}
#line 2045 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 290 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), insert_leaf((yyvsp[0].valor_lexico)));}
#line 2051 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 291 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), insert_leaf((yyvsp[0].valor_lexico)));}
#line 2057 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 292 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), insert_leaf((yyvsp[0].valor_lexico)));}
#line 2063 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 296 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[-3].ast); (yyval.ast)->data.lv.v.vs = prepend((yyval.ast)->data.lv.v.vs, "call "); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-1].ast));}
#line 2069 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 300 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[-2].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 2075 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 301 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 2081 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 302 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = NULL;}
#line 2087 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 306 "parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast);}
#line 2093 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 307 "parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast);}
#line 2099 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 308 "parser.y" /* yacc.c:1646  */
    { (yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 2105 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 309 "parser.y" /* yacc.c:1646  */
    { (yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 2111 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 310 "parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast);}
#line 2117 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 314 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = NULL;}
#line 2123 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 315 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = NULL;}
#line 2129 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 316 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = NULL;}
#line 2135 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 317 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = NULL;}
#line 2141 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 318 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = NULL;}
#line 2147 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2151 "parser.tab.c" /* yacc.c:1646  */
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
#line 320 "parser.y" /* yacc.c:1906  */

