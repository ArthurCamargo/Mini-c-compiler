/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 4 "parser.y"

#include "tree.h"
#include "symbol_table.h"
#include "stack.h"
#include "code.h"

int yylex(void);
void yyerror (char const *s);

extern tree* arvore;
extern stack* top;

#line 84 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TK_LIT_INT = 3,                 /* TK_LIT_INT  */
  YYSYMBOL_TK_LIT_FLOAT = 4,               /* TK_LIT_FLOAT  */
  YYSYMBOL_TK_LIT_FALSE = 5,               /* TK_LIT_FALSE  */
  YYSYMBOL_TK_LIT_TRUE = 6,                /* TK_LIT_TRUE  */
  YYSYMBOL_TK_LIT_CHAR = 7,                /* TK_LIT_CHAR  */
  YYSYMBOL_TK_LIT_STRING = 8,              /* TK_LIT_STRING  */
  YYSYMBOL_TK_IDENTIFICADOR = 9,           /* TK_IDENTIFICADOR  */
  YYSYMBOL_TK_PR_INT = 10,                 /* TK_PR_INT  */
  YYSYMBOL_TK_PR_FLOAT = 11,               /* TK_PR_FLOAT  */
  YYSYMBOL_TK_PR_BOOL = 12,                /* TK_PR_BOOL  */
  YYSYMBOL_TK_PR_STRING = 13,              /* TK_PR_STRING  */
  YYSYMBOL_TK_PR_CHAR = 14,                /* TK_PR_CHAR  */
  YYSYMBOL_TK_PR_IF = 15,                  /* TK_PR_IF  */
  YYSYMBOL_TK_PR_THEN = 16,                /* TK_PR_THEN  */
  YYSYMBOL_TK_PR_ELSE = 17,                /* TK_PR_ELSE  */
  YYSYMBOL_TK_PR_WHILE = 18,               /* TK_PR_WHILE  */
  YYSYMBOL_TK_PR_DO = 19,                  /* TK_PR_DO  */
  YYSYMBOL_TK_PR_INPUT = 20,               /* TK_PR_INPUT  */
  YYSYMBOL_TK_PR_OUTPUT = 21,              /* TK_PR_OUTPUT  */
  YYSYMBOL_TK_PR_RETURN = 22,              /* TK_PR_RETURN  */
  YYSYMBOL_TK_PR_CONST = 23,               /* TK_PR_CONST  */
  YYSYMBOL_TK_PR_STATIC = 24,              /* TK_PR_STATIC  */
  YYSYMBOL_TK_PR_FOREACH = 25,             /* TK_PR_FOREACH  */
  YYSYMBOL_TK_PR_FOR = 26,                 /* TK_PR_FOR  */
  YYSYMBOL_TK_PR_SWITCH = 27,              /* TK_PR_SWITCH  */
  YYSYMBOL_TK_PR_CASE = 28,                /* TK_PR_CASE  */
  YYSYMBOL_TK_PR_BREAK = 29,               /* TK_PR_BREAK  */
  YYSYMBOL_TK_PR_CONTINUE = 30,            /* TK_PR_CONTINUE  */
  YYSYMBOL_TK_PR_CLASS = 31,               /* TK_PR_CLASS  */
  YYSYMBOL_TK_PR_PRIVATE = 32,             /* TK_PR_PRIVATE  */
  YYSYMBOL_TK_PR_PUBLIC = 33,              /* TK_PR_PUBLIC  */
  YYSYMBOL_TK_PR_PROTECTED = 34,           /* TK_PR_PROTECTED  */
  YYSYMBOL_TK_PR_END = 35,                 /* TK_PR_END  */
  YYSYMBOL_TK_PR_DEFAULT = 36,             /* TK_PR_DEFAULT  */
  YYSYMBOL_TK_OC_LE = 37,                  /* TK_OC_LE  */
  YYSYMBOL_TK_OC_GE = 38,                  /* TK_OC_GE  */
  YYSYMBOL_TK_OC_EQ = 39,                  /* TK_OC_EQ  */
  YYSYMBOL_TK_OC_NE = 40,                  /* TK_OC_NE  */
  YYSYMBOL_TK_OC_AND = 41,                 /* TK_OC_AND  */
  YYSYMBOL_TK_OC_OR = 42,                  /* TK_OC_OR  */
  YYSYMBOL_TK_OC_SL = 43,                  /* TK_OC_SL  */
  YYSYMBOL_TK_OC_SR = 44,                  /* TK_OC_SR  */
  YYSYMBOL_TOKEN_ERRO = 45,                /* TOKEN_ERRO  */
  YYSYMBOL_46_ = 46,                       /* ')'  */
  YYSYMBOL_47_ = 47,                       /* '('  */
  YYSYMBOL_48_ = 48,                       /* ']'  */
  YYSYMBOL_49_ = 49,                       /* '['  */
  YYSYMBOL_50_ = 50,                       /* '}'  */
  YYSYMBOL_51_ = 51,                       /* '{'  */
  YYSYMBOL_52_ = 52,                       /* '-'  */
  YYSYMBOL_53_ = 53,                       /* '+'  */
  YYSYMBOL_54_ = 54,                       /* '?'  */
  YYSYMBOL_55_ = 55,                       /* '*'  */
  YYSYMBOL_56_ = 56,                       /* '/'  */
  YYSYMBOL_57_ = 57,                       /* '|'  */
  YYSYMBOL_58_ = 58,                       /* '>'  */
  YYSYMBOL_59_ = 59,                       /* '<'  */
  YYSYMBOL_60_ = 60,                       /* '!'  */
  YYSYMBOL_61_ = 61,                       /* '='  */
  YYSYMBOL_62_ = 62,                       /* '&'  */
  YYSYMBOL_63_ = 63,                       /* '%'  */
  YYSYMBOL_64_ = 64,                       /* '#'  */
  YYSYMBOL_65_ = 65,                       /* '^'  */
  YYSYMBOL_66_ = 66,                       /* '$'  */
  YYSYMBOL_67_ = 67,                       /* ','  */
  YYSYMBOL_68_ = 68,                       /* ';'  */
  YYSYMBOL_69_ = 69,                       /* ':'  */
  YYSYMBOL_70_ = 70,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 71,                  /* $accept  */
  YYSYMBOL_start = 72,                     /* start  */
  YYSYMBOL_program = 73,                   /* program  */
  YYSYMBOL_declaration = 74,               /* declaration  */
  YYSYMBOL_global_variable = 75,           /* global_variable  */
  YYSYMBOL_global_fotter = 76,             /* global_fotter  */
  YYSYMBOL_static = 77,                    /* static  */
  YYSYMBOL_id = 78,                        /* id  */
  YYSYMBOL_function = 79,                  /* function  */
  YYSYMBOL_func_header = 80,               /* func_header  */
  YYSYMBOL_list = 81,                      /* list  */
  YYSYMBOL_parameters = 82,                /* parameters  */
  YYSYMBOL_const = 83,                     /* const  */
  YYSYMBOL_command_block = 84,             /* command_block  */
  YYSYMBOL_open_command = 85,              /* open_command  */
  YYSYMBOL_close_command = 86,             /* close_command  */
  YYSYMBOL_command = 87,                   /* command  */
  YYSYMBOL_simple_command = 88,            /* simple_command  */
  YYSYMBOL_local_variable = 89,            /* local_variable  */
  YYSYMBOL_id_list = 90,                   /* id_list  */
  YYSYMBOL_assignment = 91,                /* assignment  */
  YYSYMBOL_literal = 92,                   /* literal  */
  YYSYMBOL_attribution = 93,               /* attribution  */
  YYSYMBOL_vector_attribution = 94,        /* vector_attribution  */
  YYSYMBOL_expr = 95,                      /* expr  */
  YYSYMBOL_ternary = 96,                   /* ternary  */
  YYSYMBOL_unary_minus = 97,               /* unary_minus  */
  YYSYMBOL_or = 98,                        /* or  */
  YYSYMBOL_and = 99,                       /* and  */
  YYSYMBOL_or_log = 100,                   /* or_log  */
  YYSYMBOL_and_log = 101,                  /* and_log  */
  YYSYMBOL_equal = 102,                    /* equal  */
  YYSYMBOL_rel = 103,                      /* rel  */
  YYSYMBOL_soma_sub = 104,                 /* soma_sub  */
  YYSYMBOL_mult_div = 105,                 /* mult_div  */
  YYSYMBOL_exponential = 106,              /* exponential  */
  YYSYMBOL_unary = 107,                    /* unary  */
  YYSYMBOL_parenthesis = 108,              /* parenthesis  */
  YYSYMBOL_flux_control = 109,             /* flux_control  */
  YYSYMBOL_conditional = 110,              /* conditional  */
  YYSYMBOL_iterative = 111,                /* iterative  */
  YYSYMBOL_input = 112,                    /* input  */
  YYSYMBOL_output = 113,                   /* output  */
  YYSYMBOL_return = 114,                   /* return  */
  YYSYMBOL_break = 115,                    /* break  */
  YYSYMBOL_continue = 116,                 /* continue  */
  YYSYMBOL_shift = 117,                    /* shift  */
  YYSYMBOL_func_call = 118,                /* func_call  */
  YYSYMBOL_args = 119,                     /* args  */
  YYSYMBOL_operand_arit = 120,             /* operand_arit  */
  YYSYMBOL_type = 121                      /* type  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
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

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   300


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
static const yytype_int16 yyrline[] =
{
       0,    51,    51,    54,    55,    59,    61,    65,    67,    72,
      74,    76,    80,    81,    85,    89,    93,   100,   101,   105,
     106,   110,   111,   115,   120,   124,   128,   130,   131,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   148,
     152,   153,   154,   156,   160,   165,   171,   172,   173,   174,
     175,   176,   180,   195,   208,   217,   221,   225,   229,   230,
     231,   235,   236,   240,   241,   245,   246,   250,   251,   255,
     256,   257,   261,   262,   263,   264,   265,   269,   273,   278,
     282,   288,   295,   297,   301,   302,   306,   307,   308,   309,
     310,   311,   315,   316,   320,   321,   325,   327,   332,   336,
     343,   347,   348,   352,   356,   360,   364,   365,   366,   367,
     371,   380,   381,   382,   386,   387,   388,   393,   394,   398,
     399,   400,   401,   402
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TK_LIT_INT",
  "TK_LIT_FLOAT", "TK_LIT_FALSE", "TK_LIT_TRUE", "TK_LIT_CHAR",
  "TK_LIT_STRING", "TK_IDENTIFICADOR", "TK_PR_INT", "TK_PR_FLOAT",
  "TK_PR_BOOL", "TK_PR_STRING", "TK_PR_CHAR", "TK_PR_IF", "TK_PR_THEN",
  "TK_PR_ELSE", "TK_PR_WHILE", "TK_PR_DO", "TK_PR_INPUT", "TK_PR_OUTPUT",
  "TK_PR_RETURN", "TK_PR_CONST", "TK_PR_STATIC", "TK_PR_FOREACH",
  "TK_PR_FOR", "TK_PR_SWITCH", "TK_PR_CASE", "TK_PR_BREAK",
  "TK_PR_CONTINUE", "TK_PR_CLASS", "TK_PR_PRIVATE", "TK_PR_PUBLIC",
  "TK_PR_PROTECTED", "TK_PR_END", "TK_PR_DEFAULT", "TK_OC_LE", "TK_OC_GE",
  "TK_OC_EQ", "TK_OC_NE", "TK_OC_AND", "TK_OC_OR", "TK_OC_SL", "TK_OC_SR",
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

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-105)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-29)

#define yytable_value_is_error(Yyn) \
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
static const yytype_int8 yydefact[] =
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
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,     5,    51,    30,    74,     7,     8,
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

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
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

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
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

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
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


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* start: program  */
#line 51 "parser.y"
              {arvore = (yyvsp[0].ast);}
#line 1352 "parser.tab.c"
    break;

  case 3: /* program: declaration program  */
#line 54 "parser.y"
                          {(yyval.ast) = (yyvsp[-1].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1358 "parser.tab.c"
    break;

  case 4: /* program: %empty  */
#line 55 "parser.y"
                          {(yyval.ast) = NULL;}
#line 1364 "parser.tab.c"
    break;

  case 5: /* declaration: function  */
#line 59 "parser.y"
                          {(yyval.ast) = (yyvsp[0].ast);
                          }
#line 1371 "parser.tab.c"
    break;

  case 6: /* declaration: global_variable  */
#line 61 "parser.y"
                          {(yyval.ast) = NULL;}
#line 1377 "parser.tab.c"
    break;

  case 7: /* global_variable: static type id '[' TK_LIT_INT ']' global_fotter ';'  */
#line 65 "parser.y"
                                                                      {declare_variable(top, (yyvsp[-3].valor_lexico).lv.v.vi, (yyvsp[-6].valor_lexico).t_type,
                                                                       TYPE_VEC, (yyvsp[-5].ast)->data.line, (yyvsp[-5].ast)->data.lv.v, (yyvsp[-5].ast)->data.lexeme);}
#line 1384 "parser.tab.c"
    break;

  case 8: /* global_variable: static type id global_fotter ';'  */
#line 67 "parser.y"
                                                                      {declare_variable(top, 1, (yyvsp[-3].valor_lexico).t_type, TYPE_VAR, (yyvsp[-2].ast)->data.line,
                                                                       (yyvsp[-2].ast)->data.lv.v, (yyvsp[-2].ast)->data.lexeme);}
#line 1391 "parser.tab.c"
    break;

  case 9: /* global_fotter: ',' id '[' TK_LIT_INT ']' global_fotter  */
#line 72 "parser.y"
                                                          {declare_variable(top, (yyvsp[-2].valor_lexico).lv.v.vi, TYPE_UNKNOWN,
                                                           TYPE_VEC, (yyvsp[-4].ast)->data.line, (yyvsp[-4].ast)->data.lv.v, (yyvsp[-4].ast)->data.lexeme);}
#line 1398 "parser.tab.c"
    break;

  case 10: /* global_fotter: ',' id global_fotter  */
#line 74 "parser.y"
                                                          {declare_variable(top, 1, TYPE_UNKNOWN, TYPE_VAR, (yyvsp[-1].ast)->data.line,
                                                           (yyvsp[-1].ast)->data.lv.v, (yyvsp[-1].ast)->data.lexeme);}
#line 1405 "parser.tab.c"
    break;

  case 11: /* global_fotter: %empty  */
#line 76 "parser.y"
                                                          {(yyval.ast) = NULL;}
#line 1411 "parser.tab.c"
    break;

  case 12: /* static: TK_PR_STATIC  */
#line 80 "parser.y"
                          {(yyval.ast) = NULL;}
#line 1417 "parser.tab.c"
    break;

  case 13: /* static: %empty  */
#line 81 "parser.y"
                          {(yyval.ast) = NULL;}
#line 1423 "parser.tab.c"
    break;

  case 14: /* id: TK_IDENTIFICADOR  */
#line 85 "parser.y"
                          {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1429 "parser.tab.c"
    break;

  case 15: /* function: func_header command_block  */
#line 89 "parser.y"
                                {(yyval.ast) = (yyvsp[-1].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1435 "parser.tab.c"
    break;

  case 16: /* func_header: static type id list  */
#line 93 "parser.y"
                                {(yyval.ast) = (yyvsp[-1].ast);
                                 declare_function(top, 1, (yyvsp[-2].valor_lexico).t_type, TYPE_FUNC,
                                    (yyvsp[-1].ast)->data.line, (yyvsp[-1].ast)->data.lv.v, (yyvsp[-1].ast)->data.lexeme);
                                 }
#line 1444 "parser.tab.c"
    break;

  case 17: /* list: '(' parameters ')'  */
#line 100 "parser.y"
                                {(yyval.ast) = NULL;}
#line 1450 "parser.tab.c"
    break;

  case 18: /* list: '(' ')'  */
#line 101 "parser.y"
                                {(yyval.ast) = NULL;}
#line 1456 "parser.tab.c"
    break;

  case 19: /* parameters: parameters ',' const type id  */
#line 105 "parser.y"
                                    {(yyval.ast) = NULL; libera((yyvsp[0].ast));}
#line 1462 "parser.tab.c"
    break;

  case 20: /* parameters: const type id  */
#line 106 "parser.y"
                                    {(yyval.ast) = NULL; libera((yyvsp[0].ast));}
#line 1468 "parser.tab.c"
    break;

  case 21: /* const: TK_PR_CONST  */
#line 110 "parser.y"
                                  {(yyval.ast) = NULL;}
#line 1474 "parser.tab.c"
    break;

  case 22: /* const: %empty  */
#line 111 "parser.y"
                                  {(yyval.ast) = NULL;}
#line 1480 "parser.tab.c"
    break;

  case 23: /* command_block: open_command command close_command  */
#line 115 "parser.y"
                                         {(yyval.ast) = (yyvsp[-1].ast);
    }
#line 1487 "parser.tab.c"
    break;

  case 24: /* open_command: '{'  */
#line 120 "parser.y"
          {push_new_table(&top);}
#line 1493 "parser.tab.c"
    break;

  case 25: /* close_command: '}'  */
#line 124 "parser.y"
          {pop(&top);}
#line 1499 "parser.tab.c"
    break;

  case 26: /* command: simple_command ';' command  */
#line 128 "parser.y"
                                  {(yyval.ast) = (yyvsp[-2].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1505 "parser.tab.c"
    break;

  case 27: /* command: flux_control ';' command  */
#line 130 "parser.y"
                                  {(yyval.ast) = (yyvsp[-2].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1511 "parser.tab.c"
    break;

  case 28: /* command: %empty  */
#line 131 "parser.y"
                                  {(yyval.ast) = NULL;}
#line 1517 "parser.tab.c"
    break;

  case 29: /* simple_command: local_variable  */
#line 135 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1523 "parser.tab.c"
    break;

  case 30: /* simple_command: attribution  */
#line 136 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1529 "parser.tab.c"
    break;

  case 31: /* simple_command: input  */
#line 137 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1535 "parser.tab.c"
    break;

  case 32: /* simple_command: output  */
#line 138 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1541 "parser.tab.c"
    break;

  case 33: /* simple_command: return  */
#line 139 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1547 "parser.tab.c"
    break;

  case 34: /* simple_command: command_block  */
#line 140 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1553 "parser.tab.c"
    break;

  case 35: /* simple_command: shift  */
#line 141 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1559 "parser.tab.c"
    break;

  case 36: /* simple_command: break  */
#line 142 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1565 "parser.tab.c"
    break;

  case 37: /* simple_command: continue  */
#line 143 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1571 "parser.tab.c"
    break;

  case 38: /* simple_command: func_call  */
#line 144 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1577 "parser.tab.c"
    break;

  case 39: /* local_variable: static const type id_list  */
#line 148 "parser.y"
                                {(yyval.ast) = (yyvsp[0].ast);}
#line 1583 "parser.tab.c"
    break;

  case 40: /* id_list: assignment  */
#line 152 "parser.y"
                              {(yyval.ast) = (yyvsp[0].ast);}
#line 1589 "parser.tab.c"
    break;

  case 41: /* id_list: id_list ',' assignment  */
#line 153 "parser.y"
                              {(yyval.ast) = (yyvsp[-2].ast);  (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1595 "parser.tab.c"
    break;

  case 42: /* id_list: id_list ',' id  */
#line 154 "parser.y"
                              {(yyval.ast) = (yyvsp[-2].ast);
                               declare_variable(top, 1, TYPE_UNKNOWN, TYPE_VAR, (yyvsp[0].ast)->data.line, (yyvsp[0].ast)->data.lv.v, (yyvsp[0].ast)->data.lexeme); libera((yyvsp[0].ast));}
#line 1602 "parser.tab.c"
    break;

  case 43: /* id_list: id  */
#line 156 "parser.y"
                              {declare_variable(top, 1, TYPE_UNKNOWN, TYPE_VAR, (yyvsp[0].ast)->data.line, (yyvsp[0].ast)->data.lv.v, (yyvsp[0].ast)->data.lexeme);}
#line 1608 "parser.tab.c"
    break;

  case 44: /* assignment: id TK_OC_LE id  */
#line 160 "parser.y"
                             {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico));
                              (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));
                              (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));
                              }
#line 1617 "parser.tab.c"
    break;

  case 45: /* assignment: id TK_OC_LE literal  */
#line 165 "parser.y"
                             {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico));
                              (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));
                              (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1625 "parser.tab.c"
    break;

  case 46: /* literal: TK_LIT_INT  */
#line 171 "parser.y"
                    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico)); }
#line 1631 "parser.tab.c"
    break;

  case 47: /* literal: TK_LIT_FLOAT  */
#line 172 "parser.y"
                    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico)); }
#line 1637 "parser.tab.c"
    break;

  case 48: /* literal: TK_LIT_FALSE  */
#line 173 "parser.y"
                    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico)); }
#line 1643 "parser.tab.c"
    break;

  case 49: /* literal: TK_LIT_TRUE  */
#line 174 "parser.y"
                    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico)); }
#line 1649 "parser.tab.c"
    break;

  case 50: /* literal: TK_LIT_CHAR  */
#line 175 "parser.y"
                    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico)); }
#line 1655 "parser.tab.c"
    break;

  case 51: /* literal: TK_LIT_STRING  */
#line 176 "parser.y"
                    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico)); }
#line 1661 "parser.tab.c"
    break;

  case 52: /* attribution: id '=' expr  */
#line 180 "parser.y"
                                 {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico));
                                  (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));
                                  (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));
                                  symbol var_left = create_symbol(1, TYPE_UNKNOWN, TYPE_VAR, (yyvsp[-2].ast)->data.line,
                                                                        (yyvsp[-2].ast)->data.lv.v, (yyvsp[-2].ast)->data.lexeme);
                                  symbol var_right = create_symbol(1, TYPE_UNKNOWN, TYPE_VAR, (yyvsp[0].ast)->data.line,
                                                                (yyvsp[0].ast)->data.lv.v, (yyvsp[0].ast)->data.lexeme);
                                  assign_variable(top, &var_left, &var_right);

                                      // Concatenate
                                      (yyval.ast)->temp = create_register();
                                      code_line new_code_line = create_code_line((yyvsp[0].ast)->temp, 0, (yyval.ast)->temp, STORE);
                                      insert_code(&((yyval.ast)->code_list), new_code_line);
                                  }
#line 1680 "parser.tab.c"
    break;

  case 53: /* attribution: vector_attribution '=' expr  */
#line 195 "parser.y"
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
#line 1695 "parser.tab.c"
    break;

  case 54: /* vector_attribution: id '[' expr ']'  */
#line 208 "parser.y"
                                  { (yyval.ast) = insert_leaf((yyvsp[-2].valor_lexico));
                                    (yyval.ast)->data.lv.v.vs = "[]";
                                    (yyval.ast)->data.token_t = COMPOSE_OP;
                                    (yyval.ast) = insert_child((yyval.ast), (yyvsp[-3].ast));
                                    (yyval.ast) = insert_child((yyval.ast), (yyvsp[-1].ast));}
#line 1705 "parser.tab.c"
    break;

  case 55: /* expr: ternary  */
#line 217 "parser.y"
                    {(yyval.ast) = (yyvsp[0].ast);}
#line 1711 "parser.tab.c"
    break;

  case 56: /* ternary: unary_minus '?' unary_minus ':' ternary  */
#line 221 "parser.y"
                                             {(yyval.ast) = insert_leaf((yyvsp[-3].valor_lexico)); (yyval.ast)->data.lv.v.vs = "?:";
                                              (yyval.ast)->data.token_t = COMPOSE_OP;
                                              (yyval.ast) = insert_child((yyval.ast), (yyvsp[-4].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));
                                              (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1720 "parser.tab.c"
    break;

  case 57: /* ternary: unary_minus  */
#line 225 "parser.y"
                                             {(yyval.ast) = (yyvsp[0].ast);}
#line 1726 "parser.tab.c"
    break;

  case 58: /* unary_minus: '+' unary_minus  */
#line 229 "parser.y"
                                 {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1732 "parser.tab.c"
    break;

  case 59: /* unary_minus: '-' unary_minus  */
#line 230 "parser.y"
                                 {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1738 "parser.tab.c"
    break;

  case 60: /* unary_minus: or  */
#line 231 "parser.y"
                                 {(yyval.ast) = (yyvsp[0].ast);}
#line 1744 "parser.tab.c"
    break;

  case 61: /* or: or TK_OC_OR and  */
#line 235 "parser.y"
                                 {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1750 "parser.tab.c"
    break;

  case 62: /* or: and  */
#line 236 "parser.y"
                                 {(yyval.ast) = (yyvsp[0].ast);}
#line 1756 "parser.tab.c"
    break;

  case 63: /* and: and TK_OC_AND or_log  */
#line 240 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1762 "parser.tab.c"
    break;

  case 64: /* and: or_log  */
#line 241 "parser.y"
                           {(yyval.ast) = (yyvsp[0].ast);}
#line 1768 "parser.tab.c"
    break;

  case 65: /* or_log: or_log '|' and_log  */
#line 245 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1774 "parser.tab.c"
    break;

  case 66: /* or_log: and_log  */
#line 246 "parser.y"
                           {(yyval.ast) =  (yyvsp[0].ast);}
#line 1780 "parser.tab.c"
    break;

  case 67: /* and_log: and_log '&' equal  */
#line 250 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1786 "parser.tab.c"
    break;

  case 68: /* and_log: equal  */
#line 251 "parser.y"
                           {(yyval.ast) = (yyvsp[0].ast);}
#line 1792 "parser.tab.c"
    break;

  case 69: /* equal: equal TK_OC_EQ rel  */
#line 255 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1798 "parser.tab.c"
    break;

  case 70: /* equal: equal TK_OC_NE rel  */
#line 256 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1804 "parser.tab.c"
    break;

  case 71: /* equal: rel  */
#line 257 "parser.y"
                           {(yyval.ast) = (yyvsp[0].ast);}
#line 1810 "parser.tab.c"
    break;

  case 72: /* rel: rel TK_OC_LE soma_sub  */
#line 261 "parser.y"
                            {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1816 "parser.tab.c"
    break;

  case 73: /* rel: rel TK_OC_GE soma_sub  */
#line 262 "parser.y"
                            {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1822 "parser.tab.c"
    break;

  case 74: /* rel: rel '>' soma_sub  */
#line 263 "parser.y"
                            {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1828 "parser.tab.c"
    break;

  case 75: /* rel: rel '<' soma_sub  */
#line 264 "parser.y"
                            {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1834 "parser.tab.c"
    break;

  case 76: /* rel: soma_sub  */
#line 265 "parser.y"
                            {(yyval.ast) = (yyvsp[0].ast);}
#line 1840 "parser.tab.c"
    break;

  case 77: /* soma_sub: soma_sub '+' mult_div  */
#line 269 "parser.y"
                            {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));
                             (yyval.ast)->temp = create_register();
                             code_line new_code_line = create_code_line((yyvsp[-2].ast)->temp, (yyvsp[0].ast)->temp, (yyval.ast)->temp, ADD);
                             insert_code(&((yyval.ast)->code_list), new_code_line);}
#line 1849 "parser.tab.c"
    break;

  case 78: /* soma_sub: soma_sub '-' mult_div  */
#line 273 "parser.y"
                            {
                                (yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));
                                (yyval.ast)->temp = create_register();
                                code_line new_code_line = create_code_line((yyvsp[-2].ast)->temp, (yyvsp[0].ast)->temp, (yyval.ast)->temp, SUB);
                                insert_code(&((yyval.ast)->code_list), new_code_line);}
#line 1859 "parser.tab.c"
    break;

  case 79: /* soma_sub: mult_div  */
#line 278 "parser.y"
                            {(yyval.ast) = (yyvsp[0].ast);}
#line 1865 "parser.tab.c"
    break;

  case 80: /* mult_div: mult_div '*' unary  */
#line 282 "parser.y"
                            {
                                (yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));
                                (yyval.ast)->temp = create_register();
                                code_line new_code_line = create_code_line((yyvsp[-2].ast)->temp, (yyvsp[0].ast)->temp, (yyval.ast)->temp, MULT);
                                insert_code(&((yyval.ast)->code_list), new_code_line);
                             }
#line 1876 "parser.tab.c"
    break;

  case 81: /* mult_div: mult_div '/' unary  */
#line 288 "parser.y"
                            {
                                (yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));
                                (yyval.ast)->temp = create_register();
                                code_line new_code_line = create_code_line((yyvsp[-2].ast)->temp, (yyvsp[0].ast)->temp, (yyval.ast)->temp, DIV);
                                insert_code(&((yyval.ast)->code_list), new_code_line);
                             }
#line 1887 "parser.tab.c"
    break;

  case 82: /* mult_div: mult_div '%' unary  */
#line 295 "parser.y"
                            {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1893 "parser.tab.c"
    break;

  case 83: /* mult_div: exponential  */
#line 297 "parser.y"
                            {(yyval.ast) = (yyvsp[0].ast);}
#line 1899 "parser.tab.c"
    break;

  case 84: /* exponential: exponential '^' unary  */
#line 301 "parser.y"
                            {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1905 "parser.tab.c"
    break;

  case 85: /* exponential: unary  */
#line 302 "parser.y"
                            {(yyval.ast) = (yyvsp[0].ast);}
#line 1911 "parser.tab.c"
    break;

  case 86: /* unary: '*' unary  */
#line 306 "parser.y"
                  {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1917 "parser.tab.c"
    break;

  case 87: /* unary: '&' unary  */
#line 307 "parser.y"
                  {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1923 "parser.tab.c"
    break;

  case 88: /* unary: '#' unary  */
#line 308 "parser.y"
                  {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1929 "parser.tab.c"
    break;

  case 89: /* unary: '?' unary  */
#line 309 "parser.y"
                  {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1935 "parser.tab.c"
    break;

  case 90: /* unary: '!' unary  */
#line 310 "parser.y"
                  {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1941 "parser.tab.c"
    break;

  case 91: /* unary: parenthesis  */
#line 311 "parser.y"
                  {(yyval.ast) = (yyvsp[0].ast);}
#line 1947 "parser.tab.c"
    break;

  case 92: /* parenthesis: '(' expr ')'  */
#line 315 "parser.y"
                   {(yyval.ast) = (yyvsp[-1].ast);}
#line 1953 "parser.tab.c"
    break;

  case 93: /* parenthesis: operand_arit  */
#line 316 "parser.y"
                   {(yyval.ast) = (yyvsp[0].ast);}
#line 1959 "parser.tab.c"
    break;

  case 94: /* flux_control: conditional  */
#line 320 "parser.y"
                   {(yyval.ast) = (yyvsp[0].ast);}
#line 1965 "parser.tab.c"
    break;

  case 95: /* flux_control: iterative  */
#line 321 "parser.y"
                   {(yyval.ast) = (yyvsp[0].ast);}
#line 1971 "parser.tab.c"
    break;

  case 96: /* conditional: TK_PR_IF '(' expr ')' command_block  */
#line 325 "parser.y"
                                          {(yyval.ast) = insert_leaf((yyvsp[-4].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1977 "parser.tab.c"
    break;

  case 97: /* conditional: TK_PR_IF '(' expr ')' command_block TK_PR_ELSE command_block  */
#line 327 "parser.y"
                                                                   { (yyval.ast) = insert_leaf((yyvsp[-6].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-4].ast));
                                                                        (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1984 "parser.tab.c"
    break;

  case 98: /* iterative: TK_PR_FOR '(' attribution ':' expr ':' attribution ')' command_block  */
#line 332 "parser.y"
                                                                           {
        (yyval.ast) = insert_leaf((yyvsp[-8].valor_lexico));
        (yyval.ast) = insert_child((yyval.ast), (yyvsp[-6].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-4].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));
        (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1993 "parser.tab.c"
    break;

  case 99: /* iterative: TK_PR_WHILE '(' expr ')' TK_PR_DO command_block  */
#line 336 "parser.y"
                                                      {
        (yyval.ast) = insert_leaf((yyvsp[-5].valor_lexico));
        (yyval.ast) = insert_child((yyval.ast), (yyvsp[-3].ast));
        (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 2002 "parser.tab.c"
    break;

  case 100: /* input: TK_PR_INPUT id  */
#line 343 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 2008 "parser.tab.c"
    break;

  case 101: /* output: TK_PR_OUTPUT id  */
#line 347 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 2014 "parser.tab.c"
    break;

  case 102: /* output: TK_PR_OUTPUT literal  */
#line 348 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child ((yyval.ast), (yyvsp[0].ast));}
#line 2020 "parser.tab.c"
    break;

  case 103: /* return: TK_PR_RETURN expr  */
#line 352 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 2026 "parser.tab.c"
    break;

  case 104: /* break: TK_PR_BREAK  */
#line 356 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 2032 "parser.tab.c"
    break;

  case 105: /* continue: TK_PR_CONTINUE  */
#line 360 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 2038 "parser.tab.c"
    break;

  case 106: /* shift: id TK_OC_SL TK_LIT_INT  */
#line 364 "parser.y"
                              {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), insert_leaf((yyvsp[0].valor_lexico)));}
#line 2044 "parser.tab.c"
    break;

  case 107: /* shift: id TK_OC_SR TK_LIT_INT  */
#line 365 "parser.y"
                              {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), insert_leaf((yyvsp[0].valor_lexico)));}
#line 2050 "parser.tab.c"
    break;

  case 108: /* shift: vector_attribution TK_OC_SL TK_LIT_INT  */
#line 366 "parser.y"
                                              {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), insert_leaf((yyvsp[0].valor_lexico)));}
#line 2056 "parser.tab.c"
    break;

  case 109: /* shift: vector_attribution TK_OC_SR TK_LIT_INT  */
#line 367 "parser.y"
                                              {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), insert_leaf((yyvsp[0].valor_lexico)));}
#line 2062 "parser.tab.c"
    break;

  case 110: /* func_call: id '(' args ')'  */
#line 371 "parser.y"
                      {(yyval.ast) = (yyvsp[-3].ast);
                       (yyval.ast)->data.lv.v.vs = prepend((yyval.ast)->data.lv.v.vs, "call ");
                       (yyval.ast) = insert_child((yyval.ast), (yyvsp[-1].ast));
                       symbol func_name = create_symbol(1, TYPE_UNKNOWN, TYPE_VAR, (yyvsp[-3].ast)->data.line,
                                                        (yyvsp[-3].ast)->data.lv.v, (yyvsp[-3].ast)->data.lexeme);
                       call_function(top, &func_name);}
#line 2073 "parser.tab.c"
    break;

  case 111: /* args: expr ',' args  */
#line 380 "parser.y"
                     {(yyval.ast) = (yyvsp[-2].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 2079 "parser.tab.c"
    break;

  case 112: /* args: expr  */
#line 381 "parser.y"
                     {(yyval.ast) = (yyvsp[0].ast);}
#line 2085 "parser.tab.c"
    break;

  case 113: /* args: %empty  */
#line 382 "parser.y"
                     {(yyval.ast) = NULL;}
#line 2091 "parser.tab.c"
    break;

  case 114: /* operand_arit: vector_attribution  */
#line 386 "parser.y"
                         { (yyval.ast) = (yyvsp[0].ast);}
#line 2097 "parser.tab.c"
    break;

  case 115: /* operand_arit: id  */
#line 387 "parser.y"
                         { (yyval.ast) = (yyvsp[0].ast);}
#line 2103 "parser.tab.c"
    break;

  case 116: /* operand_arit: TK_LIT_INT  */
#line 388 "parser.y"
                         { (yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));
                           (yyval.ast)->temp = create_register();
                           code_line new_code_line = create_code_line((yyvsp[0].valor_lexico).lv.v.vi, 0, (yyval.ast)->temp, LOADI);
                           insert_code(&((yyval.ast)->code_list), new_code_line);
                         }
#line 2113 "parser.tab.c"
    break;

  case 117: /* operand_arit: TK_LIT_FLOAT  */
#line 393 "parser.y"
                         { (yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 2119 "parser.tab.c"
    break;

  case 118: /* operand_arit: func_call  */
#line 394 "parser.y"
                         { (yyval.ast) = (yyvsp[0].ast);}
#line 2125 "parser.tab.c"
    break;

  case 119: /* type: TK_PR_INT  */
#line 398 "parser.y"
                    {(yyval.valor_lexico) = (yyvsp[0].valor_lexico);}
#line 2131 "parser.tab.c"
    break;

  case 120: /* type: TK_PR_FLOAT  */
#line 399 "parser.y"
                    {(yyval.valor_lexico) = (yyvsp[0].valor_lexico);}
#line 2137 "parser.tab.c"
    break;

  case 121: /* type: TK_PR_BOOL  */
#line 400 "parser.y"
                    {(yyval.valor_lexico) = (yyvsp[0].valor_lexico);}
#line 2143 "parser.tab.c"
    break;

  case 122: /* type: TK_PR_CHAR  */
#line 401 "parser.y"
                    {(yyval.valor_lexico) = (yyvsp[0].valor_lexico);}
#line 2149 "parser.tab.c"
    break;

  case 123: /* type: TK_PR_STRING  */
#line 402 "parser.y"
                    {(yyval.valor_lexico) = (yyvsp[0].valor_lexico);}
#line 2155 "parser.tab.c"
    break;


#line 2159 "parser.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 404 "parser.y"

