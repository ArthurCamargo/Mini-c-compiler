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
#line 1 "parser.y"

#include "tree.h"
#include "symbol_table.h"

int yylex(void); void yyerror (char const *s);
extern tree* arvore;

#line 79 "parser.tab.c"

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
  YYSYMBOL_vector_declaration = 77,        /* vector_declaration  */
  YYSYMBOL_static = 78,                    /* static  */
  YYSYMBOL_id = 79,                        /* id  */
  YYSYMBOL_function = 80,                  /* function  */
  YYSYMBOL_func_header = 81,               /* func_header  */
  YYSYMBOL_list = 82,                      /* list  */
  YYSYMBOL_parameters = 83,                /* parameters  */
  YYSYMBOL_const = 84,                     /* const  */
  YYSYMBOL_command_block = 85,             /* command_block  */
  YYSYMBOL_command = 86,                   /* command  */
  YYSYMBOL_simple_command = 87,            /* simple_command  */
  YYSYMBOL_local_variable = 88,            /* local_variable  */
  YYSYMBOL_id_list = 89,                   /* id_list  */
  YYSYMBOL_assignment = 90,                /* assignment  */
  YYSYMBOL_literal = 91,                   /* literal  */
  YYSYMBOL_attribution = 92,               /* attribution  */
  YYSYMBOL_vector_attribution = 93,        /* vector_attribution  */
  YYSYMBOL_expr = 94,                      /* expr  */
  YYSYMBOL_ternary = 95,                   /* ternary  */
  YYSYMBOL_unary_minus = 96,               /* unary_minus  */
  YYSYMBOL_or = 97,                        /* or  */
  YYSYMBOL_and = 98,                       /* and  */
  YYSYMBOL_or_log = 99,                    /* or_log  */
  YYSYMBOL_and_log = 100,                  /* and_log  */
  YYSYMBOL_equal = 101,                    /* equal  */
  YYSYMBOL_rel = 102,                      /* rel  */
  YYSYMBOL_soma_sub = 103,                 /* soma_sub  */
  YYSYMBOL_mult_div = 104,                 /* mult_div  */
  YYSYMBOL_exponential = 105,              /* exponential  */
  YYSYMBOL_unary = 106,                    /* unary  */
  YYSYMBOL_parenthesis = 107,              /* parenthesis  */
  YYSYMBOL_flux_control = 108,             /* flux_control  */
  YYSYMBOL_conditional = 109,              /* conditional  */
  YYSYMBOL_iterative = 110,                /* iterative  */
  YYSYMBOL_input = 111,                    /* input  */
  YYSYMBOL_output = 112,                   /* output  */
  YYSYMBOL_return = 113,                   /* return  */
  YYSYMBOL_break = 114,                    /* break  */
  YYSYMBOL_continue = 115,                 /* continue  */
  YYSYMBOL_shift = 116,                    /* shift  */
  YYSYMBOL_func_call = 117,                /* func_call  */
  YYSYMBOL_args = 118,                     /* args  */
  YYSYMBOL_operand_arit = 119,             /* operand_arit  */
  YYSYMBOL_type = 120                      /* type  */
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
#define YYLAST   200

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  121
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  210

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
       0,    42,    42,    45,    46,    50,    51,    55,    59,    60,
      64,    65,    69,    70,    74,    78,    82,    86,    87,    91,
      92,    96,    97,   101,   105,   107,   108,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   125,   129,   130,
     131,   132,   136,   137,   141,   142,   143,   144,   145,   146,
     150,   151,   155,   161,   165,   169,   173,   174,   175,   179,
     180,   184,   185,   189,   190,   194,   195,   199,   200,   201,
     205,   206,   207,   208,   209,   213,   214,   215,   219,   220,
     221,   222,   226,   227,   231,   232,   233,   234,   235,   236,
     240,   241,   245,   246,   250,   252,   258,   262,   269,   273,
     274,   278,   282,   286,   290,   291,   292,   293,   297,   301,
     302,   303,   307,   308,   309,   310,   311,   315,   316,   317,
     318,   319
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

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-87)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-27)

#define yytable_value_is_error(Yyn) \
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
static const yytype_int8 yydefact[] =
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
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,     5,   109,    49,    29,    72,     7,
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

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
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

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
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

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
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
#line 42 "parser.y"
             {arvore = (yyvsp[0].ast);}
#line 1341 "parser.tab.c"
    break;

  case 3: /* program: declaration program  */
#line 45 "parser.y"
                          {(yyval.ast) = (yyvsp[-1].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1347 "parser.tab.c"
    break;

  case 4: /* program: %empty  */
#line 46 "parser.y"
                          {(yyval.ast) = NULL;}
#line 1353 "parser.tab.c"
    break;

  case 5: /* declaration: function  */
#line 50 "parser.y"
                           {(yyval.ast) = (yyvsp[0].ast);}
#line 1359 "parser.tab.c"
    break;

  case 6: /* declaration: global_variable  */
#line 51 "parser.y"
                      {(yyval.ast) = NULL;}
#line 1365 "parser.tab.c"
    break;

  case 7: /* global_variable: static type id vector_declaration global_fotter ';'  */
#line 55 "parser.y"
                                                          {(yyval.ast) = NULL; libera((yyvsp[-3].ast));}
#line 1371 "parser.tab.c"
    break;

  case 8: /* global_fotter: ',' id vector_declaration global_fotter  */
#line 59 "parser.y"
                                              {(yyval.ast) = NULL; libera((yyvsp[-2].ast));}
#line 1377 "parser.tab.c"
    break;

  case 9: /* global_fotter: %empty  */
#line 60 "parser.y"
            {(yyval.ast) = NULL;}
#line 1383 "parser.tab.c"
    break;

  case 10: /* vector_declaration: '[' TK_LIT_INT ']'  */
#line 64 "parser.y"
                          {(yyval.ast) = NULL;}
#line 1389 "parser.tab.c"
    break;

  case 11: /* vector_declaration: %empty  */
#line 65 "parser.y"
                          {(yyval.ast) = NULL;}
#line 1395 "parser.tab.c"
    break;

  case 12: /* static: TK_PR_STATIC  */
#line 69 "parser.y"
                          {(yyval.ast) = NULL;}
#line 1401 "parser.tab.c"
    break;

  case 13: /* static: %empty  */
#line 70 "parser.y"
                          {(yyval.ast) = NULL;}
#line 1407 "parser.tab.c"
    break;

  case 14: /* id: TK_IDENTIFICADOR  */
#line 74 "parser.y"
                          {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1413 "parser.tab.c"
    break;

  case 15: /* function: func_header command_block  */
#line 78 "parser.y"
                                {(yyval.ast) = (yyvsp[-1].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1419 "parser.tab.c"
    break;

  case 16: /* func_header: static type id list  */
#line 82 "parser.y"
                                {(yyval.ast) = (yyvsp[-1].ast);}
#line 1425 "parser.tab.c"
    break;

  case 17: /* list: '(' parameters ')'  */
#line 86 "parser.y"
                                {(yyval.ast) = NULL;}
#line 1431 "parser.tab.c"
    break;

  case 18: /* list: '(' ')'  */
#line 87 "parser.y"
                                {(yyval.ast) = NULL;}
#line 1437 "parser.tab.c"
    break;

  case 19: /* parameters: parameters ',' const type id  */
#line 91 "parser.y"
                                    {(yyval.ast) = NULL; libera((yyvsp[0].ast));}
#line 1443 "parser.tab.c"
    break;

  case 20: /* parameters: const type id  */
#line 92 "parser.y"
                                    {(yyval.ast) = NULL; libera((yyvsp[0].ast));}
#line 1449 "parser.tab.c"
    break;

  case 21: /* const: TK_PR_CONST  */
#line 96 "parser.y"
                                  {(yyval.ast) = NULL;}
#line 1455 "parser.tab.c"
    break;

  case 22: /* const: %empty  */
#line 97 "parser.y"
                                  {(yyval.ast) = NULL;}
#line 1461 "parser.tab.c"
    break;

  case 23: /* command_block: '{' command '}'  */
#line 101 "parser.y"
                          {(yyval.ast) = (yyvsp[-1].ast);}
#line 1467 "parser.tab.c"
    break;

  case 24: /* command: simple_command ';' command  */
#line 105 "parser.y"
                                  {(yyval.ast) = (yyvsp[-2].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1473 "parser.tab.c"
    break;

  case 25: /* command: flux_control ';' command  */
#line 107 "parser.y"
                                  {(yyval.ast) = (yyvsp[-2].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1479 "parser.tab.c"
    break;

  case 26: /* command: %empty  */
#line 108 "parser.y"
                                  {(yyval.ast) = NULL;}
#line 1485 "parser.tab.c"
    break;

  case 27: /* simple_command: local_variable  */
#line 112 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1491 "parser.tab.c"
    break;

  case 28: /* simple_command: attribution  */
#line 113 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1497 "parser.tab.c"
    break;

  case 29: /* simple_command: input  */
#line 114 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1503 "parser.tab.c"
    break;

  case 30: /* simple_command: output  */
#line 115 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1509 "parser.tab.c"
    break;

  case 31: /* simple_command: return  */
#line 116 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1515 "parser.tab.c"
    break;

  case 32: /* simple_command: command_block  */
#line 117 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1521 "parser.tab.c"
    break;

  case 33: /* simple_command: shift  */
#line 118 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1527 "parser.tab.c"
    break;

  case 34: /* simple_command: break  */
#line 119 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1533 "parser.tab.c"
    break;

  case 35: /* simple_command: continue  */
#line 120 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1539 "parser.tab.c"
    break;

  case 36: /* simple_command: func_call  */
#line 121 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1545 "parser.tab.c"
    break;

  case 37: /* local_variable: static const type id_list  */
#line 125 "parser.y"
                                {(yyval.ast) = (yyvsp[0].ast);}
#line 1551 "parser.tab.c"
    break;

  case 38: /* id_list: assignment  */
#line 129 "parser.y"
                              {(yyval.ast) = (yyvsp[0].ast);}
#line 1557 "parser.tab.c"
    break;

  case 39: /* id_list: id_list ',' assignment  */
#line 130 "parser.y"
                              {(yyval.ast) = (yyvsp[-2].ast);  (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1563 "parser.tab.c"
    break;

  case 40: /* id_list: id_list ',' id  */
#line 131 "parser.y"
                              {(yyval.ast) = (yyvsp[-2].ast); libera((yyvsp[0].ast));}
#line 1569 "parser.tab.c"
    break;

  case 41: /* id_list: id  */
#line 132 "parser.y"
                              {(yyval.ast) = NULL; libera((yyvsp[0].ast));}
#line 1575 "parser.tab.c"
    break;

  case 42: /* assignment: id TK_OC_LE id  */
#line 136 "parser.y"
                             {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1581 "parser.tab.c"
    break;

  case 43: /* assignment: id TK_OC_LE literal  */
#line 137 "parser.y"
                             {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1587 "parser.tab.c"
    break;

  case 44: /* literal: TK_LIT_INT  */
#line 141 "parser.y"
                    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico)); }
#line 1593 "parser.tab.c"
    break;

  case 45: /* literal: TK_LIT_FLOAT  */
#line 142 "parser.y"
                    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico)); }
#line 1599 "parser.tab.c"
    break;

  case 46: /* literal: TK_LIT_FALSE  */
#line 143 "parser.y"
                    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico)); }
#line 1605 "parser.tab.c"
    break;

  case 47: /* literal: TK_LIT_TRUE  */
#line 144 "parser.y"
                    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico)); }
#line 1611 "parser.tab.c"
    break;

  case 48: /* literal: TK_LIT_CHAR  */
#line 145 "parser.y"
                    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico)); }
#line 1617 "parser.tab.c"
    break;

  case 49: /* literal: TK_LIT_STRING  */
#line 146 "parser.y"
                    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico)); }
#line 1623 "parser.tab.c"
    break;

  case 50: /* attribution: id '=' expr  */
#line 150 "parser.y"
                    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1629 "parser.tab.c"
    break;

  case 51: /* attribution: vector_attribution '=' expr  */
#line 151 "parser.y"
                                   {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1635 "parser.tab.c"
    break;

  case 52: /* vector_attribution: id '[' expr ']'  */
#line 155 "parser.y"
                                {(yyval.ast) = insert_leaf((yyvsp[-2].valor_lexico)); (yyval.ast)->data.lv.v.vs = "[]"; (yyval.ast)->data.token_t = COMPOSE_OP;
                       (yyval.ast) = insert_child((yyval.ast), (yyvsp[-3].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-1].ast));}
#line 1642 "parser.tab.c"
    break;

  case 53: /* expr: ternary  */
#line 161 "parser.y"
                    {(yyval.ast) = (yyvsp[0].ast);}
#line 1648 "parser.tab.c"
    break;

  case 54: /* ternary: unary_minus '?' unary_minus ':' ternary  */
#line 165 "parser.y"
                                                 {(yyval.ast) = insert_leaf((yyvsp[-3].valor_lexico)); (yyval.ast)->data.lv.v.vs = "?:";
                                       (yyval.ast)->data.token_t = COMPOSE_OP;
                                       (yyval.ast) = insert_child((yyval.ast), (yyvsp[-4].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));
                                       (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1657 "parser.tab.c"
    break;

  case 55: /* ternary: unary_minus  */
#line 169 "parser.y"
                                 {(yyval.ast) = (yyvsp[0].ast);}
#line 1663 "parser.tab.c"
    break;

  case 56: /* unary_minus: '+' unary_minus  */
#line 173 "parser.y"
                                 {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1669 "parser.tab.c"
    break;

  case 57: /* unary_minus: '-' unary_minus  */
#line 174 "parser.y"
                                 {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1675 "parser.tab.c"
    break;

  case 58: /* unary_minus: or  */
#line 175 "parser.y"
                                 {(yyval.ast) = (yyvsp[0].ast);}
#line 1681 "parser.tab.c"
    break;

  case 59: /* or: or TK_OC_OR and  */
#line 179 "parser.y"
                                 {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1687 "parser.tab.c"
    break;

  case 60: /* or: and  */
#line 180 "parser.y"
                                 {(yyval.ast) = (yyvsp[0].ast);}
#line 1693 "parser.tab.c"
    break;

  case 61: /* and: and TK_OC_AND or_log  */
#line 184 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1699 "parser.tab.c"
    break;

  case 62: /* and: or_log  */
#line 185 "parser.y"
                           {(yyval.ast) = (yyvsp[0].ast);}
#line 1705 "parser.tab.c"
    break;

  case 63: /* or_log: or_log '|' and_log  */
#line 189 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1711 "parser.tab.c"
    break;

  case 64: /* or_log: and_log  */
#line 190 "parser.y"
                           {(yyval.ast) =  (yyvsp[0].ast);}
#line 1717 "parser.tab.c"
    break;

  case 65: /* and_log: and_log '&' equal  */
#line 194 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1723 "parser.tab.c"
    break;

  case 66: /* and_log: equal  */
#line 195 "parser.y"
                           {(yyval.ast) = (yyvsp[0].ast);}
#line 1729 "parser.tab.c"
    break;

  case 67: /* equal: equal TK_OC_EQ rel  */
#line 199 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1735 "parser.tab.c"
    break;

  case 68: /* equal: equal TK_OC_NE rel  */
#line 200 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1741 "parser.tab.c"
    break;

  case 69: /* equal: rel  */
#line 201 "parser.y"
                           {(yyval.ast) = (yyvsp[0].ast);}
#line 1747 "parser.tab.c"
    break;

  case 70: /* rel: rel TK_OC_LE soma_sub  */
#line 205 "parser.y"
                            {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1753 "parser.tab.c"
    break;

  case 71: /* rel: rel TK_OC_GE soma_sub  */
#line 206 "parser.y"
                            {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1759 "parser.tab.c"
    break;

  case 72: /* rel: rel '>' soma_sub  */
#line 207 "parser.y"
                            {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1765 "parser.tab.c"
    break;

  case 73: /* rel: rel '<' soma_sub  */
#line 208 "parser.y"
                            {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1771 "parser.tab.c"
    break;

  case 74: /* rel: soma_sub  */
#line 209 "parser.y"
                            {(yyval.ast) = (yyvsp[0].ast);}
#line 1777 "parser.tab.c"
    break;

  case 75: /* soma_sub: soma_sub '+' mult_div  */
#line 213 "parser.y"
                            {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1783 "parser.tab.c"
    break;

  case 76: /* soma_sub: soma_sub '-' mult_div  */
#line 214 "parser.y"
                            {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1789 "parser.tab.c"
    break;

  case 77: /* soma_sub: mult_div  */
#line 215 "parser.y"
                            {(yyval.ast) = (yyvsp[0].ast);}
#line 1795 "parser.tab.c"
    break;

  case 78: /* mult_div: mult_div '*' unary  */
#line 219 "parser.y"
                            {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1801 "parser.tab.c"
    break;

  case 79: /* mult_div: mult_div '/' unary  */
#line 220 "parser.y"
                            {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1807 "parser.tab.c"
    break;

  case 80: /* mult_div: mult_div '%' unary  */
#line 221 "parser.y"
                            {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1813 "parser.tab.c"
    break;

  case 81: /* mult_div: exponential  */
#line 222 "parser.y"
                            {(yyval.ast) = (yyvsp[0].ast);}
#line 1819 "parser.tab.c"
    break;

  case 82: /* exponential: exponential '^' unary  */
#line 226 "parser.y"
                            {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1825 "parser.tab.c"
    break;

  case 83: /* exponential: unary  */
#line 227 "parser.y"
                            {(yyval.ast) = (yyvsp[0].ast);}
#line 1831 "parser.tab.c"
    break;

  case 84: /* unary: '*' unary  */
#line 231 "parser.y"
                  {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1837 "parser.tab.c"
    break;

  case 85: /* unary: '&' unary  */
#line 232 "parser.y"
                  {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1843 "parser.tab.c"
    break;

  case 86: /* unary: '#' unary  */
#line 233 "parser.y"
                  {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1849 "parser.tab.c"
    break;

  case 87: /* unary: '?' unary  */
#line 234 "parser.y"
                  {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1855 "parser.tab.c"
    break;

  case 88: /* unary: '!' unary  */
#line 235 "parser.y"
                  {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1861 "parser.tab.c"
    break;

  case 89: /* unary: parenthesis  */
#line 236 "parser.y"
                  {(yyval.ast) = (yyvsp[0].ast);}
#line 1867 "parser.tab.c"
    break;

  case 90: /* parenthesis: '(' expr ')'  */
#line 240 "parser.y"
                   {(yyval.ast) = (yyvsp[-1].ast);}
#line 1873 "parser.tab.c"
    break;

  case 91: /* parenthesis: operand_arit  */
#line 241 "parser.y"
                   {(yyval.ast) = (yyvsp[0].ast);}
#line 1879 "parser.tab.c"
    break;

  case 92: /* flux_control: conditional  */
#line 245 "parser.y"
                   {(yyval.ast) = (yyvsp[0].ast);}
#line 1885 "parser.tab.c"
    break;

  case 93: /* flux_control: iterative  */
#line 246 "parser.y"
                   {(yyval.ast) = (yyvsp[0].ast);}
#line 1891 "parser.tab.c"
    break;

  case 94: /* conditional: TK_PR_IF '(' expr ')' command_block  */
#line 250 "parser.y"
                                          {(yyval.ast) = insert_leaf((yyvsp[-4].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1897 "parser.tab.c"
    break;

  case 95: /* conditional: TK_PR_IF '(' expr ')' command_block TK_PR_ELSE command_block  */
#line 252 "parser.y"
                                                                   {
        (yyval.ast) = insert_leaf((yyvsp[-6].valor_lexico));
        (yyval.ast) = insert_child((yyval.ast), (yyvsp[-4].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1905 "parser.tab.c"
    break;

  case 96: /* iterative: TK_PR_FOR '(' attribution ':' expr ':' attribution ')' command_block  */
#line 258 "parser.y"
                                                                           {
        (yyval.ast) = insert_leaf((yyvsp[-8].valor_lexico));
        (yyval.ast) = insert_child((yyval.ast), (yyvsp[-6].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-4].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));
        (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1914 "parser.tab.c"
    break;

  case 97: /* iterative: TK_PR_WHILE '(' expr ')' TK_PR_DO command_block  */
#line 262 "parser.y"
                                                      {
        (yyval.ast) = insert_leaf((yyvsp[-5].valor_lexico));
        (yyval.ast) = insert_child((yyval.ast), (yyvsp[-3].ast));
        (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1923 "parser.tab.c"
    break;

  case 98: /* input: TK_PR_INPUT id  */
#line 269 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1929 "parser.tab.c"
    break;

  case 99: /* output: TK_PR_OUTPUT id  */
#line 273 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1935 "parser.tab.c"
    break;

  case 100: /* output: TK_PR_OUTPUT literal  */
#line 274 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child ((yyval.ast), (yyvsp[0].ast));}
#line 1941 "parser.tab.c"
    break;

  case 101: /* return: TK_PR_RETURN expr  */
#line 278 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1947 "parser.tab.c"
    break;

  case 102: /* break: TK_PR_BREAK  */
#line 282 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1953 "parser.tab.c"
    break;

  case 103: /* continue: TK_PR_CONTINUE  */
#line 286 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1959 "parser.tab.c"
    break;

  case 104: /* shift: id TK_OC_SL TK_LIT_INT  */
#line 290 "parser.y"
                              {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), insert_leaf((yyvsp[0].valor_lexico)));}
#line 1965 "parser.tab.c"
    break;

  case 105: /* shift: id TK_OC_SR TK_LIT_INT  */
#line 291 "parser.y"
                              {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), insert_leaf((yyvsp[0].valor_lexico)));}
#line 1971 "parser.tab.c"
    break;

  case 106: /* shift: vector_attribution TK_OC_SL TK_LIT_INT  */
#line 292 "parser.y"
                                              {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), insert_leaf((yyvsp[0].valor_lexico)));}
#line 1977 "parser.tab.c"
    break;

  case 107: /* shift: vector_attribution TK_OC_SR TK_LIT_INT  */
#line 293 "parser.y"
                                              {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), insert_leaf((yyvsp[0].valor_lexico)));}
#line 1983 "parser.tab.c"
    break;

  case 108: /* func_call: id '(' args ')'  */
#line 297 "parser.y"
                      {(yyval.ast) = (yyvsp[-3].ast); (yyval.ast)->data.lv.v.vs = prepend((yyval.ast)->data.lv.v.vs, "call "); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-1].ast));}
#line 1989 "parser.tab.c"
    break;

  case 109: /* args: expr ',' args  */
#line 301 "parser.y"
                     {(yyval.ast) = (yyvsp[-2].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1995 "parser.tab.c"
    break;

  case 110: /* args: expr  */
#line 302 "parser.y"
                     {(yyval.ast) = (yyvsp[0].ast);}
#line 2001 "parser.tab.c"
    break;

  case 111: /* args: %empty  */
#line 303 "parser.y"
                     {(yyval.ast) = NULL;}
#line 2007 "parser.tab.c"
    break;

  case 112: /* operand_arit: vector_attribution  */
#line 307 "parser.y"
                         { (yyval.ast) = (yyvsp[0].ast);}
#line 2013 "parser.tab.c"
    break;

  case 113: /* operand_arit: id  */
#line 308 "parser.y"
                         { (yyval.ast) = (yyvsp[0].ast);}
#line 2019 "parser.tab.c"
    break;

  case 114: /* operand_arit: TK_LIT_INT  */
#line 309 "parser.y"
                         { (yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 2025 "parser.tab.c"
    break;

  case 115: /* operand_arit: TK_LIT_FLOAT  */
#line 310 "parser.y"
                         { (yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 2031 "parser.tab.c"
    break;

  case 116: /* operand_arit: func_call  */
#line 311 "parser.y"
                         { (yyval.ast) = (yyvsp[0].ast);}
#line 2037 "parser.tab.c"
    break;

  case 117: /* type: TK_PR_INT  */
#line 315 "parser.y"
                    {(yyval.ast) = NULL;}
#line 2043 "parser.tab.c"
    break;

  case 118: /* type: TK_PR_FLOAT  */
#line 316 "parser.y"
                    {(yyval.ast) = NULL;}
#line 2049 "parser.tab.c"
    break;

  case 119: /* type: TK_PR_BOOL  */
#line 317 "parser.y"
                    {(yyval.ast) = NULL;}
#line 2055 "parser.tab.c"
    break;

  case 120: /* type: TK_PR_CHAR  */
#line 318 "parser.y"
                    {(yyval.ast) = NULL;}
#line 2061 "parser.tab.c"
    break;

  case 121: /* type: TK_PR_STRING  */
#line 319 "parser.y"
                    {(yyval.ast) = NULL;}
#line 2067 "parser.tab.c"
    break;


#line 2071 "parser.tab.c"

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

#line 321 "parser.y"

