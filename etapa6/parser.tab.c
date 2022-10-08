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
  YYSYMBOL_if = 111,                       /* if  */
  YYSYMBOL_112_1 = 112,                    /* @1  */
  YYSYMBOL_iterative = 113,                /* iterative  */
  YYSYMBOL_input = 114,                    /* input  */
  YYSYMBOL_output = 115,                   /* output  */
  YYSYMBOL_return = 116,                   /* return  */
  YYSYMBOL_break = 117,                    /* break  */
  YYSYMBOL_continue = 118,                 /* continue  */
  YYSYMBOL_shift = 119,                    /* shift  */
  YYSYMBOL_func_call = 120,                /* func_call  */
  YYSYMBOL_args = 121,                     /* args  */
  YYSYMBOL_operand_arit = 122,             /* operand_arit  */
  YYSYMBOL_type = 123                      /* type  */
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
#define YYLAST   208

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  53
/* YYNRULES -- Number of rules.  */
#define YYNRULES  125
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  218

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
       0,    52,    52,    55,    56,    60,    61,    65,    67,    72,
      74,    76,    80,    81,    85,    89,    93,   100,   101,   105,
     106,   110,   111,   115,   119,   123,   127,   129,   130,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   147,
     151,   152,   153,   155,   159,   164,   170,   171,   172,   173,
     174,   175,   179,   201,   215,   224,   228,   232,   236,   237,
     238,   242,   247,   251,   256,   260,   261,   265,   266,   270,
     275,   280,   284,   289,   294,   299,   303,   307,   311,   316,
     320,   326,   333,   335,   339,   340,   344,   345,   346,   347,
     348,   349,   353,   354,   358,   359,   364,   365,   373,   373,
     388,   392,   399,   403,   404,   408,   412,   416,   420,   421,
     422,   423,   427,   436,   437,   438,   442,   443,   457,   462,
     463,   467,   468,   469,   470,   471
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
  "if", "@1", "iterative", "input", "output", "return", "break",
  "continue", "shift", "func_call", "args", "operand_arit", "type", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-109)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-29)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      19,  -109,    16,  -109,    19,  -109,   141,  -109,    29,  -109,
    -109,  -109,  -109,  -109,  -109,  -109,    42,  -109,  -109,   107,
    -109,     0,    35,    44,    42,   136,     8,    45,  -109,  -109,
      50,    77,  -109,    15,    21,  -109,  -109,   -11,    27,  -109,
      82,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,   -15,
      98,    42,    40,  -109,     8,     8,  -109,  -109,  -109,  -109,
    -109,  -109,  -109,  -109,  -109,  -109,  -109,     8,     8,     8,
      55,    55,    55,    55,    55,    22,  -109,  -109,  -109,    57,
      70,    72,    66,    68,    17,   -13,    26,   -28,    67,  -109,
    -109,  -109,  -109,    42,  -109,   141,   131,   153,     8,     8,
       8,  -109,  -109,   107,   157,   158,     8,   107,    29,  -109,
     -33,   141,   114,   -23,  -109,   117,   118,   119,  -109,  -109,
    -109,  -109,  -109,  -109,  -109,     8,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,     5,    97,   106,    42,  -109,  -109,   101,   123,
     122,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,    50,
      42,   104,   169,  -109,  -109,   154,  -109,   105,    72,    66,
      68,    17,   -13,   -13,    26,    26,    26,    26,   -28,   -28,
    -109,  -109,  -109,  -109,     8,   138,   109,  -109,     8,  -109,
    -109,   141,  -109,   110,   129,    29,    29,     8,   111,   136,
      42,  -109,    42,  -109,   104,  -109,  -109,  -109,    42,  -109,
    -109,   138,  -109,  -109,  -109,   133,    29,  -109
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      13,    12,     0,     2,    13,     6,     0,     5,     0,     1,
       3,   121,   122,   123,   125,   124,     0,    24,    15,    13,
      14,    11,     0,     0,     0,     0,     0,     0,   106,   107,
      22,     0,    34,     0,     0,    29,    30,     0,     0,    94,
      96,    95,    31,    32,    33,    36,    37,    35,    38,    22,
       0,     0,     0,    16,     0,     0,   102,    46,    47,    48,
      49,    50,    51,   103,   104,   118,   119,     0,     0,     0,
       0,     0,     0,     0,     0,   117,   116,   105,    55,    57,
      60,    62,    64,    66,    68,    71,    76,    79,    83,    85,
      91,   120,    93,     0,    21,     0,     0,     0,   115,     0,
       0,    25,    23,    13,     0,     0,     0,    13,     0,    18,
       0,     0,     0,    11,     8,     0,     0,     0,    59,    58,
      89,    86,    90,    87,    88,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   108,   109,   114,     0,
       0,    52,    26,   110,   111,    53,    27,    97,    17,    22,
       0,    11,     0,    10,    98,     0,    92,     0,    61,    63,
      65,    67,    69,    70,    72,    73,    74,    75,    78,    77,
      80,    81,    82,    84,     0,    43,    39,    40,   115,   112,
      54,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,   113,     0,     7,    11,    99,   101,    56,     0,    44,
      45,    42,    41,    19,     9,     0,     0,   100
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -109,  -109,   177,  -109,  -109,  -108,    18,   -10,  -109,  -109,
    -109,  -109,   -45,    -8,  -109,  -109,   -55,  -109,  -109,  -109,
     -18,   -16,   -90,   -17,   -25,   -12,   -48,  -109,    58,    59,
      65,    71,   -46,    14,   -49,  -109,   -34,  -109,  -109,  -109,
    -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,  -109,    -9,
       6,  -109,   -88
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,     5,    52,    30,    75,     7,     8,
      53,   110,    95,    32,    19,   102,    33,    34,    35,   186,
     187,    64,    36,    76,   148,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    38,    39,
      40,   195,    41,    42,    43,    44,    45,    46,    47,    91,
     149,    92,    16
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      18,    77,    37,   143,   111,   163,    21,   145,    94,    31,
      48,    65,    66,   158,    56,    63,     9,    20,     6,    -4,
     118,   119,     6,   160,   132,   133,   162,   138,   139,   115,
     116,   109,   104,   105,   159,   140,   120,   121,   122,   123,
     124,   113,   117,     1,    51,   134,   135,    49,   152,    50,
     106,    20,   156,   193,    99,    67,   130,   131,    65,    66,
      68,    69,    70,    71,    20,   101,   100,    51,    72,    98,
      73,    99,    74,    94,   150,   151,   144,   167,   136,   137,
      17,   155,    54,   142,   172,   173,    37,   178,   179,   103,
      37,    55,    93,    31,    48,   107,   214,    31,    48,   108,
     157,   112,    67,   202,   180,   181,   182,   183,   114,    70,
      71,   125,   126,   127,   191,    72,    20,    73,   215,    74,
      96,    97,    22,   128,    98,    23,    99,    24,    25,    26,
     129,     1,   141,    27,   146,   185,    28,    29,   100,    57,
      58,    59,    60,    61,    62,    20,   174,   175,   176,   177,
     192,    11,    12,    13,    14,    15,   147,   -28,    17,   198,
     153,   154,   161,   164,   165,   166,   184,   106,   188,   189,
     190,    51,   194,   196,   197,   199,   200,   204,   203,   216,
     208,    10,   212,   210,   168,   207,   169,   205,   206,   209,
     211,   144,   213,   170,   201,     0,     0,     0,   142,     0,
     171,     0,     0,     0,     0,     0,     0,     0,   217
};

static const yytype_int16 yycheck[] =
{
       8,    26,    19,    93,    49,   113,    16,    95,    23,    19,
      19,     3,     4,    46,    24,    25,     0,     9,     0,     0,
      68,    69,     4,   111,    37,    38,    49,    55,    56,    54,
      55,    46,    43,    44,    67,    63,    70,    71,    72,    73,
      74,    51,    67,    24,    67,    58,    59,    47,   103,    49,
      61,     9,   107,   161,    49,    47,    39,    40,     3,     4,
      52,    53,    54,    55,     9,    50,    61,    67,    60,    47,
      62,    49,    64,    23,    99,   100,    93,   125,    52,    53,
      51,   106,    47,    93,   130,   131,   103,   136,   137,    68,
     107,    47,    47,   103,   103,    68,   204,   107,   107,    17,
     108,     3,    47,   191,   138,   139,   140,   141,    68,    54,
      55,    54,    42,    41,   159,    60,     9,    62,   208,    64,
      43,    44,    15,    57,    47,    18,    49,    20,    21,    22,
      62,    24,    65,    26,     3,   145,    29,    30,    61,     3,
       4,     5,     6,     7,     8,     9,   132,   133,   134,   135,
     160,    10,    11,    12,    13,    14,     3,    50,    51,   184,
       3,     3,    48,    46,    46,    46,    69,    61,    67,    46,
      48,    67,     3,    19,    69,    37,    67,    48,    68,    46,
      69,     4,   200,   199,   126,   197,   127,   195,   196,   199,
     200,   208,   202,   128,   188,    -1,    -1,    -1,   208,    -1,
     129,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   216
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    24,    72,    73,    74,    75,    77,    79,    80,     0,
      73,    10,    11,    12,    13,    14,   123,    51,    84,    85,
       9,    78,    15,    18,    20,    21,    22,    26,    29,    30,
      77,    78,    84,    87,    88,    89,    93,    94,   109,   110,
     111,   113,   114,   115,   116,   117,   118,   119,   120,    47,
      49,    67,    76,    81,    47,    47,    78,     3,     4,     5,
       6,     7,     8,    78,    92,     3,     4,    47,    52,    53,
      54,    55,    60,    62,    64,    78,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   120,   122,    47,    23,    83,    43,    44,    47,    49,
      61,    50,    86,    68,    43,    44,    61,    68,    17,    46,
      82,    83,     3,    78,    68,    95,    95,    95,    97,    97,
     107,   107,   107,   107,   107,    54,    42,    41,    57,    62,
      39,    40,    37,    38,    58,    59,    52,    53,    55,    56,
      63,    65,    78,    93,    94,   123,     3,     3,    95,   121,
      95,    95,    87,     3,     3,    95,    87,    84,    46,    67,
     123,    48,    49,    76,    46,    46,    46,    97,    99,   100,
     101,   102,   103,   103,   104,   104,   104,   104,   105,   105,
     107,   107,   107,   107,    69,    78,    90,    91,    67,    46,
      48,    83,    78,    76,     3,   112,    19,    69,    95,    37,
      67,   121,   123,    68,    48,    84,    84,    96,    69,    78,
      92,    78,    91,    78,    76,    93,    46,    84
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
     107,   107,   108,   108,   109,   109,   110,   110,   112,   111,
     113,   113,   114,   115,   115,   116,   117,   118,   119,   119,
     119,   119,   120,   121,   121,   121,   122,   122,   122,   122,
     122,   123,   123,   123,   123,   123
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
       2,     1,     3,     1,     1,     1,     1,     3,     0,     6,
       9,     6,     2,     2,     2,     2,     1,     1,     3,     3,
       3,     3,     4,     3,     1,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1
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
#line 52 "parser.y"
              {arvore = (yyvsp[0].ast);}
#line 1354 "parser.tab.c"
    break;

  case 3: /* program: declaration program  */
#line 55 "parser.y"
                          {(yyval.ast) = (yyvsp[-1].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1360 "parser.tab.c"
    break;

  case 4: /* program: %empty  */
#line 56 "parser.y"
                          {(yyval.ast) = NULL;}
#line 1366 "parser.tab.c"
    break;

  case 5: /* declaration: function  */
#line 60 "parser.y"
                          {(yyval.ast) = (yyvsp[0].ast);}
#line 1372 "parser.tab.c"
    break;

  case 6: /* declaration: global_variable  */
#line 61 "parser.y"
                          {(yyval.ast) = NULL;}
#line 1378 "parser.tab.c"
    break;

  case 7: /* global_variable: static type id '[' TK_LIT_INT ']' global_fotter ';'  */
#line 65 "parser.y"
                                                                      {declare_variable(top, (yyvsp[-3].valor_lexico).lv.v.vi, (yyvsp[-6].valor_lexico).t_type,
                                                                       TYPE_VEC, (yyvsp[-5].ast)->data.line, (yyvsp[-5].ast)->data.lv.v, (yyvsp[-5].ast)->data.lexeme);}
#line 1385 "parser.tab.c"
    break;

  case 8: /* global_variable: static type id global_fotter ';'  */
#line 67 "parser.y"
                                                                      {declare_variable(top, 1, (yyvsp[-3].valor_lexico).t_type, TYPE_GLOBAL_VAR, (yyvsp[-2].ast)->data.line,
                                                                       (yyvsp[-2].ast)->data.lv.v, (yyvsp[-2].ast)->data.lexeme); }
#line 1392 "parser.tab.c"
    break;

  case 9: /* global_fotter: ',' id '[' TK_LIT_INT ']' global_fotter  */
#line 72 "parser.y"
                                                          {declare_variable(top, (yyvsp[-2].valor_lexico).lv.v.vi, TYPE_UNKNOWN,
                                                           TYPE_VEC, (yyvsp[-4].ast)->data.line, (yyvsp[-4].ast)->data.lv.v, (yyvsp[-4].ast)->data.lexeme);}
#line 1399 "parser.tab.c"
    break;

  case 10: /* global_fotter: ',' id global_fotter  */
#line 74 "parser.y"
                                                          {declare_variable(top, 1, TYPE_UNKNOWN, TYPE_VAR, (yyvsp[-1].ast)->data.line,
                                                           (yyvsp[-1].ast)->data.lv.v, (yyvsp[-1].ast)->data.lexeme);}
#line 1406 "parser.tab.c"
    break;

  case 11: /* global_fotter: %empty  */
#line 76 "parser.y"
                                                          {(yyval.ast) = NULL;}
#line 1412 "parser.tab.c"
    break;

  case 12: /* static: TK_PR_STATIC  */
#line 80 "parser.y"
                          {(yyval.ast) = NULL;}
#line 1418 "parser.tab.c"
    break;

  case 13: /* static: %empty  */
#line 81 "parser.y"
                          {(yyval.ast) = NULL;}
#line 1424 "parser.tab.c"
    break;

  case 14: /* id: TK_IDENTIFICADOR  */
#line 85 "parser.y"
                          {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1430 "parser.tab.c"
    break;

  case 15: /* function: func_header command_block  */
#line 89 "parser.y"
                                {(yyval.ast) = (yyvsp[-1].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1436 "parser.tab.c"
    break;

  case 16: /* func_header: static type id list  */
#line 93 "parser.y"
                                {(yyval.ast) = (yyvsp[-1].ast);
                                 declare_function(top, 1, (yyvsp[-2].valor_lexico).t_type, TYPE_FUNC,
                                 (yyvsp[-1].ast)->data.line, (yyvsp[-1].ast)->data.lv.v, (yyvsp[-1].ast)->data.lexeme);
                                 }
#line 1445 "parser.tab.c"
    break;

  case 17: /* list: '(' parameters ')'  */
#line 100 "parser.y"
                                {(yyval.ast) = NULL;}
#line 1451 "parser.tab.c"
    break;

  case 18: /* list: '(' ')'  */
#line 101 "parser.y"
                                {(yyval.ast) = NULL;}
#line 1457 "parser.tab.c"
    break;

  case 19: /* parameters: parameters ',' const type id  */
#line 105 "parser.y"
                                    {(yyval.ast) = NULL; libera((yyvsp[0].ast));}
#line 1463 "parser.tab.c"
    break;

  case 20: /* parameters: const type id  */
#line 106 "parser.y"
                                    {(yyval.ast) = NULL; libera((yyvsp[0].ast));}
#line 1469 "parser.tab.c"
    break;

  case 21: /* const: TK_PR_CONST  */
#line 110 "parser.y"
                                  {(yyval.ast) = NULL;}
#line 1475 "parser.tab.c"
    break;

  case 22: /* const: %empty  */
#line 111 "parser.y"
                                  {(yyval.ast) = NULL;}
#line 1481 "parser.tab.c"
    break;

  case 23: /* command_block: open_command command close_command  */
#line 115 "parser.y"
                                         {(yyval.ast) = (yyvsp[-1].ast);}
#line 1487 "parser.tab.c"
    break;

  case 24: /* open_command: '{'  */
#line 119 "parser.y"
          {push_new_table(&top);}
#line 1493 "parser.tab.c"
    break;

  case 25: /* close_command: '}'  */
#line 123 "parser.y"
          {pop(&top);}
#line 1499 "parser.tab.c"
    break;

  case 26: /* command: simple_command ';' command  */
#line 127 "parser.y"
                                  {(yyval.ast) = (yyvsp[-2].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1505 "parser.tab.c"
    break;

  case 27: /* command: flux_control ';' command  */
#line 129 "parser.y"
                                  {(yyval.ast) = (yyvsp[-2].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1511 "parser.tab.c"
    break;

  case 28: /* command: %empty  */
#line 130 "parser.y"
                                  {(yyval.ast) = NULL;}
#line 1517 "parser.tab.c"
    break;

  case 29: /* simple_command: local_variable  */
#line 134 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1523 "parser.tab.c"
    break;

  case 30: /* simple_command: attribution  */
#line 135 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1529 "parser.tab.c"
    break;

  case 31: /* simple_command: input  */
#line 136 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1535 "parser.tab.c"
    break;

  case 32: /* simple_command: output  */
#line 137 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1541 "parser.tab.c"
    break;

  case 33: /* simple_command: return  */
#line 138 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1547 "parser.tab.c"
    break;

  case 34: /* simple_command: command_block  */
#line 139 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1553 "parser.tab.c"
    break;

  case 35: /* simple_command: shift  */
#line 140 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1559 "parser.tab.c"
    break;

  case 36: /* simple_command: break  */
#line 141 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1565 "parser.tab.c"
    break;

  case 37: /* simple_command: continue  */
#line 142 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1571 "parser.tab.c"
    break;

  case 38: /* simple_command: func_call  */
#line 143 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1577 "parser.tab.c"
    break;

  case 39: /* local_variable: static const type id_list  */
#line 147 "parser.y"
                                {(yyval.ast) = (yyvsp[0].ast);}
#line 1583 "parser.tab.c"
    break;

  case 40: /* id_list: assignment  */
#line 151 "parser.y"
                              {(yyval.ast) = (yyvsp[0].ast);}
#line 1589 "parser.tab.c"
    break;

  case 41: /* id_list: id_list ',' assignment  */
#line 152 "parser.y"
                              {(yyval.ast) = (yyvsp[-2].ast);  (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1595 "parser.tab.c"
    break;

  case 42: /* id_list: id_list ',' id  */
#line 153 "parser.y"
                              {(yyval.ast) = (yyvsp[-2].ast);
                               declare_variable(top, 1, TYPE_INT, TYPE_VAR, (yyvsp[0].ast)->data.line, (yyvsp[0].ast)->data.lv.v, (yyvsp[0].ast)->data.lexeme); libera((yyvsp[0].ast));}
#line 1602 "parser.tab.c"
    break;

  case 43: /* id_list: id  */
#line 155 "parser.y"
                              {declare_variable(top, 1, TYPE_INT, TYPE_VAR, (yyvsp[0].ast)->data.line, (yyvsp[0].ast)->data.lv.v, (yyvsp[0].ast)->data.lexeme);}
#line 1608 "parser.tab.c"
    break;

  case 44: /* assignment: id TK_OC_LE id  */
#line 159 "parser.y"
                             {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico));
                              (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));
                              (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));
                              }
#line 1617 "parser.tab.c"
    break;

  case 45: /* assignment: id TK_OC_LE literal  */
#line 164 "parser.y"
                             {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico));
                              (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));
                              (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1625 "parser.tab.c"
    break;

  case 46: /* literal: TK_LIT_INT  */
#line 170 "parser.y"
                    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico)); }
#line 1631 "parser.tab.c"
    break;

  case 47: /* literal: TK_LIT_FLOAT  */
#line 171 "parser.y"
                    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico)); }
#line 1637 "parser.tab.c"
    break;

  case 48: /* literal: TK_LIT_FALSE  */
#line 172 "parser.y"
                    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico)); }
#line 1643 "parser.tab.c"
    break;

  case 49: /* literal: TK_LIT_TRUE  */
#line 173 "parser.y"
                    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico)); }
#line 1649 "parser.tab.c"
    break;

  case 50: /* literal: TK_LIT_CHAR  */
#line 174 "parser.y"
                    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico)); }
#line 1655 "parser.tab.c"
    break;

  case 51: /* literal: TK_LIT_STRING  */
#line 175 "parser.y"
                    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico)); }
#line 1661 "parser.tab.c"
    break;

  case 52: /* attribution: id '=' expr  */
#line 179 "parser.y"
                                 {    (yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico));
                                      (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));
                                      (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));
                                      symbol var_left = create_symbol(1, TYPE_UNKNOWN, TYPE_VAR, (yyvsp[-2].ast)->data.line,
                                                                            (yyvsp[-2].ast)->data.lv.v, (yyvsp[-2].ast)->data.lexeme);
                                      symbol var_right = create_symbol(1, TYPE_UNKNOWN, TYPE_VAR, (yyvsp[0].ast)->data.line,
                                                                    (yyvsp[0].ast)->data.lv.v, (yyvsp[0].ast)->data.lexeme);
                                      symbol* variable = assign_variable(top, &var_left, &var_right);

                                      // Concatenate
                                      (yyval.ast)->temp = create_register();
                                      code_line new_code_line1 = create_code_line((yyvsp[0].ast)->temp, 0, (yyval.ast)->temp, I2I);
                                      code_line new_code_line2;
                                      if(variable->nat == TYPE_VAR)
                                          new_code_line2 = create_code_line((yyval.ast)->temp, 0, variable->address, STOREAIRFP);
                                      else if (variable->nat == TYPE_GLOBAL_VAR)
                                          new_code_line2 = create_code_line((yyval.ast)->temp, 0, variable->address, STOREAIRBSS);

                                      insert_code(&((yyval.ast)->code_list), new_code_line1);
                                      insert_code(&((yyval.ast)->code_list), new_code_line2);
                                  }
#line 1687 "parser.tab.c"
    break;

  case 53: /* attribution: vector_attribution '=' expr  */
#line 201 "parser.y"
                                               {
                                               (yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico));
                                               (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));
                                               (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));
                                               symbol var_left = create_symbol(1, TYPE_UNKNOWN, TYPE_VAR, (yyvsp[-2].ast)->data.line,
                                                                                     (yyvsp[-2].ast)->child[0]->data.lv.v,
                                                                                     (yyvsp[-2].ast)->child[0]->data.lexeme);
                                               symbol var_right = create_symbol(1, TYPE_UNKNOWN, TYPE_VAR, (yyvsp[0].ast)->data.line,
                                                                                     (yyvsp[0].ast)->data.lv.v, (yyvsp[0].ast)->data.lexeme);
                                               assign_vector(top, &var_left, &var_right);
                                   }
#line 1703 "parser.tab.c"
    break;

  case 54: /* vector_attribution: id '[' expr ']'  */
#line 215 "parser.y"
                                  { (yyval.ast) = insert_leaf((yyvsp[-2].valor_lexico));
                                    (yyval.ast)->data.lv.v.vs = "[]";
                                    (yyval.ast)->data.token_t = COMPOSE_OP;
                                    (yyval.ast) = insert_child((yyval.ast), (yyvsp[-3].ast));
                                    (yyval.ast) = insert_child((yyval.ast), (yyvsp[-1].ast));}
#line 1713 "parser.tab.c"
    break;

  case 55: /* expr: ternary  */
#line 224 "parser.y"
                    {(yyval.ast) = (yyvsp[0].ast);}
#line 1719 "parser.tab.c"
    break;

  case 56: /* ternary: unary_minus '?' unary_minus ':' ternary  */
#line 228 "parser.y"
                                             {(yyval.ast) = insert_leaf((yyvsp[-3].valor_lexico)); (yyval.ast)->data.lv.v.vs = "?:";
                                              (yyval.ast)->data.token_t = COMPOSE_OP;
                                              (yyval.ast) = insert_child((yyval.ast), (yyvsp[-4].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));
                                              (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1728 "parser.tab.c"
    break;

  case 57: /* ternary: unary_minus  */
#line 232 "parser.y"
                                             {(yyval.ast) = (yyvsp[0].ast);}
#line 1734 "parser.tab.c"
    break;

  case 58: /* unary_minus: '+' unary_minus  */
#line 236 "parser.y"
                                 {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1740 "parser.tab.c"
    break;

  case 59: /* unary_minus: '-' unary_minus  */
#line 237 "parser.y"
                                 {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1746 "parser.tab.c"
    break;

  case 60: /* unary_minus: or  */
#line 238 "parser.y"
                                 {(yyval.ast) = (yyvsp[0].ast);}
#line 1752 "parser.tab.c"
    break;

  case 61: /* or: or TK_OC_OR and  */
#line 242 "parser.y"
                                 {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));
                                  (yyval.ast)->temp = create_register();
                                  code_line new_code_line = create_code_line((yyvsp[-2].ast)->temp, (yyvsp[0].ast)->temp, (yyval.ast)->temp, OR);
                                  insert_code(&((yyval.ast)->code_list), new_code_line);}
#line 1761 "parser.tab.c"
    break;

  case 62: /* or: and  */
#line 247 "parser.y"
                                 {(yyval.ast) = (yyvsp[0].ast);}
#line 1767 "parser.tab.c"
    break;

  case 63: /* and: and TK_OC_AND or_log  */
#line 251 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));
                            (yyval.ast)->temp = create_register();
                            code_line new_code_line = create_code_line((yyvsp[-2].ast)->temp, (yyvsp[0].ast)->temp, (yyval.ast)->temp, AND);
                            insert_code(&((yyval.ast)->code_list), new_code_line);}
#line 1776 "parser.tab.c"
    break;

  case 64: /* and: or_log  */
#line 256 "parser.y"
                           {(yyval.ast) = (yyvsp[0].ast);}
#line 1782 "parser.tab.c"
    break;

  case 65: /* or_log: or_log '|' and_log  */
#line 260 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1788 "parser.tab.c"
    break;

  case 66: /* or_log: and_log  */
#line 261 "parser.y"
                           {(yyval.ast) =  (yyvsp[0].ast);}
#line 1794 "parser.tab.c"
    break;

  case 67: /* and_log: and_log '&' equal  */
#line 265 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1800 "parser.tab.c"
    break;

  case 68: /* and_log: equal  */
#line 266 "parser.y"
                           {(yyval.ast) = (yyvsp[0].ast);}
#line 1806 "parser.tab.c"
    break;

  case 69: /* equal: equal TK_OC_EQ rel  */
#line 270 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));
                            (yyval.ast)->temp = create_register();
                            code_line new_code_line = create_code_line((yyvsp[-2].ast)->temp, (yyvsp[0].ast)->temp, (yyval.ast)->temp, CMP_EQ);
                            insert_code(&((yyval.ast)->code_list), new_code_line);}
#line 1815 "parser.tab.c"
    break;

  case 70: /* equal: equal TK_OC_NE rel  */
#line 275 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));
                            (yyval.ast)->temp = create_register();
                            code_line new_code_line = create_code_line((yyvsp[-2].ast)->temp, (yyvsp[0].ast)->temp, (yyval.ast)->temp, CMP_NE);
                            insert_code(&((yyval.ast)->code_list), new_code_line);}
#line 1824 "parser.tab.c"
    break;

  case 71: /* equal: rel  */
#line 280 "parser.y"
                           {(yyval.ast) = (yyvsp[0].ast);}
#line 1830 "parser.tab.c"
    break;

  case 72: /* rel: rel TK_OC_LE soma_sub  */
#line 284 "parser.y"
                            {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));
                             (yyval.ast)->temp = create_register();
                             code_line new_code_line = create_code_line((yyvsp[-2].ast)->temp, (yyvsp[0].ast)->temp, (yyval.ast)->temp, CMP_LE);
                             insert_code(&((yyval.ast)->code_list), new_code_line);}
#line 1839 "parser.tab.c"
    break;

  case 73: /* rel: rel TK_OC_GE soma_sub  */
#line 289 "parser.y"
                            {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));
                             (yyval.ast)->temp = create_register();
                             code_line new_code_line = create_code_line((yyvsp[-2].ast)->temp, (yyvsp[0].ast)->temp, (yyval.ast)->temp, CMP_GE);
                             insert_code(&((yyval.ast)->code_list), new_code_line);}
#line 1848 "parser.tab.c"
    break;

  case 74: /* rel: rel '>' soma_sub  */
#line 294 "parser.y"
                            {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));
                             (yyval.ast)->temp = create_register();
                             code_line new_code_line = create_code_line((yyvsp[-2].ast)->temp, (yyvsp[0].ast)->temp, (yyval.ast)->temp, CMP_GT);
                             insert_code(&((yyval.ast)->code_list), new_code_line);}
#line 1857 "parser.tab.c"
    break;

  case 75: /* rel: rel '<' soma_sub  */
#line 299 "parser.y"
                            {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));
                             (yyval.ast)->temp = create_register();
                             code_line new_code_line = create_code_line((yyvsp[-2].ast)->temp, (yyvsp[0].ast)->temp, (yyval.ast)->temp, CMP_LT);
                             insert_code(&((yyval.ast)->code_list), new_code_line);}
#line 1866 "parser.tab.c"
    break;

  case 76: /* rel: soma_sub  */
#line 303 "parser.y"
                            {(yyval.ast) = (yyvsp[0].ast);}
#line 1872 "parser.tab.c"
    break;

  case 77: /* soma_sub: soma_sub '+' mult_div  */
#line 307 "parser.y"
                            {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));
                             (yyval.ast)->temp = create_register();
                             code_line new_code_line = create_code_line((yyvsp[-2].ast)->temp, (yyvsp[0].ast)->temp, (yyval.ast)->temp, ADD);
                             insert_code(&((yyval.ast)->code_list), new_code_line);}
#line 1881 "parser.tab.c"
    break;

  case 78: /* soma_sub: soma_sub '-' mult_div  */
#line 311 "parser.y"
                            {
                                (yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));
                                (yyval.ast)->temp = create_register();
                                code_line new_code_line = create_code_line((yyvsp[-2].ast)->temp, (yyvsp[0].ast)->temp, (yyval.ast)->temp, SUB);
                                insert_code(&((yyval.ast)->code_list), new_code_line);}
#line 1891 "parser.tab.c"
    break;

  case 79: /* soma_sub: mult_div  */
#line 316 "parser.y"
                            {(yyval.ast) = (yyvsp[0].ast);}
#line 1897 "parser.tab.c"
    break;

  case 80: /* mult_div: mult_div '*' unary  */
#line 320 "parser.y"
                            {
                                (yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));
                                (yyval.ast)->temp = create_register();
                                code_line new_code_line = create_code_line((yyvsp[-2].ast)->temp, (yyvsp[0].ast)->temp, (yyval.ast)->temp, MULT);
                                insert_code(&((yyval.ast)->code_list), new_code_line);
                             }
#line 1908 "parser.tab.c"
    break;

  case 81: /* mult_div: mult_div '/' unary  */
#line 326 "parser.y"
                            {
                                (yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));
                                (yyval.ast)->temp = create_register();
                                code_line new_code_line = create_code_line((yyvsp[-2].ast)->temp, (yyvsp[0].ast)->temp, (yyval.ast)->temp, DIV);
                                insert_code(&((yyval.ast)->code_list), new_code_line);
                             }
#line 1919 "parser.tab.c"
    break;

  case 82: /* mult_div: mult_div '%' unary  */
#line 333 "parser.y"
                            {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1925 "parser.tab.c"
    break;

  case 83: /* mult_div: exponential  */
#line 335 "parser.y"
                            {(yyval.ast) = (yyvsp[0].ast);}
#line 1931 "parser.tab.c"
    break;

  case 84: /* exponential: exponential '^' unary  */
#line 339 "parser.y"
                            {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1937 "parser.tab.c"
    break;

  case 85: /* exponential: unary  */
#line 340 "parser.y"
                            {(yyval.ast) = (yyvsp[0].ast);}
#line 1943 "parser.tab.c"
    break;

  case 86: /* unary: '*' unary  */
#line 344 "parser.y"
                  {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1949 "parser.tab.c"
    break;

  case 87: /* unary: '&' unary  */
#line 345 "parser.y"
                  {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1955 "parser.tab.c"
    break;

  case 88: /* unary: '#' unary  */
#line 346 "parser.y"
                  {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1961 "parser.tab.c"
    break;

  case 89: /* unary: '?' unary  */
#line 347 "parser.y"
                  {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1967 "parser.tab.c"
    break;

  case 90: /* unary: '!' unary  */
#line 348 "parser.y"
                  {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1973 "parser.tab.c"
    break;

  case 91: /* unary: parenthesis  */
#line 349 "parser.y"
                  {(yyval.ast) = (yyvsp[0].ast);}
#line 1979 "parser.tab.c"
    break;

  case 92: /* parenthesis: '(' expr ')'  */
#line 353 "parser.y"
                   {(yyval.ast) = (yyvsp[-1].ast);}
#line 1985 "parser.tab.c"
    break;

  case 93: /* parenthesis: operand_arit  */
#line 354 "parser.y"
                   {(yyval.ast) = (yyvsp[0].ast);}
#line 1991 "parser.tab.c"
    break;

  case 94: /* flux_control: conditional  */
#line 358 "parser.y"
                   {(yyval.ast) = (yyvsp[0].ast);}
#line 1997 "parser.tab.c"
    break;

  case 95: /* flux_control: iterative  */
#line 359 "parser.y"
                   {(yyval.ast) = (yyvsp[0].ast);}
#line 2003 "parser.tab.c"
    break;

  case 97: /* conditional: if TK_PR_ELSE command_block  */
#line 365 "parser.y"
                                         {(yyval.ast) = (yyvsp[-2].ast);
                                          (yyvsp[-2].ast)->f = generate_label(&((yyvsp[0].ast)->code_list), (yyvsp[-2].ast)->f); //l4 After the else{x}
                                          (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));
                                          }
#line 2012 "parser.tab.c"
    break;

  case 98: /* @1: %empty  */
#line 373 "parser.y"
                                     {(yyval.ast) = insert_leaf((yyvsp[-3].valor_lexico));
                                      (yyval.ast)->t = create_label(); //l1
                                      (yyval.ast)->f = create_label();}
#line 2020 "parser.tab.c"
    break;

  case 99: /* if: TK_PR_IF '(' expr ')' @1 command_block  */
#line 377 "parser.y"
                         {(yyval.ast) = (yyvsp[-1].ast); (yyval.ast)->t = (yyvsp[-1].ast)->t;
                          code_line new_code_line = create_code_line((yyvsp[-3].ast)->temp, (yyval.ast)->t, (yyval.ast)->f, CBR);
                          insert_code(&((yyvsp[-3].ast)->code_list), new_code_line);
                          (yyvsp[-3].ast)->t = generate_label(&((yyvsp[-3].ast)->code_list), (yyval.ast)->t); //l1 -> ex (just before the if(x))
                          code_line new_code_line2 = create_code_line(0, 0, (yyval.ast)->f+1, JUMPI); //jump to l+1
                          insert_code(&((yyvsp[0].ast)->code_list), new_code_line2);
                          (yyval.ast)->f = generate_label(&((yyvsp[0].ast)->code_list), (yyval.ast)->f); // l2 -> block(just after if(){x})
                          (yyval.ast)->f = create_label(); //l3
                          (yyval.ast) = insert_child((yyval.ast), (yyvsp[-3].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 2034 "parser.tab.c"
    break;

  case 100: /* iterative: TK_PR_FOR '(' attribution ':' expr ':' attribution ')' command_block  */
#line 388 "parser.y"
                                                                           {
        (yyval.ast) = insert_leaf((yyvsp[-8].valor_lexico));
        (yyval.ast) = insert_child((yyval.ast), (yyvsp[-6].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-4].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));
        (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 2043 "parser.tab.c"
    break;

  case 101: /* iterative: TK_PR_WHILE '(' expr ')' TK_PR_DO command_block  */
#line 392 "parser.y"
                                                      {
        (yyval.ast) = insert_leaf((yyvsp[-5].valor_lexico));
        (yyval.ast) = insert_child((yyval.ast), (yyvsp[-3].ast));
        (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 2052 "parser.tab.c"
    break;

  case 102: /* input: TK_PR_INPUT id  */
#line 399 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 2058 "parser.tab.c"
    break;

  case 103: /* output: TK_PR_OUTPUT id  */
#line 403 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 2064 "parser.tab.c"
    break;

  case 104: /* output: TK_PR_OUTPUT literal  */
#line 404 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child ((yyval.ast), (yyvsp[0].ast));}
#line 2070 "parser.tab.c"
    break;

  case 105: /* return: TK_PR_RETURN expr  */
#line 408 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 2076 "parser.tab.c"
    break;

  case 106: /* break: TK_PR_BREAK  */
#line 412 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 2082 "parser.tab.c"
    break;

  case 107: /* continue: TK_PR_CONTINUE  */
#line 416 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 2088 "parser.tab.c"
    break;

  case 108: /* shift: id TK_OC_SL TK_LIT_INT  */
#line 420 "parser.y"
                              {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), insert_leaf((yyvsp[0].valor_lexico)));}
#line 2094 "parser.tab.c"
    break;

  case 109: /* shift: id TK_OC_SR TK_LIT_INT  */
#line 421 "parser.y"
                              {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), insert_leaf((yyvsp[0].valor_lexico)));}
#line 2100 "parser.tab.c"
    break;

  case 110: /* shift: vector_attribution TK_OC_SL TK_LIT_INT  */
#line 422 "parser.y"
                                              {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), insert_leaf((yyvsp[0].valor_lexico)));}
#line 2106 "parser.tab.c"
    break;

  case 111: /* shift: vector_attribution TK_OC_SR TK_LIT_INT  */
#line 423 "parser.y"
                                              {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), insert_leaf((yyvsp[0].valor_lexico)));}
#line 2112 "parser.tab.c"
    break;

  case 112: /* func_call: id '(' args ')'  */
#line 427 "parser.y"
                      {(yyval.ast) = (yyvsp[-3].ast);
                       (yyval.ast)->data.lv.v.vs = prepend((yyval.ast)->data.lv.v.vs, "call ");
                       (yyval.ast) = insert_child((yyval.ast), (yyvsp[-1].ast));
                       symbol func_name = create_symbol(1, TYPE_UNKNOWN, TYPE_VAR, (yyvsp[-3].ast)->data.line,
                                                        (yyvsp[-3].ast)->data.lv.v, (yyvsp[-3].ast)->data.lexeme);
                       call_function(top, &func_name);}
#line 2123 "parser.tab.c"
    break;

  case 113: /* args: expr ',' args  */
#line 436 "parser.y"
                     {(yyval.ast) = (yyvsp[-2].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 2129 "parser.tab.c"
    break;

  case 114: /* args: expr  */
#line 437 "parser.y"
                     {(yyval.ast) = (yyvsp[0].ast);}
#line 2135 "parser.tab.c"
    break;

  case 115: /* args: %empty  */
#line 438 "parser.y"
                     {(yyval.ast) = NULL;}
#line 2141 "parser.tab.c"
    break;

  case 116: /* operand_arit: vector_attribution  */
#line 442 "parser.y"
                         { (yyval.ast) = (yyvsp[0].ast);}
#line 2147 "parser.tab.c"
    break;

  case 117: /* operand_arit: id  */
#line 443 "parser.y"
                         { (yyval.ast) = (yyvsp[0].ast);
                           (yyval.ast)->temp = create_register();
                           symbol var_left = create_symbol(1, TYPE_UNKNOWN, TYPE_VAR, (yyvsp[0].ast)->data.line,
                                                                  (yyvsp[0].ast)->data.lv.v, (yyvsp[0].ast)->data.lexeme);
                           symbol* variable = find_variable(top, &var_left);
                           code_line new_code_line;
                           if(variable->nat == TYPE_GLOBAL_VAR)
                               new_code_line = create_code_line(0, variable->address, (yyval.ast)->temp, LOADAIRBSS);
                           else if (variable->nat == TYPE_VAR)
                               new_code_line = create_code_line(0, variable->address, (yyval.ast)->temp, LOADAIRFP);

                           insert_code(&((yyval.ast)->code_list), new_code_line);

                         }
#line 2166 "parser.tab.c"
    break;

  case 118: /* operand_arit: TK_LIT_INT  */
#line 457 "parser.y"
                         { (yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));
                           (yyval.ast)->temp = create_register();
                           code_line new_code_line = create_code_line((yyvsp[0].valor_lexico).lv.v.vi, 0, (yyval.ast)->temp, LOADI);
                           insert_code(&((yyval.ast)->code_list), new_code_line);
                         }
#line 2176 "parser.tab.c"
    break;

  case 119: /* operand_arit: TK_LIT_FLOAT  */
#line 462 "parser.y"
                         { (yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 2182 "parser.tab.c"
    break;

  case 120: /* operand_arit: func_call  */
#line 463 "parser.y"
                         { (yyval.ast) = (yyvsp[0].ast);}
#line 2188 "parser.tab.c"
    break;

  case 121: /* type: TK_PR_INT  */
#line 467 "parser.y"
                    {(yyval.valor_lexico) = (yyvsp[0].valor_lexico);}
#line 2194 "parser.tab.c"
    break;

  case 122: /* type: TK_PR_FLOAT  */
#line 468 "parser.y"
                    {(yyval.valor_lexico) = (yyvsp[0].valor_lexico);}
#line 2200 "parser.tab.c"
    break;

  case 123: /* type: TK_PR_BOOL  */
#line 469 "parser.y"
                    {(yyval.valor_lexico) = (yyvsp[0].valor_lexico);}
#line 2206 "parser.tab.c"
    break;

  case 124: /* type: TK_PR_CHAR  */
#line 470 "parser.y"
                    {(yyval.valor_lexico) = (yyvsp[0].valor_lexico);}
#line 2212 "parser.tab.c"
    break;

  case 125: /* type: TK_PR_STRING  */
#line 471 "parser.y"
                    {(yyval.valor_lexico) = (yyvsp[0].valor_lexico);}
#line 2218 "parser.tab.c"
    break;


#line 2222 "parser.tab.c"

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

#line 473 "parser.y"

