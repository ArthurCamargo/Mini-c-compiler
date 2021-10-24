/* A Bison parser, made by GNU Bison 3.8.1.  */

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
#define YYBISON 30801

/* Bison version string.  */
#define YYBISON_VERSION "3.8.1"

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
int yylex(void); void yyerror (char const *s);
extern tree* arvore;

#line 77 "parser.tab.c"

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
  YYSYMBOL_TK_LIT_UINT = 3,                /* TK_LIT_UINT  */
  YYSYMBOL_TK_LIT_INT = 4,                 /* TK_LIT_INT  */
  YYSYMBOL_TK_LIT_FLOAT = 5,               /* TK_LIT_FLOAT  */
  YYSYMBOL_TK_LIT_FALSE = 6,               /* TK_LIT_FALSE  */
  YYSYMBOL_TK_LIT_TRUE = 7,                /* TK_LIT_TRUE  */
  YYSYMBOL_TK_LIT_CHAR = 8,                /* TK_LIT_CHAR  */
  YYSYMBOL_TK_LIT_STRING = 9,              /* TK_LIT_STRING  */
  YYSYMBOL_TK_IDENTIFICADOR = 10,          /* TK_IDENTIFICADOR  */
  YYSYMBOL_TK_PR_INT = 11,                 /* TK_PR_INT  */
  YYSYMBOL_TK_PR_FLOAT = 12,               /* TK_PR_FLOAT  */
  YYSYMBOL_TK_PR_BOOL = 13,                /* TK_PR_BOOL  */
  YYSYMBOL_TK_PR_STRING = 14,              /* TK_PR_STRING  */
  YYSYMBOL_TK_PR_CHAR = 15,                /* TK_PR_CHAR  */
  YYSYMBOL_TK_PR_IF = 16,                  /* TK_PR_IF  */
  YYSYMBOL_TK_PR_THEN = 17,                /* TK_PR_THEN  */
  YYSYMBOL_TK_PR_ELSE = 18,                /* TK_PR_ELSE  */
  YYSYMBOL_TK_PR_WHILE = 19,               /* TK_PR_WHILE  */
  YYSYMBOL_TK_PR_DO = 20,                  /* TK_PR_DO  */
  YYSYMBOL_TK_PR_INPUT = 21,               /* TK_PR_INPUT  */
  YYSYMBOL_TK_PR_OUTPUT = 22,              /* TK_PR_OUTPUT  */
  YYSYMBOL_TK_PR_RETURN = 23,              /* TK_PR_RETURN  */
  YYSYMBOL_TK_PR_CONST = 24,               /* TK_PR_CONST  */
  YYSYMBOL_TK_PR_STATIC = 25,              /* TK_PR_STATIC  */
  YYSYMBOL_TK_PR_FOREACH = 26,             /* TK_PR_FOREACH  */
  YYSYMBOL_TK_PR_FOR = 27,                 /* TK_PR_FOR  */
  YYSYMBOL_TK_PR_SWITCH = 28,              /* TK_PR_SWITCH  */
  YYSYMBOL_TK_PR_CASE = 29,                /* TK_PR_CASE  */
  YYSYMBOL_TK_PR_BREAK = 30,               /* TK_PR_BREAK  */
  YYSYMBOL_TK_PR_CONTINUE = 31,            /* TK_PR_CONTINUE  */
  YYSYMBOL_TK_PR_CLASS = 32,               /* TK_PR_CLASS  */
  YYSYMBOL_TK_PR_PRIVATE = 33,             /* TK_PR_PRIVATE  */
  YYSYMBOL_TK_PR_PUBLIC = 34,              /* TK_PR_PUBLIC  */
  YYSYMBOL_TK_PR_PROTECTED = 35,           /* TK_PR_PROTECTED  */
  YYSYMBOL_TK_PR_END = 36,                 /* TK_PR_END  */
  YYSYMBOL_TK_PR_DEFAULT = 37,             /* TK_PR_DEFAULT  */
  YYSYMBOL_TK_OC_LE = 38,                  /* TK_OC_LE  */
  YYSYMBOL_TK_OC_GE = 39,                  /* TK_OC_GE  */
  YYSYMBOL_TK_OC_EQ = 40,                  /* TK_OC_EQ  */
  YYSYMBOL_TK_OC_NE = 41,                  /* TK_OC_NE  */
  YYSYMBOL_TK_OC_AND = 42,                 /* TK_OC_AND  */
  YYSYMBOL_TK_OC_OR = 43,                  /* TK_OC_OR  */
  YYSYMBOL_TK_OC_SL = 44,                  /* TK_OC_SL  */
  YYSYMBOL_TK_OC_SR = 45,                  /* TK_OC_SR  */
  YYSYMBOL_TOKEN_ERRO = 46,                /* TOKEN_ERRO  */
  YYSYMBOL_47_ = 47,                       /* ')'  */
  YYSYMBOL_48_ = 48,                       /* '('  */
  YYSYMBOL_49_ = 49,                       /* ']'  */
  YYSYMBOL_50_ = 50,                       /* '['  */
  YYSYMBOL_51_ = 51,                       /* '}'  */
  YYSYMBOL_52_ = 52,                       /* '{'  */
  YYSYMBOL_53_ = 53,                       /* '-'  */
  YYSYMBOL_54_ = 54,                       /* '+'  */
  YYSYMBOL_55_ = 55,                       /* '?'  */
  YYSYMBOL_56_ = 56,                       /* '*'  */
  YYSYMBOL_57_ = 57,                       /* '/'  */
  YYSYMBOL_58_ = 58,                       /* '|'  */
  YYSYMBOL_59_ = 59,                       /* '>'  */
  YYSYMBOL_60_ = 60,                       /* '<'  */
  YYSYMBOL_61_ = 61,                       /* '!'  */
  YYSYMBOL_62_ = 62,                       /* '='  */
  YYSYMBOL_63_ = 63,                       /* '&'  */
  YYSYMBOL_64_ = 64,                       /* '%'  */
  YYSYMBOL_65_ = 65,                       /* '#'  */
  YYSYMBOL_66_ = 66,                       /* '^'  */
  YYSYMBOL_67_ = 67,                       /* '$'  */
  YYSYMBOL_68_ = 68,                       /* ','  */
  YYSYMBOL_69_ = 69,                       /* ';'  */
  YYSYMBOL_70_ = 70,                       /* ':'  */
  YYSYMBOL_71_ = 71,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 72,                  /* $accept  */
  YYSYMBOL_start = 73,                     /* start  */
  YYSYMBOL_program = 74,                   /* program  */
  YYSYMBOL_declaration = 75,               /* declaration  */
  YYSYMBOL_global_variable_body = 76,      /* global_variable_body  */
  YYSYMBOL_global_fotter = 77,             /* global_fotter  */
  YYSYMBOL_vector_declaration = 78,        /* vector_declaration  */
  YYSYMBOL_static = 79,                    /* static  */
  YYSYMBOL_id = 80,                        /* id  */
  YYSYMBOL_function = 81,                  /* function  */
  YYSYMBOL_func_header = 82,               /* func_header  */
  YYSYMBOL_list = 83,                      /* list  */
  YYSYMBOL_parameters = 84,                /* parameters  */
  YYSYMBOL_const = 85,                     /* const  */
  YYSYMBOL_command_block = 86,             /* command_block  */
  YYSYMBOL_command = 87,                   /* command  */
  YYSYMBOL_simple_command = 88,            /* simple_command  */
  YYSYMBOL_local_variable = 89,            /* local_variable  */
  YYSYMBOL_id_list = 90,                   /* id_list  */
  YYSYMBOL_initialization = 91,            /* initialization  */
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
#define YYLAST   204

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  123
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  214

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   301


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
       2,     2,     2,    61,     2,    65,    67,    64,    63,     2,
      48,    47,    56,    54,    68,    53,    71,    57,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    70,    69,
      60,    62,    59,    55,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    50,     2,    49,    66,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    52,    58,    51,     2,     2,     2,     2,
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
      45,    46
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    40,    40,    43,    44,    48,    49,    53,    57,    58,
      62,    63,    67,    68,    72,    76,    80,    84,    85,    89,
      90,    94,    95,    99,   103,   105,   106,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   123,   127,   128,
     129,   133,   134,   138,   139,   140,   141,   142,   143,   144,
     148,   149,   153,   159,   162,   166,   170,   171,   172,   176,
     177,   181,   182,   186,   187,   191,   192,   196,   197,   198,
     202,   203,   204,   205,   206,   210,   211,   212,   216,   217,
     218,   219,   223,   224,   228,   229,   230,   231,   232,   233,
     237,   238,   242,   243,   247,   249,   255,   259,   266,   270,
     271,   275,   279,   283,   287,   288,   289,   290,   294,   298,
     299,   303,   304,   305,   306,   307,   308,   309,   310,   314,
     315,   316,   317,   318
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
  "\"end of file\"", "error", "\"invalid token\"", "TK_LIT_UINT",
  "TK_LIT_INT", "TK_LIT_FLOAT", "TK_LIT_FALSE", "TK_LIT_TRUE",
  "TK_LIT_CHAR", "TK_LIT_STRING", "TK_IDENTIFICADOR", "TK_PR_INT",
  "TK_PR_FLOAT", "TK_PR_BOOL", "TK_PR_STRING", "TK_PR_CHAR", "TK_PR_IF",
  "TK_PR_THEN", "TK_PR_ELSE", "TK_PR_WHILE", "TK_PR_DO", "TK_PR_INPUT",
  "TK_PR_OUTPUT", "TK_PR_RETURN", "TK_PR_CONST", "TK_PR_STATIC",
  "TK_PR_FOREACH", "TK_PR_FOR", "TK_PR_SWITCH", "TK_PR_CASE",
  "TK_PR_BREAK", "TK_PR_CONTINUE", "TK_PR_CLASS", "TK_PR_PRIVATE",
  "TK_PR_PUBLIC", "TK_PR_PROTECTED", "TK_PR_END", "TK_PR_DEFAULT",
  "TK_OC_LE", "TK_OC_GE", "TK_OC_EQ", "TK_OC_NE", "TK_OC_AND", "TK_OC_OR",
  "TK_OC_SL", "TK_OC_SR", "TOKEN_ERRO", "')'", "'('", "']'", "'['", "'}'",
  "'{'", "'-'", "'+'", "'?'", "'*'", "'/'", "'|'", "'>'", "'<'", "'!'",
  "'='", "'&'", "'%'", "'#'", "'^'", "'$'", "','", "';'", "':'", "'.'",
  "$accept", "start", "program", "declaration", "global_variable_body",
  "global_fotter", "vector_declaration", "static", "id", "function",
  "func_header", "list", "parameters", "const", "command_block", "command",
  "simple_command", "local_variable", "id_list", "initialization",
  "literal", "attribution", "vector_attribution", "expr", "ternary",
  "unary_minus", "or", "and", "or_log", "and_log", "equal", "rel",
  "soma_sub", "mult_div", "exponential", "unary", "parenthesis",
  "flux_control", "conditional", "iterative", "input", "output", "return",
  "break", "continue", "shift", "func_call", "args", "operand_arit",
  "type", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-90)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-27)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      16,   -90,    27,   -90,    16,   -90,   134,   -90,   -33,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,    36,   101,   -90,   -90,
     -20,     4,    22,    36,   130,     8,    24,   -90,   -90,    50,
     -19,   -90,    30,    10,   -90,   -90,     3,    17,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,    -7,    87,    29,
     -90,     8,     8,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,     8,     8,
       8,   102,   102,   102,   102,   102,     7,   -90,   -90,    44,
     -90,    67,    71,    58,    62,    19,   -15,    23,    11,    55,
     -90,   -90,   -90,   -90,    36,   -90,   134,   124,   126,     8,
       8,     8,   -90,   101,   138,   139,     8,   101,   -90,   -26,
     134,    94,    36,    82,   108,   109,   119,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,     8,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   -30,    98,   107,    36,   -90,   -90,   103,   123,   125,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,    50,    36,   -90,
     122,   -90,   -33,   153,   -90,    -4,    71,    58,    62,    19,
     -15,   -15,    23,    23,    23,    23,    11,    11,   -90,   -90,
     -90,   -90,     8,   137,   110,     8,   -90,   -90,   134,   -90,
      29,   158,   -33,   102,   112,   130,   -90,    36,   -90,    36,
     -90,   -33,   -90,    67,    36,   -90,   -90,   137,   -90,   -90,
     132,   -90,   -33,   -90
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      13,    12,     0,     2,    13,     6,     0,     5,     0,     1,
       3,   119,   120,   121,   123,   122,     0,    13,    15,    14,
      11,     0,     0,     0,     0,     0,     0,   102,   103,    22,
       0,    32,     0,     0,    27,    28,     0,     0,    92,    93,
      29,    30,    31,    34,    35,    33,    36,    22,     0,     9,
      16,     0,     0,    98,    43,    44,    45,    46,    47,    48,
      49,    99,   100,   113,   114,   115,   117,   116,     0,     0,
       0,     0,     0,     0,     0,     0,   112,   111,   101,    53,
      55,    58,    60,    62,    64,    66,    69,    74,    77,    81,
      83,    89,   118,    91,     0,    21,     0,     0,     0,     0,
       0,     0,    23,    13,     0,     0,     0,    13,    18,     0,
       0,     0,     0,     0,     0,     0,     0,    57,    56,    87,
      84,    88,    85,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   104,   105,   110,     0,     0,
      50,    24,   106,   107,    51,    25,    17,    22,     0,    10,
      11,     7,     0,     0,    90,     0,    59,    61,    63,    65,
      67,    68,    70,    71,    72,    73,    76,    75,    78,    79,
      80,    82,     0,    40,    37,     0,   108,    52,     0,    20,
       9,    94,     0,     0,     0,     0,    38,     0,   109,     0,
       8,     0,    97,    54,     0,    41,    42,     0,    19,    95,
       0,    39,     0,    96
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -90,   -90,   173,   -90,   -90,   -10,    26,    49,   -14,   -90,
     -90,   -90,   -90,   -43,    -8,   -49,   -90,   -90,   -90,   -13,
      -6,   -89,   -16,   -18,    63,    15,    -2,    70,    66,    69,
      72,   -35,    28,   -17,   -90,   -36,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -11,    12,   -90,   -88
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,     5,   113,    49,    29,    76,     7,
       8,    50,   109,    96,    31,    32,    33,    34,   184,   196,
      62,    35,    77,   147,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    92,   148,    93,    16
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      18,    36,    20,    30,   110,   142,    46,    78,   144,    53,
      61,    63,    64,    65,    66,    67,    -4,    95,    19,    17,
     100,   156,   158,   131,   132,    97,    98,     9,    47,    99,
      48,   100,   101,   114,   115,   119,   120,   121,   122,   123,
     108,     1,   157,   101,   133,   134,    19,   104,   105,     6,
     116,   124,    51,     6,   151,    99,    68,   100,   155,   129,
     130,    69,    70,    71,    72,   106,   193,   137,   138,    73,
      52,    74,    94,    75,    95,   139,   135,   136,   143,   103,
     141,   102,   149,   150,   117,   118,   107,    36,   154,    30,
     111,    36,    46,    30,   170,   171,    46,   112,   160,   124,
     199,   178,   179,   180,   181,    63,    64,    65,    66,    67,
     125,    19,    19,   126,   188,   210,   127,    21,   176,   177,
      22,   140,    23,    24,    25,   128,     1,   145,    26,   146,
     183,    27,    28,    54,    55,    56,    57,    58,    59,    60,
      19,   152,   153,   159,   189,    11,    12,    13,    14,    15,
      68,   161,   -26,    17,   191,   162,   163,    71,    72,   172,
     173,   174,   175,    73,   194,    74,   164,    75,   182,   106,
     186,   185,    48,   192,   187,   195,   201,    10,   197,   212,
     200,   205,   204,   207,   202,   208,   190,   165,   143,   206,
     141,   203,   167,   209,   211,   166,   168,   198,     0,     0,
     169,     0,     0,     0,   213
};

static const yytype_int16 yycheck[] =
{
       8,    17,    16,    17,    47,    94,    17,    25,    96,    23,
      24,     3,     4,     5,     6,     7,     0,    24,    10,    52,
      50,    47,   110,    38,    39,    44,    45,     0,    48,    48,
      50,    50,    62,    51,    52,    71,    72,    73,    74,    75,
      47,    25,    68,    62,    59,    60,    10,    44,    45,     0,
      68,    55,    48,     4,   103,    48,    48,    50,   107,    40,
      41,    53,    54,    55,    56,    62,    70,    56,    57,    61,
      48,    63,    48,    65,    24,    64,    53,    54,    94,    69,
      94,    51,   100,   101,    69,    70,    69,   103,   106,   103,
       3,   107,   103,   107,   129,   130,   107,    68,   112,    55,
     188,   137,   138,   139,   140,     3,     4,     5,     6,     7,
      43,    10,    10,    42,   157,   204,    58,    16,   135,   136,
      19,    66,    21,    22,    23,    63,    25,     3,    27,     3,
     144,    30,    31,     3,     4,     5,     6,     7,     8,     9,
      10,     3,     3,    49,   158,    11,    12,    13,    14,    15,
      48,    69,    51,    52,   162,    47,    47,    55,    56,   131,
     132,   133,   134,    61,   182,    63,    47,    65,    70,    62,
      47,    68,    50,    20,    49,    38,    18,     4,    68,    47,
     190,   195,    70,   197,   192,   199,   160,   124,   204,   195,
     204,   193,   126,   201,   207,   125,   127,   185,    -1,    -1,
     128,    -1,    -1,    -1,   212
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    25,    73,    74,    75,    76,    79,    81,    82,     0,
      74,    11,    12,    13,    14,    15,   121,    52,    86,    10,
      80,    16,    19,    21,    22,    23,    27,    30,    31,    79,
      80,    86,    87,    88,    89,    93,    94,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,    48,    50,    78,
      83,    48,    48,    80,     3,     4,     5,     6,     7,     8,
       9,    80,    92,     3,     4,     5,     6,     7,    48,    53,
      54,    55,    56,    61,    63,    65,    80,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   118,   120,    48,    24,    85,    44,    45,    48,
      50,    62,    51,    69,    44,    45,    62,    69,    47,    84,
      85,     3,    68,    77,    95,    95,    95,    97,    97,   107,
     107,   107,   107,   107,    55,    43,    42,    58,    63,    40,
      41,    38,    39,    59,    60,    53,    54,    56,    57,    64,
      66,    80,    93,    94,   121,     3,     3,    95,   119,    95,
      95,    87,     3,     3,    95,    87,    47,    68,   121,    49,
      80,    69,    47,    47,    47,    96,    99,   100,   101,   102,
     103,   103,   104,   104,   104,   104,   105,   105,   107,   107,
     107,   107,    70,    80,    90,    68,    47,    49,    85,    80,
      78,    86,    20,    70,    95,    38,    91,    68,   119,   121,
      77,    18,    86,    98,    70,    80,    92,    80,    80,    86,
      93,    91,    47,    86
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    72,    73,    74,    74,    75,    75,    76,    77,    77,
      78,    78,    79,    79,    80,    81,    82,    83,    83,    84,
      84,    85,    85,    86,    87,    87,    87,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    89,    90,    90,
      90,    91,    91,    92,    92,    92,    92,    92,    92,    92,
      93,    93,    94,    95,    96,    96,    97,    97,    97,    98,
      98,    99,    99,   100,   100,   101,   101,   102,   102,   102,
     103,   103,   103,   103,   103,   104,   104,   104,   105,   105,
     105,   105,   106,   106,   107,   107,   107,   107,   107,   107,
     108,   108,   109,   109,   110,   110,   111,   111,   112,   113,
     113,   114,   115,   116,   117,   117,   117,   117,   118,   119,
     119,   120,   120,   120,   120,   120,   120,   120,   120,   121,
     121,   121,   121,   121
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     6,     4,     0,
       3,     0,     1,     0,     1,     2,     4,     3,     2,     5,
       3,     1,     0,     3,     3,     3,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     2,     4,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     4,     1,     5,     1,     2,     2,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     1,     3,     1,     2,     2,     2,     2,     2,     1,
       3,     1,     1,     1,     5,     7,     9,     6,     2,     2,
       2,     2,     1,     1,     3,     3,     3,     3,     4,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
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
#line 40 "parser.y"
             {arvore = (yyvsp[0].ast);}
#line 1344 "parser.tab.c"
    break;

  case 3: /* program: declaration program  */
#line 43 "parser.y"
                          {(yyval.ast) = (yyvsp[-1].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1350 "parser.tab.c"
    break;

  case 4: /* program: %empty  */
#line 44 "parser.y"
                          {(yyval.ast) = NULL;}
#line 1356 "parser.tab.c"
    break;

  case 5: /* declaration: function  */
#line 48 "parser.y"
                           {(yyval.ast) = (yyvsp[0].ast);}
#line 1362 "parser.tab.c"
    break;

  case 6: /* declaration: global_variable_body  */
#line 49 "parser.y"
                           {(yyval.ast) = NULL;}
#line 1368 "parser.tab.c"
    break;

  case 7: /* global_variable_body: static type id vector_declaration global_fotter ';'  */
#line 53 "parser.y"
                                                          {(yyval.ast) = NULL;}
#line 1374 "parser.tab.c"
    break;

  case 8: /* global_fotter: ',' id vector_declaration global_fotter  */
#line 57 "parser.y"
                                              {(yyval.ast) = NULL;}
#line 1380 "parser.tab.c"
    break;

  case 9: /* global_fotter: %empty  */
#line 58 "parser.y"
            {(yyval.ast) = NULL;}
#line 1386 "parser.tab.c"
    break;

  case 10: /* vector_declaration: '[' TK_LIT_UINT ']'  */
#line 62 "parser.y"
                          {(yyval.ast) = NULL;}
#line 1392 "parser.tab.c"
    break;

  case 11: /* vector_declaration: %empty  */
#line 63 "parser.y"
                          {(yyval.ast) = NULL;}
#line 1398 "parser.tab.c"
    break;

  case 12: /* static: TK_PR_STATIC  */
#line 67 "parser.y"
                          {(yyval.ast) = NULL;}
#line 1404 "parser.tab.c"
    break;

  case 13: /* static: %empty  */
#line 68 "parser.y"
                          {(yyval.ast) = NULL;}
#line 1410 "parser.tab.c"
    break;

  case 14: /* id: TK_IDENTIFICADOR  */
#line 72 "parser.y"
                          {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1416 "parser.tab.c"
    break;

  case 15: /* function: func_header command_block  */
#line 76 "parser.y"
                                {(yyval.ast) = (yyvsp[-1].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1422 "parser.tab.c"
    break;

  case 16: /* func_header: static type id list  */
#line 80 "parser.y"
                                {(yyval.ast) = (yyvsp[-1].ast);}
#line 1428 "parser.tab.c"
    break;

  case 17: /* list: '(' parameters ')'  */
#line 84 "parser.y"
                                {(yyval.ast) = NULL;}
#line 1434 "parser.tab.c"
    break;

  case 18: /* list: '(' ')'  */
#line 85 "parser.y"
                                {(yyval.ast) = NULL;}
#line 1440 "parser.tab.c"
    break;

  case 19: /* parameters: parameters ',' const type id  */
#line 89 "parser.y"
                                    {(yyval.ast) = NULL;}
#line 1446 "parser.tab.c"
    break;

  case 20: /* parameters: const type id  */
#line 90 "parser.y"
                                    {(yyval.ast) = NULL;}
#line 1452 "parser.tab.c"
    break;

  case 21: /* const: TK_PR_CONST  */
#line 94 "parser.y"
                                  {(yyval.ast) = NULL;}
#line 1458 "parser.tab.c"
    break;

  case 22: /* const: %empty  */
#line 95 "parser.y"
                                  {(yyval.ast) = NULL;}
#line 1464 "parser.tab.c"
    break;

  case 23: /* command_block: '{' command '}'  */
#line 99 "parser.y"
                          {(yyval.ast) = (yyvsp[-1].ast);}
#line 1470 "parser.tab.c"
    break;

  case 24: /* command: simple_command ';' command  */
#line 103 "parser.y"
                                  {(yyval.ast) = (yyvsp[-2].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1476 "parser.tab.c"
    break;

  case 25: /* command: flux_control ';' command  */
#line 105 "parser.y"
                                  {(yyval.ast) = (yyvsp[-2].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1482 "parser.tab.c"
    break;

  case 26: /* command: %empty  */
#line 106 "parser.y"
                                  {(yyval.ast) = NULL;}
#line 1488 "parser.tab.c"
    break;

  case 27: /* simple_command: local_variable  */
#line 110 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1494 "parser.tab.c"
    break;

  case 28: /* simple_command: attribution  */
#line 111 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1500 "parser.tab.c"
    break;

  case 29: /* simple_command: input  */
#line 112 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1506 "parser.tab.c"
    break;

  case 30: /* simple_command: output  */
#line 113 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1512 "parser.tab.c"
    break;

  case 31: /* simple_command: return  */
#line 114 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1518 "parser.tab.c"
    break;

  case 32: /* simple_command: command_block  */
#line 115 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1524 "parser.tab.c"
    break;

  case 33: /* simple_command: shift  */
#line 116 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1530 "parser.tab.c"
    break;

  case 34: /* simple_command: break  */
#line 117 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1536 "parser.tab.c"
    break;

  case 35: /* simple_command: continue  */
#line 118 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1542 "parser.tab.c"
    break;

  case 36: /* simple_command: func_call  */
#line 119 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1548 "parser.tab.c"
    break;

  case 37: /* local_variable: static const type id_list  */
#line 123 "parser.y"
                                {(yyval.ast) = (yyvsp[0].ast);}
#line 1554 "parser.tab.c"
    break;

  case 38: /* id_list: id initialization  */
#line 127 "parser.y"
                                     {(yyval.ast) = (yyvsp[0].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-1].ast));}
#line 1560 "parser.tab.c"
    break;

  case 39: /* id_list: id_list ',' id initialization  */
#line 128 "parser.y"
                                     {(yyval.ast) = (yyvsp[-1].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-3].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-1].ast));}
#line 1566 "parser.tab.c"
    break;

  case 40: /* id_list: id  */
#line 129 "parser.y"
                                     {(yyval.ast) = NULL;}
#line 1572 "parser.tab.c"
    break;

  case 41: /* initialization: TK_OC_LE id  */
#line 133 "parser.y"
                                     {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1578 "parser.tab.c"
    break;

  case 42: /* initialization: TK_OC_LE literal  */
#line 134 "parser.y"
                                     {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1584 "parser.tab.c"
    break;

  case 43: /* literal: TK_LIT_UINT  */
#line 138 "parser.y"
                    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico)); }
#line 1590 "parser.tab.c"
    break;

  case 44: /* literal: TK_LIT_INT  */
#line 139 "parser.y"
                    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico)); }
#line 1596 "parser.tab.c"
    break;

  case 45: /* literal: TK_LIT_FLOAT  */
#line 140 "parser.y"
                    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico)); }
#line 1602 "parser.tab.c"
    break;

  case 46: /* literal: TK_LIT_FALSE  */
#line 141 "parser.y"
                    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico)); }
#line 1608 "parser.tab.c"
    break;

  case 47: /* literal: TK_LIT_TRUE  */
#line 142 "parser.y"
                    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico)); }
#line 1614 "parser.tab.c"
    break;

  case 48: /* literal: TK_LIT_CHAR  */
#line 143 "parser.y"
                    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico)); }
#line 1620 "parser.tab.c"
    break;

  case 49: /* literal: TK_LIT_STRING  */
#line 144 "parser.y"
                    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico)); }
#line 1626 "parser.tab.c"
    break;

  case 50: /* attribution: id '=' expr  */
#line 148 "parser.y"
                    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1632 "parser.tab.c"
    break;

  case 51: /* attribution: vector_attribution '=' expr  */
#line 149 "parser.y"
                                   {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1638 "parser.tab.c"
    break;

  case 52: /* vector_attribution: id '[' expr ']'  */
#line 153 "parser.y"
                      {(yyval.ast) = insert_leaf((yyvsp[-2].valor_lexico)); (yyval.ast)->data.lv.v.vs = "[]"; (yyval.ast)->data.token_t = COMPOSE_OP;
                       (yyval.ast) = insert_child((yyval.ast), (yyvsp[-3].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-1].ast));}
#line 1645 "parser.tab.c"
    break;

  case 53: /* expr: ternary  */
#line 159 "parser.y"
                    {(yyval.ast) = (yyvsp[0].ast);}
#line 1651 "parser.tab.c"
    break;

  case 54: /* ternary: ternary '?' ternary ':' or  */
#line 162 "parser.y"
                                     {(yyval.ast) = insert_leaf((yyvsp[-3].valor_lexico)); (yyval.ast)->data.lv.v.vs = "?:";
                                       (yyval.ast)->data.token_t = COMPOSE_OP;
                                       (yyval.ast) = insert_child((yyval.ast), (yyvsp[-4].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));
                                       (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1660 "parser.tab.c"
    break;

  case 55: /* ternary: unary_minus  */
#line 166 "parser.y"
                                 {(yyval.ast) = (yyvsp[0].ast);}
#line 1666 "parser.tab.c"
    break;

  case 56: /* unary_minus: '+' unary_minus  */
#line 170 "parser.y"
                                 {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1672 "parser.tab.c"
    break;

  case 57: /* unary_minus: '-' unary_minus  */
#line 171 "parser.y"
                                 {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1678 "parser.tab.c"
    break;

  case 58: /* unary_minus: or  */
#line 172 "parser.y"
                                 {(yyval.ast) = (yyvsp[0].ast);}
#line 1684 "parser.tab.c"
    break;

  case 59: /* or: or TK_OC_OR and  */
#line 176 "parser.y"
                                 {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1690 "parser.tab.c"
    break;

  case 60: /* or: and  */
#line 177 "parser.y"
                                 {(yyval.ast) = (yyvsp[0].ast);}
#line 1696 "parser.tab.c"
    break;

  case 61: /* and: and TK_OC_AND or_log  */
#line 181 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1702 "parser.tab.c"
    break;

  case 62: /* and: or_log  */
#line 182 "parser.y"
                           {(yyval.ast) = (yyvsp[0].ast);}
#line 1708 "parser.tab.c"
    break;

  case 63: /* or_log: or_log '|' and_log  */
#line 186 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1714 "parser.tab.c"
    break;

  case 64: /* or_log: and_log  */
#line 187 "parser.y"
                           {(yyval.ast) =  (yyvsp[0].ast);}
#line 1720 "parser.tab.c"
    break;

  case 65: /* and_log: and_log '&' equal  */
#line 191 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1726 "parser.tab.c"
    break;

  case 66: /* and_log: equal  */
#line 192 "parser.y"
                           {(yyval.ast) = (yyvsp[0].ast);}
#line 1732 "parser.tab.c"
    break;

  case 67: /* equal: equal TK_OC_EQ rel  */
#line 196 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1738 "parser.tab.c"
    break;

  case 68: /* equal: equal TK_OC_NE rel  */
#line 197 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1744 "parser.tab.c"
    break;

  case 69: /* equal: rel  */
#line 198 "parser.y"
                           {(yyval.ast) = (yyvsp[0].ast);}
#line 1750 "parser.tab.c"
    break;

  case 70: /* rel: rel TK_OC_LE soma_sub  */
#line 202 "parser.y"
                            {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1756 "parser.tab.c"
    break;

  case 71: /* rel: rel TK_OC_GE soma_sub  */
#line 203 "parser.y"
                            {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1762 "parser.tab.c"
    break;

  case 72: /* rel: rel '>' soma_sub  */
#line 204 "parser.y"
                            {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1768 "parser.tab.c"
    break;

  case 73: /* rel: rel '<' soma_sub  */
#line 205 "parser.y"
                            {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1774 "parser.tab.c"
    break;

  case 74: /* rel: soma_sub  */
#line 206 "parser.y"
                            {(yyval.ast) = (yyvsp[0].ast);}
#line 1780 "parser.tab.c"
    break;

  case 75: /* soma_sub: soma_sub '+' mult_div  */
#line 210 "parser.y"
                            {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1786 "parser.tab.c"
    break;

  case 76: /* soma_sub: soma_sub '-' mult_div  */
#line 211 "parser.y"
                            {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1792 "parser.tab.c"
    break;

  case 77: /* soma_sub: mult_div  */
#line 212 "parser.y"
                            {(yyval.ast) = (yyvsp[0].ast);}
#line 1798 "parser.tab.c"
    break;

  case 78: /* mult_div: mult_div '*' unary  */
#line 216 "parser.y"
                            {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1804 "parser.tab.c"
    break;

  case 79: /* mult_div: mult_div '/' unary  */
#line 217 "parser.y"
                            {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1810 "parser.tab.c"
    break;

  case 80: /* mult_div: mult_div '%' unary  */
#line 218 "parser.y"
                            {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1816 "parser.tab.c"
    break;

  case 81: /* mult_div: exponential  */
#line 219 "parser.y"
                            {(yyval.ast) = (yyvsp[0].ast);}
#line 1822 "parser.tab.c"
    break;

  case 82: /* exponential: exponential '^' unary  */
#line 223 "parser.y"
                            {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1828 "parser.tab.c"
    break;

  case 83: /* exponential: unary  */
#line 224 "parser.y"
                            {(yyval.ast) = (yyvsp[0].ast);}
#line 1834 "parser.tab.c"
    break;

  case 84: /* unary: '*' unary  */
#line 228 "parser.y"
                  {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1840 "parser.tab.c"
    break;

  case 85: /* unary: '&' unary  */
#line 229 "parser.y"
                  {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1846 "parser.tab.c"
    break;

  case 86: /* unary: '#' unary  */
#line 230 "parser.y"
                  {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1852 "parser.tab.c"
    break;

  case 87: /* unary: '?' unary  */
#line 231 "parser.y"
                  {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1858 "parser.tab.c"
    break;

  case 88: /* unary: '!' unary  */
#line 232 "parser.y"
                  {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1864 "parser.tab.c"
    break;

  case 89: /* unary: parenthesis  */
#line 233 "parser.y"
                  {(yyval.ast) = (yyvsp[0].ast);}
#line 1870 "parser.tab.c"
    break;

  case 90: /* parenthesis: '(' expr ')'  */
#line 237 "parser.y"
                   {(yyval.ast) = (yyvsp[-1].ast);}
#line 1876 "parser.tab.c"
    break;

  case 91: /* parenthesis: operand_arit  */
#line 238 "parser.y"
                   {(yyval.ast) = (yyvsp[0].ast);}
#line 1882 "parser.tab.c"
    break;

  case 92: /* flux_control: conditional  */
#line 242 "parser.y"
                   {(yyval.ast) = (yyvsp[0].ast);}
#line 1888 "parser.tab.c"
    break;

  case 93: /* flux_control: iterative  */
#line 243 "parser.y"
                   {(yyval.ast) = (yyvsp[0].ast);}
#line 1894 "parser.tab.c"
    break;

  case 94: /* conditional: TK_PR_IF '(' expr ')' command_block  */
#line 247 "parser.y"
                                          {(yyval.ast) = insert_leaf((yyvsp[-4].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1900 "parser.tab.c"
    break;

  case 95: /* conditional: TK_PR_IF '(' expr ')' command_block TK_PR_ELSE command_block  */
#line 249 "parser.y"
                                                                   {
        (yyval.ast) = insert_leaf((yyvsp[-6].valor_lexico));
        (yyval.ast) = insert_child((yyval.ast), (yyvsp[-4].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1908 "parser.tab.c"
    break;

  case 96: /* iterative: TK_PR_FOR '(' attribution ':' expr ':' attribution ')' command_block  */
#line 255 "parser.y"
                                                                           {
        (yyval.ast) = insert_leaf((yyvsp[-8].valor_lexico));
        (yyval.ast) = insert_child((yyval.ast), (yyvsp[-6].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-4].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));
        (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1917 "parser.tab.c"
    break;

  case 97: /* iterative: TK_PR_WHILE '(' expr ')' TK_PR_DO command_block  */
#line 259 "parser.y"
                                                      {
        (yyval.ast) = insert_leaf((yyvsp[-5].valor_lexico));
        (yyval.ast) = insert_child((yyval.ast), (yyvsp[-3].ast));
        (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1926 "parser.tab.c"
    break;

  case 98: /* input: TK_PR_INPUT id  */
#line 266 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1932 "parser.tab.c"
    break;

  case 99: /* output: TK_PR_OUTPUT id  */
#line 270 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1938 "parser.tab.c"
    break;

  case 100: /* output: TK_PR_OUTPUT literal  */
#line 271 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child ((yyval.ast), (yyvsp[0].ast));}
#line 1944 "parser.tab.c"
    break;

  case 101: /* return: TK_PR_RETURN expr  */
#line 275 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1950 "parser.tab.c"
    break;

  case 102: /* break: TK_PR_BREAK  */
#line 279 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1956 "parser.tab.c"
    break;

  case 103: /* continue: TK_PR_CONTINUE  */
#line 283 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1962 "parser.tab.c"
    break;

  case 104: /* shift: id TK_OC_SL TK_LIT_UINT  */
#line 287 "parser.y"
                               {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), insert_leaf((yyvsp[0].valor_lexico)));}
#line 1968 "parser.tab.c"
    break;

  case 105: /* shift: id TK_OC_SR TK_LIT_UINT  */
#line 288 "parser.y"
                               {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), insert_leaf((yyvsp[0].valor_lexico)));}
#line 1974 "parser.tab.c"
    break;

  case 106: /* shift: vector_attribution TK_OC_SL TK_LIT_UINT  */
#line 289 "parser.y"
                                               {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), insert_leaf((yyvsp[0].valor_lexico)));}
#line 1980 "parser.tab.c"
    break;

  case 107: /* shift: vector_attribution TK_OC_SR TK_LIT_UINT  */
#line 290 "parser.y"
                                               {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), insert_leaf((yyvsp[0].valor_lexico)));}
#line 1986 "parser.tab.c"
    break;

  case 108: /* func_call: id '(' args ')'  */
#line 294 "parser.y"
                      {(yyval.ast) = (yyvsp[-3].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-1].ast));}
#line 1992 "parser.tab.c"
    break;

  case 109: /* args: expr ',' args  */
#line 298 "parser.y"
                     {(yyval.ast) = (yyvsp[-2].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1998 "parser.tab.c"
    break;

  case 110: /* args: expr  */
#line 299 "parser.y"
                     {(yyval.ast) = (yyvsp[0].ast);}
#line 2004 "parser.tab.c"
    break;

  case 111: /* operand_arit: vector_attribution  */
#line 303 "parser.y"
                         { (yyval.ast) = (yyvsp[0].ast);}
#line 2010 "parser.tab.c"
    break;

  case 112: /* operand_arit: id  */
#line 304 "parser.y"
                         { (yyval.ast) = (yyvsp[0].ast);}
#line 2016 "parser.tab.c"
    break;

  case 113: /* operand_arit: TK_LIT_UINT  */
#line 305 "parser.y"
                         { (yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 2022 "parser.tab.c"
    break;

  case 114: /* operand_arit: TK_LIT_INT  */
#line 306 "parser.y"
                         { (yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 2028 "parser.tab.c"
    break;

  case 115: /* operand_arit: TK_LIT_FLOAT  */
#line 307 "parser.y"
                         { (yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 2034 "parser.tab.c"
    break;

  case 116: /* operand_arit: TK_LIT_TRUE  */
#line 308 "parser.y"
                         { (yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 2040 "parser.tab.c"
    break;

  case 117: /* operand_arit: TK_LIT_FALSE  */
#line 309 "parser.y"
                         { (yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 2046 "parser.tab.c"
    break;

  case 118: /* operand_arit: func_call  */
#line 310 "parser.y"
                         { (yyval.ast) = (yyvsp[0].ast);}
#line 2052 "parser.tab.c"
    break;

  case 119: /* type: TK_PR_INT  */
#line 314 "parser.y"
                    {(yyval.ast) = NULL;}
#line 2058 "parser.tab.c"
    break;

  case 120: /* type: TK_PR_FLOAT  */
#line 315 "parser.y"
                    {(yyval.ast) = NULL;}
#line 2064 "parser.tab.c"
    break;

  case 121: /* type: TK_PR_BOOL  */
#line 316 "parser.y"
                    {(yyval.ast) = NULL;}
#line 2070 "parser.tab.c"
    break;

  case 122: /* type: TK_PR_CHAR  */
#line 317 "parser.y"
                    {(yyval.ast) = NULL;}
#line 2076 "parser.tab.c"
    break;

  case 123: /* type: TK_PR_STRING  */
#line 318 "parser.y"
                    {(yyval.ast) = NULL;}
#line 2082 "parser.tab.c"
    break;


#line 2086 "parser.tab.c"

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

#line 320 "parser.y"

