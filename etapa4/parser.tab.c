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
#line 4 "parser.y" /* yacc.c:339  */

#include "tree.h"
#include "symbol_table.h"
#include "stack.h"

int yylex(void);
void yyerror (char const *s);

extern tree* arvore;
extern stack* top;

#line 78 "parser.tab.c" /* yacc.c:339  */

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
#line 18 "parser.y" /* yacc.c:355  */

    token_value valor_lexico;
    tree* ast;

#line 169 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 186 "parser.tab.c" /* yacc.c:358  */

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
#define YYLAST   206

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  123
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  216

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
       0,    50,    50,    53,    54,    58,    59,    63,    65,    70,
      72,    74,    78,    79,    83,    87,    91,    98,    99,   103,
     104,   108,   109,   113,   117,   121,   125,   127,   128,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   145,
     149,   150,   151,   153,   157,   162,   168,   169,   170,   171,
     172,   173,   177,   186,   199,   208,   212,   216,   220,   221,
     222,   226,   227,   231,   232,   236,   237,   241,   242,   246,
     247,   248,   252,   253,   254,   255,   256,   260,   261,   262,
     266,   267,   268,   269,   273,   274,   278,   279,   280,   281,
     282,   283,   287,   288,   292,   293,   297,   299,   304,   308,
     315,   319,   320,   324,   328,   332,   336,   337,   338,   339,
     343,   352,   353,   354,   358,   359,   360,   361,   362,   366,
     367,   368,   369,   370
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
  "program", "declaration", "global_variable", "global_fotter", "static",
  "id", "function", "func_header", "list", "parameters", "const",
  "command_block", "open_command", "close_command", "command",
  "simple_command", "local_variable", "id_list", "assignment", "literal",
  "attribution", "vector_attribution", "expr", "ternary", "unary_minus",
  "or", "and", "or_log", "and_log", "equal", "rel", "soma_sub", "mult_div",
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

#define YYPACT_NINF -105

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-105)))

#define YYTABLE_NINF -29

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       8,  -105,    14,  -105,     8,  -105,    69,  -105,   -35,  -105,
    -105,  -105,  -105,  -105,  -105,  -105,    10,  -105,  -105,   111,
    -105,   -16,   -20,     6,    10,   151,     9,    21,  -105,  -105,
       7,   102,  -105,    -7,    16,  -105,  -105,    -2,    18,  -105,
    -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,   -12,    52,
      10,    20,  -105,     9,     9,  -105,  -105,  -105,  -105,  -105,
    -105,  -105,  -105,  -105,  -105,  -105,     9,     9,     9,    63,
      63,    63,    63,    63,     3,  -105,  -105,  -105,    22,    48,
      60,    39,    50,    55,   -13,    56,     2,    54,  -105,  -105,
    -105,  -105,    10,  -105,    69,   118,   119,     9,     9,     9,
    -105,  -105,   111,   121,   127,     9,   111,  -105,   -18,    69,
      86,   -23,  -105,    90,    97,    98,  -105,  -105,  -105,  -105,
    -105,  -105,  -105,     9,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
     -32,    78,    87,    10,  -105,  -105,    83,   106,   120,  -105,
    -105,  -105,  -105,  -105,  -105,  -105,     7,    10,   103,   166,
    -105,   -35,   152,  -105,   104,    60,    39,    50,    55,   -13,
     -13,    56,    56,    56,    56,     2,     2,  -105,  -105,  -105,
    -105,     9,   135,   107,  -105,     9,  -105,  -105,    69,  -105,
     108,   129,   161,   -35,     9,   110,   151,    10,  -105,    10,
    -105,   103,   -35,  -105,  -105,    10,  -105,  -105,   135,  -105,
    -105,  -105,  -105,   134,   -35,  -105
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      13,    12,     0,     2,    13,     6,     0,     5,     0,     1,
       3,   119,   120,   121,   123,   122,     0,    24,    15,    13,
      14,    11,     0,     0,     0,     0,     0,     0,   104,   105,
      22,     0,    34,     0,     0,    29,    30,     0,     0,    94,
      95,    31,    32,    33,    36,    37,    35,    38,    22,     0,
       0,     0,    16,     0,     0,   100,    46,    47,    48,    49,
      50,    51,   101,   102,   116,   117,     0,     0,     0,     0,
       0,     0,     0,     0,   115,   114,   103,    55,    57,    60,
      62,    64,    66,    68,    71,    76,    79,    83,    85,    91,
     118,    93,     0,    21,     0,     0,     0,   113,     0,     0,
      25,    23,    13,     0,     0,     0,    13,    18,     0,     0,
       0,    11,     8,     0,     0,     0,    59,    58,    89,    86,
      90,    87,    88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   106,   107,   112,     0,     0,    52,
      26,   108,   109,    53,    27,    17,    22,     0,    11,     0,
      10,     0,     0,    92,     0,    61,    63,    65,    67,    69,
      70,    72,    73,    74,    75,    78,    77,    80,    81,    82,
      84,     0,    43,    39,    40,   113,   110,    54,     0,    20,
       0,     0,    96,     0,     0,     0,     0,     0,   111,     0,
       7,    11,     0,    99,    56,     0,    44,    45,    42,    41,
      19,     9,    97,     0,     0,    98
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -105,  -105,   179,  -105,  -105,  -104,    70,   -15,  -105,  -105,
    -105,  -105,   -43,    -8,  -105,  -105,     5,  -105,  -105,  -105,
     -11,    -9,   -89,   -17,    -6,    -5,   -45,  -105,    67,    68,
      66,    71,   -14,    34,     4,  -105,   -33,  -105,  -105,  -105,
    -105,  -105,  -105,  -105,  -105,  -105,  -105,    -4,    11,  -105,
     -88
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     5,    51,    30,    74,     7,     8,
      52,   108,    94,    32,    19,   101,    33,    34,    35,   183,
     184,    63,    36,    75,   146,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    90,   147,    91,
      16
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      18,    21,    37,   141,    31,   109,   143,   160,    -4,    55,
      62,    93,    64,    65,     9,    47,    17,    98,    20,    20,
      76,   157,   116,   117,   130,   131,   159,    53,   155,    99,
      93,    48,     1,    49,   107,   111,   118,   119,   120,   121,
     122,   103,   104,   100,    50,   132,   133,   113,   114,   156,
      97,    50,    98,    54,   190,   110,    66,   136,   137,   105,
     115,    67,    68,    69,    70,   138,    64,    65,    92,    71,
       6,    72,    20,    73,     6,   142,   123,   140,   164,    11,
      12,    13,    14,    15,   102,    37,   106,    31,   112,    37,
     124,    31,   148,   149,   128,   129,   126,   211,    47,   153,
     199,   125,    47,   177,   178,   179,   180,   150,   134,   135,
      66,   154,   127,   188,   169,   170,   213,    69,    70,   139,
      20,   144,   145,    71,   151,    72,    22,    73,   182,    23,
     152,    24,    25,    26,   158,     1,   161,    27,   175,   176,
      28,    29,   189,   162,   163,    95,    96,   181,   105,    97,
     185,    98,   186,   192,    56,    57,    58,    59,    60,    61,
      20,   -28,    17,    99,   171,   172,   173,   174,   187,   191,
      50,   193,   196,   194,   197,   195,   200,   201,   202,   205,
     214,   206,   208,    10,   210,   203,   209,   207,   142,   204,
     140,   165,   167,   166,   212,     0,   198,     0,   168,     0,
       0,     0,     0,     0,     0,     0,   215
};

static const yytype_int16 yycheck[] =
{
       8,    16,    19,    92,    19,    48,    94,   111,     0,    24,
      25,    23,     3,     4,     0,    19,    51,    49,     9,     9,
      26,   109,    67,    68,    37,    38,    49,    47,    46,    61,
      23,    47,    24,    49,    46,    50,    69,    70,    71,    72,
      73,    43,    44,    50,    67,    58,    59,    53,    54,    67,
      47,    67,    49,    47,   158,     3,    47,    55,    56,    61,
      66,    52,    53,    54,    55,    63,     3,     4,    47,    60,
       0,    62,     9,    64,     4,    92,    54,    92,   123,    10,
      11,    12,    13,    14,    68,   102,    68,   102,    68,   106,
      42,   106,    98,    99,    39,    40,    57,   201,   102,   105,
     188,    41,   106,   136,   137,   138,   139,   102,    52,    53,
      47,   106,    62,   156,   128,   129,   205,    54,    55,    65,
       9,     3,     3,    60,     3,    62,    15,    64,   143,    18,
       3,    20,    21,    22,    48,    24,    46,    26,   134,   135,
      29,    30,   157,    46,    46,    43,    44,    69,    61,    47,
      67,    49,    46,   161,     3,     4,     5,     6,     7,     8,
       9,    50,    51,    61,   130,   131,   132,   133,    48,     3,
      67,    19,    37,    69,    67,   181,    68,    48,    17,    69,
      46,   196,   197,     4,   199,   193,   197,   196,   205,   194,
     205,   124,   126,   125,   202,    -1,   185,    -1,   127,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   214
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    24,    72,    73,    74,    75,    77,    79,    80,     0,
      73,    10,    11,    12,    13,    14,   121,    51,    84,    85,
       9,    78,    15,    18,    20,    21,    22,    26,    29,    30,
      77,    78,    84,    87,    88,    89,    93,    94,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,    47,    49,
      67,    76,    81,    47,    47,    78,     3,     4,     5,     6,
       7,     8,    78,    92,     3,     4,    47,    52,    53,    54,
      55,    60,    62,    64,    78,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     118,   120,    47,    23,    83,    43,    44,    47,    49,    61,
      50,    86,    68,    43,    44,    61,    68,    46,    82,    83,
       3,    78,    68,    95,    95,    95,    97,    97,   107,   107,
     107,   107,   107,    54,    42,    41,    57,    62,    39,    40,
      37,    38,    58,    59,    52,    53,    55,    56,    63,    65,
      78,    93,    94,   121,     3,     3,    95,   119,    95,    95,
      87,     3,     3,    95,    87,    46,    67,   121,    48,    49,
      76,    46,    46,    46,    97,    99,   100,   101,   102,   103,
     103,   104,   104,   104,   104,   105,   105,   107,   107,   107,
     107,    69,    78,    90,    91,    67,    46,    48,    83,    78,
      76,     3,    84,    19,    69,    95,    37,    67,   119,   121,
      68,    48,    17,    84,    96,    69,    78,    92,    78,    91,
      78,    76,    84,    93,    46,    84
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    71,    72,    73,    73,    74,    74,    75,    75,    76,
      76,    76,    77,    77,    78,    79,    80,    81,    81,    82,
      82,    83,    83,    84,    85,    86,    87,    87,    87,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    89,
      90,    90,    90,    90,    91,    91,    92,    92,    92,    92,
      92,    92,    93,    93,    94,    95,    96,    96,    97,    97,
      97,    98,    98,    99,    99,   100,   100,   101,   101,   102,
     102,   102,   103,   103,   103,   103,   103,   104,   104,   104,
     105,   105,   105,   105,   106,   106,   107,   107,   107,   107,
     107,   107,   108,   108,   109,   109,   110,   110,   111,   111,
     112,   113,   113,   114,   115,   116,   117,   117,   117,   117,
     118,   119,   119,   119,   120,   120,   120,   120,   120,   121,
     121,   121,   121,   121
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     8,     5,     6,
       3,     0,     1,     0,     1,     2,     4,     3,     2,     5,
       3,     1,     0,     3,     1,     1,     3,     3,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     3,     3,     1,     3,     3,     1,     1,     1,     1,
       1,     1,     3,     3,     4,     1,     5,     1,     2,     2,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     1,     3,     1,     2,     2,     2,     2,
       2,     1,     3,     1,     1,     1,     5,     7,     9,     6,
       2,     2,     2,     2,     1,     1,     3,     3,     3,     3,
       4,     3,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1
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
#line 50 "parser.y" /* yacc.c:1646  */
    {arvore = (yyvsp[0].ast);}
#line 1432 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 53 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[-1].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1438 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 54 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = NULL;}
#line 1444 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 58 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1450 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 59 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = NULL;}
#line 1456 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 63 "parser.y" /* yacc.c:1646  */
    {declare_variable(top, (yyvsp[-3].valor_lexico).lv.v.vi, (yyvsp[-6].valor_lexico).t_type,
                                                                       TYPE_VEC, (yyvsp[-5].ast)->data.line, (yyvsp[-5].ast)->data.lv.v, (yyvsp[-5].ast)->data.lexeme);}
#line 1463 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 65 "parser.y" /* yacc.c:1646  */
    {declare_variable(top, 1, (yyvsp[-3].valor_lexico).t_type, TYPE_VAR, (yyvsp[-2].ast)->data.line,
                                                                       (yyvsp[-2].ast)->data.lv.v, (yyvsp[-2].ast)->data.lexeme);}
#line 1470 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 70 "parser.y" /* yacc.c:1646  */
    {declare_variable(top, (yyvsp[-2].valor_lexico).lv.v.vi, TYPE_UNKNOWN,
                                                           TYPE_VEC, (yyvsp[-4].ast)->data.line, (yyvsp[-4].ast)->data.lv.v, (yyvsp[-4].ast)->data.lexeme);}
#line 1477 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 72 "parser.y" /* yacc.c:1646  */
    {declare_variable(top, 1, TYPE_UNKNOWN, TYPE_VAR, (yyvsp[-1].ast)->data.line,
                                                           (yyvsp[-1].ast)->data.lv.v, (yyvsp[-1].ast)->data.lexeme);}
#line 1484 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 74 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = NULL;}
#line 1490 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 78 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = NULL;}
#line 1496 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 79 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = NULL;}
#line 1502 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 83 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1508 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 87 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[-1].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1514 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 91 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[-1].ast);
                                 declare_function(top, 1, (yyvsp[-2].valor_lexico).t_type, TYPE_FUNC,
                                    (yyvsp[-1].ast)->data.line, (yyvsp[-1].ast)->data.lv.v, (yyvsp[-1].ast)->data.lexeme);
                                 }
#line 1523 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 98 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = NULL;}
#line 1529 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 99 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = NULL;}
#line 1535 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 103 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = NULL; libera((yyvsp[0].ast));}
#line 1541 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 104 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = NULL; libera((yyvsp[0].ast));}
#line 1547 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 108 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = NULL;}
#line 1553 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 109 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = NULL;}
#line 1559 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 113 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[-1].ast);}
#line 1565 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 117 "parser.y" /* yacc.c:1646  */
    {push_new_table(&top);}
#line 1571 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 121 "parser.y" /* yacc.c:1646  */
    {pop(&top);}
#line 1577 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 125 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[-2].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1583 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 127 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[-2].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1589 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 128 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = NULL;}
#line 1595 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 132 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1601 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 133 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1607 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 134 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1613 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 135 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1619 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 136 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1625 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 137 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1631 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 138 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1637 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 139 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1643 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 140 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1649 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 141 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1655 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 145 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1661 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 149 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1667 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 150 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[-2].ast);  (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1673 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 151 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[-2].ast);
                               declare_variable(top, 1, TYPE_UNKNOWN, TYPE_VAR, (yyvsp[0].ast)->data.line, (yyvsp[0].ast)->data.lv.v, (yyvsp[0].ast)->data.lexeme); libera((yyvsp[0].ast));}
#line 1680 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 153 "parser.y" /* yacc.c:1646  */
    {declare_variable(top, 1, TYPE_UNKNOWN, TYPE_VAR, (yyvsp[0].ast)->data.line, (yyvsp[0].ast)->data.lv.v, (yyvsp[0].ast)->data.lexeme);}
#line 1686 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 157 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico));
							  (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));
							  (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));
                              }
#line 1695 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 162 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico));
							  (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));
							  (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1703 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 168 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico)); }
#line 1709 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 169 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico)); }
#line 1715 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 170 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico)); }
#line 1721 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 171 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico)); }
#line 1727 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 172 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico)); }
#line 1733 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 173 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico)); }
#line 1739 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 177 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico));
                                  (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));
                                  (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));
                                  symbol var_left = create_symbol(1, TYPE_UNKNOWN, TYPE_VAR, (yyvsp[-2].ast)->data.line,
                                                                        (yyvsp[-2].ast)->data.lv.v, (yyvsp[-2].ast)->data.lexeme);
                                  symbol var_right = create_symbol(1, TYPE_UNKNOWN, TYPE_VAR, (yyvsp[0].ast)->data.line,
                                                                (yyvsp[0].ast)->data.lv.v, (yyvsp[0].ast)->data.lexeme);
                                  assign_variable(top, &var_left, &var_right);}
#line 1752 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 186 "parser.y" /* yacc.c:1646  */
    {
                                   (yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico));
                                   (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));
                                   (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));
                                   symbol var_left = create_symbol(1, TYPE_UNKNOWN, TYPE_VAR, (yyvsp[-2].ast)->data.line,
                                                                         (yyvsp[-2].ast)->child[0]->data.lv.v,
                                                                         (yyvsp[-2].ast)->child[0]->data.lexeme);
                                   symbol var_right = create_symbol(1, TYPE_UNKNOWN, TYPE_VAR, (yyvsp[0].ast)->data.line,
                                                                         (yyvsp[0].ast)->data.lv.v, (yyvsp[0].ast)->data.lexeme);
                                   assign_vector(top, &var_left, &var_right);}
#line 1767 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 199 "parser.y" /* yacc.c:1646  */
    { (yyval.ast) = insert_leaf((yyvsp[-2].valor_lexico));
                                    (yyval.ast)->data.lv.v.vs = "[]";
                                    (yyval.ast)->data.token_t = COMPOSE_OP;
                                    (yyval.ast) = insert_child((yyval.ast), (yyvsp[-3].ast));
                                    (yyval.ast) = insert_child((yyval.ast), (yyvsp[-1].ast));}
#line 1777 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 208 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1783 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 212 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-3].valor_lexico)); (yyval.ast)->data.lv.v.vs = "?:";
                                       (yyval.ast)->data.token_t = COMPOSE_OP;
                                       (yyval.ast) = insert_child((yyval.ast), (yyvsp[-4].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));
                                       (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1792 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 216 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1798 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 220 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1804 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 221 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1810 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 222 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1816 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 226 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1822 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 227 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1828 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 231 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1834 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 232 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1840 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 236 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1846 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 237 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) =  (yyvsp[0].ast);}
#line 1852 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 241 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1858 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 242 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1864 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 246 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1870 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 247 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1876 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 248 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1882 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 252 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1888 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 253 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1894 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 254 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1900 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 255 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1906 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 256 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1912 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 260 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1918 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 261 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1924 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 262 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1930 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 266 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1936 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 267 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1942 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 268 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1948 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 269 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1954 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 273 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1960 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 274 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 1966 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 278 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1972 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 279 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1978 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 280 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1984 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 281 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1990 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 282 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1996 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 283 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 2002 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 287 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[-1].ast);}
#line 2008 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 288 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 2014 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 292 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 2020 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 293 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 2026 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 297 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-4].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 2032 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 299 "parser.y" /* yacc.c:1646  */
    { (yyval.ast) = insert_leaf((yyvsp[-6].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-4].ast));
                                                                        (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 2039 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 304 "parser.y" /* yacc.c:1646  */
    {
        (yyval.ast) = insert_leaf((yyvsp[-8].valor_lexico));
        (yyval.ast) = insert_child((yyval.ast), (yyvsp[-6].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-4].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));
        (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 2048 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 308 "parser.y" /* yacc.c:1646  */
    {
        (yyval.ast) = insert_leaf((yyvsp[-5].valor_lexico));
        (yyval.ast) = insert_child((yyval.ast), (yyvsp[-3].ast));
        (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 2057 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 315 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 2063 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 319 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 2069 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 320 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child ((yyval.ast), (yyvsp[0].ast));}
#line 2075 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 324 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 2081 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 328 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 2087 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 332 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 2093 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 336 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), insert_leaf((yyvsp[0].valor_lexico)));}
#line 2099 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 337 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), insert_leaf((yyvsp[0].valor_lexico)));}
#line 2105 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 338 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), insert_leaf((yyvsp[0].valor_lexico)));}
#line 2111 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 339 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), insert_leaf((yyvsp[0].valor_lexico)));}
#line 2117 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 343 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[-3].ast);
                       (yyval.ast)->data.lv.v.vs = prepend((yyval.ast)->data.lv.v.vs, "call ");
                       (yyval.ast) = insert_child((yyval.ast), (yyvsp[-1].ast));
                       symbol func_name = create_symbol(1, TYPE_UNKNOWN, TYPE_VAR, (yyvsp[-3].ast)->data.line,
                                                        (yyvsp[-3].ast)->data.lv.v, (yyvsp[-3].ast)->data.lexeme);
                       call_function(top, &func_name);}
#line 2128 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 352 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[-2].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 2134 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 353 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = (yyvsp[0].ast);}
#line 2140 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 354 "parser.y" /* yacc.c:1646  */
    {(yyval.ast) = NULL;}
#line 2146 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 358 "parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast);}
#line 2152 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 359 "parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast);}
#line 2158 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 360 "parser.y" /* yacc.c:1646  */
    { (yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 2164 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 361 "parser.y" /* yacc.c:1646  */
    { (yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 2170 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 362 "parser.y" /* yacc.c:1646  */
    { (yyval.ast) = (yyvsp[0].ast);}
#line 2176 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 366 "parser.y" /* yacc.c:1646  */
    {(yyval.valor_lexico) = (yyvsp[0].valor_lexico);}
#line 2182 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 367 "parser.y" /* yacc.c:1646  */
    {(yyval.valor_lexico) = (yyvsp[0].valor_lexico);}
#line 2188 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 368 "parser.y" /* yacc.c:1646  */
    {(yyval.valor_lexico) = (yyvsp[0].valor_lexico);}
#line 2194 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 369 "parser.y" /* yacc.c:1646  */
    {(yyval.valor_lexico) = (yyvsp[0].valor_lexico);}
#line 2200 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 370 "parser.y" /* yacc.c:1646  */
    {(yyval.valor_lexico) = (yyvsp[0].valor_lexico);}
#line 2206 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2210 "parser.tab.c" /* yacc.c:1646  */
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
#line 372 "parser.y" /* yacc.c:1906  */

