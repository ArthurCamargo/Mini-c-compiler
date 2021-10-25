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
#include "stack.h"
#include "symbol_table.h"
#include "error.h"

int yylex(void); int yyerror (char const* s);
extern tree* arvore;
extern stack* st;


#line 83 "parser.tab.c"

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
  YYSYMBOL_open_block = 87,                /* open_block  */
  YYSYMBOL_close_block = 88,               /* close_block  */
  YYSYMBOL_command = 89,                   /* command  */
  YYSYMBOL_simple_command = 90,            /* simple_command  */
  YYSYMBOL_local_variable = 91,            /* local_variable  */
  YYSYMBOL_id_list = 92,                   /* id_list  */
  YYSYMBOL_initialization = 93,            /* initialization  */
  YYSYMBOL_literal = 94,                   /* literal  */
  YYSYMBOL_attribution = 95,               /* attribution  */
  YYSYMBOL_vector_attribution = 96,        /* vector_attribution  */
  YYSYMBOL_expr = 97,                      /* expr  */
  YYSYMBOL_ternary = 98,                   /* ternary  */
  YYSYMBOL_unary_minus = 99,               /* unary_minus  */
  YYSYMBOL_or = 100,                       /* or  */
  YYSYMBOL_and = 101,                      /* and  */
  YYSYMBOL_or_log = 102,                   /* or_log  */
  YYSYMBOL_and_log = 103,                  /* and_log  */
  YYSYMBOL_equal = 104,                    /* equal  */
  YYSYMBOL_rel = 105,                      /* rel  */
  YYSYMBOL_soma_sub = 106,                 /* soma_sub  */
  YYSYMBOL_mult_div = 107,                 /* mult_div  */
  YYSYMBOL_exponential = 108,              /* exponential  */
  YYSYMBOL_unary = 109,                    /* unary  */
  YYSYMBOL_parenthesis = 110,              /* parenthesis  */
  YYSYMBOL_flux_control = 111,             /* flux_control  */
  YYSYMBOL_conditional = 112,              /* conditional  */
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
#define YYLAST   206

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  126
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  216

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
       0,    47,    47,    50,    51,    55,    56,    60,    65,    68,
      72,    73,    77,    78,    82,    86,    90,    94,    95,    99,
     100,   104,   105,   109,   113,   117,   121,   123,   124,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   141,
     145,   149,   153,   158,   159,   163,   164,   165,   166,   167,
     168,   169,   173,   176,   180,   186,   189,   193,   197,   198,
     199,   203,   204,   208,   209,   213,   214,   218,   219,   223,
     224,   225,   229,   230,   231,   232,   233,   237,   238,   239,
     243,   244,   245,   246,   250,   251,   255,   256,   257,   258,
     259,   260,   264,   265,   269,   270,   274,   276,   282,   286,
     293,   297,   298,   302,   306,   310,   314,   315,   316,   317,
     321,   325,   326,   327,   331,   332,   333,   334,   335,   336,
     337,   338,   342,   343,   344,   345,   346
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
  "func_header", "list", "parameters", "const", "command_block",
  "open_block", "close_block", "command", "simple_command",
  "local_variable", "id_list", "initialization", "literal", "attribution",
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

#define YYPACT_NINF (-90)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-29)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       7,   -90,    25,   -90,     7,   -90,   136,   -90,   -21,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,    27,   -90,   -90,    20,
     -90,    -2,     1,    34,    27,   130,    51,    40,   -90,   -90,
      41,    30,   -90,    39,    32,   -90,   -90,   -29,    44,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -12,    37,
      35,   -90,    51,    51,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,    51,
      51,    51,    63,    63,    63,    63,    63,    14,   -90,   -90,
      55,   -90,    77,    85,    73,    82,   -18,    70,    43,    -4,
      91,   -90,   -90,   -90,   -90,    27,   -90,   136,   155,   157,
      51,    51,    51,   -90,   -90,    20,   158,   159,    51,    20,
     -90,   -34,   136,   114,    27,    95,   118,   119,   120,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,    51,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,   -24,    98,   107,    27,   -90,   -90,   102,
     124,   123,   -90,   -90,   -90,   -90,   -90,   -90,   -90,    41,
      27,   -90,   125,   -90,   -21,   153,   -90,   -41,    85,    73,
      82,   -18,    70,    70,    43,    43,    43,    43,    -4,    -4,
     -90,   -90,   -90,   -90,    51,   138,   106,    51,   -90,   -90,
     136,   -90,    35,   160,   -21,    63,   109,   130,   -90,    27,
     -90,    27,   -90,   -21,   -90,    77,    27,   -90,   -90,   138,
     -90,   -90,   133,   -90,   -21,   -90
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      13,    12,     0,     2,    13,     6,     0,     5,     0,     1,
       3,   122,   123,   124,   126,   125,     0,    24,    15,    13,
      14,    11,     0,     0,     0,     0,     0,     0,   104,   105,
      22,     0,    34,     0,     0,    29,    30,     0,     0,    94,
      95,    31,    32,    33,    36,    37,    35,    38,    22,     0,
       9,    16,     0,     0,   100,    45,    46,    47,    48,    49,
      50,    51,   101,   102,   116,   117,   118,   120,   119,     0,
       0,     0,     0,     0,     0,     0,     0,   115,   114,   103,
      55,    57,    60,    62,    64,    66,    68,    71,    76,    79,
      83,    85,    91,   121,    93,     0,    21,     0,     0,     0,
     113,     0,     0,    25,    23,    13,     0,     0,     0,    13,
      18,     0,     0,     0,     0,     0,     0,     0,     0,    59,
      58,    89,    86,    90,    87,    88,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   106,   107,   112,
       0,     0,    52,    26,   108,   109,    53,    27,    17,    22,
       0,    10,    11,     7,     0,     0,    92,     0,    61,    63,
      65,    67,    69,    70,    72,    73,    74,    75,    78,    77,
      80,    81,    82,    84,     0,    42,    39,   113,   110,    54,
       0,    20,     9,    96,     0,     0,     0,     0,    40,     0,
     111,     0,     8,     0,    99,    56,     0,    43,    44,     0,
      19,    97,     0,    41,     0,    98
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -90,   -90,   173,   -90,   -90,   -10,    19,    59,   -14,   -90,
     -90,   -90,   -90,   -44,    -8,   -90,   -90,    16,   -90,   -90,
     -90,   -20,   -13,   -89,   -16,   -25,    62,    52,    -1,    64,
      65,    67,    68,    21,     8,    17,   -90,   -55,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -11,    10,
     -90,   -88
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,     5,   115,    50,    30,    77,     7,
       8,    51,   111,    97,    32,    19,   104,    33,    34,    35,
     186,   198,    63,    36,    78,   149,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    93,   150,
      94,    16
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      18,    79,    21,    37,   112,    31,   144,    -4,    47,   146,
      54,    62,    96,   158,   126,   106,   107,   121,   122,   123,
     124,   125,   131,   132,   160,     9,   101,   116,   117,   195,
      20,    17,     1,   108,   159,   110,    22,    20,   102,    23,
     113,    24,    25,    26,   118,     1,    48,    27,    49,    52,
      28,    29,   139,   140,    64,    65,    66,    67,    68,     6,
     141,    20,   100,     6,   101,    96,    64,    65,    66,    67,
      68,   -28,    17,    20,    98,    99,   151,   152,   100,   145,
     101,   143,    53,   156,   180,   181,   182,   183,    95,    37,
     103,    31,   102,    37,    47,    31,   137,   138,    47,    69,
     162,   105,   201,   114,    70,    71,    72,    73,   133,   134,
     126,    69,    74,   109,    75,   190,    76,   212,    72,    73,
     127,   153,   119,   120,    74,   157,    75,   128,    76,   135,
     136,   129,   185,    55,    56,    57,    58,    59,    60,    61,
      20,   174,   175,   176,   177,   130,   191,    11,    12,    13,
      14,    15,   172,   173,   178,   179,   193,   142,   147,   196,
     148,   154,   155,   161,   163,   164,   165,   166,   184,   108,
     187,   188,   189,   194,   199,    49,   197,    10,   203,   206,
     214,   192,   202,   207,   208,   209,   204,   210,   167,   213,
     145,   168,   143,   169,   205,   211,   170,   200,   171,     0,
       0,     0,     0,     0,     0,     0,   215
};

static const yytype_int16 yycheck[] =
{
       8,    26,    16,    19,    48,    19,    95,     0,    19,    97,
      24,    25,    24,    47,    55,    44,    45,    72,    73,    74,
      75,    76,    40,    41,   112,     0,    50,    52,    53,    70,
      10,    52,    25,    62,    68,    47,    16,    10,    62,    19,
       3,    21,    22,    23,    69,    25,    48,    27,    50,    48,
      30,    31,    56,    57,     3,     4,     5,     6,     7,     0,
      64,    10,    48,     4,    50,    24,     3,     4,     5,     6,
       7,    51,    52,    10,    44,    45,   101,   102,    48,    95,
      50,    95,    48,   108,   139,   140,   141,   142,    48,   105,
      51,   105,    62,   109,   105,   109,    53,    54,   109,    48,
     114,    69,   190,    68,    53,    54,    55,    56,    38,    39,
      55,    48,    61,    69,    63,   159,    65,   206,    55,    56,
      43,   105,    70,    71,    61,   109,    63,    42,    65,    59,
      60,    58,   146,     3,     4,     5,     6,     7,     8,     9,
      10,   133,   134,   135,   136,    63,   160,    11,    12,    13,
      14,    15,   131,   132,   137,   138,   164,    66,     3,   184,
       3,     3,     3,    49,    69,    47,    47,    47,    70,    62,
      68,    47,    49,    20,    68,    50,    38,     4,    18,    70,
      47,   162,   192,   197,   197,   199,   194,   201,   126,   209,
     206,   127,   206,   128,   195,   203,   129,   187,   130,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   214
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    25,    73,    74,    75,    76,    79,    81,    82,     0,
      74,    11,    12,    13,    14,    15,   123,    52,    86,    87,
      10,    80,    16,    19,    21,    22,    23,    27,    30,    31,
      79,    80,    86,    89,    90,    91,    95,    96,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,    48,    50,
      78,    83,    48,    48,    80,     3,     4,     5,     6,     7,
       8,     9,    80,    94,     3,     4,     5,     6,     7,    48,
      53,    54,    55,    56,    61,    63,    65,    80,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   120,   122,    48,    24,    85,    44,    45,
      48,    50,    62,    51,    88,    69,    44,    45,    62,    69,
      47,    84,    85,     3,    68,    77,    97,    97,    97,    99,
      99,   109,   109,   109,   109,   109,    55,    43,    42,    58,
      63,    40,    41,    38,    39,    59,    60,    53,    54,    56,
      57,    64,    66,    80,    95,    96,   123,     3,     3,    97,
     121,    97,    97,    89,     3,     3,    97,    89,    47,    68,
     123,    49,    80,    69,    47,    47,    47,    98,   101,   102,
     103,   104,   105,   105,   106,   106,   106,   106,   107,   107,
     109,   109,   109,   109,    70,    80,    92,    68,    47,    49,
      85,    80,    78,    86,    20,    70,    97,    38,    93,    68,
     121,   123,    77,    18,    86,   100,    70,    80,    94,    80,
      80,    86,    95,    93,    47,    86
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    72,    73,    74,    74,    75,    75,    76,    77,    77,
      78,    78,    79,    79,    80,    81,    82,    83,    83,    84,
      84,    85,    85,    86,    87,    88,    89,    89,    89,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    91,
      92,    92,    92,    93,    93,    94,    94,    94,    94,    94,
      94,    94,    95,    95,    96,    97,    98,    98,    99,    99,
      99,   100,   100,   101,   101,   102,   102,   103,   103,   104,
     104,   104,   105,   105,   105,   105,   105,   106,   106,   106,
     107,   107,   107,   107,   108,   108,   109,   109,   109,   109,
     109,   109,   110,   110,   111,   111,   112,   112,   113,   113,
     114,   115,   115,   116,   117,   118,   119,   119,   119,   119,
     120,   121,   121,   121,   122,   122,   122,   122,   122,   122,
     122,   122,   123,   123,   123,   123,   123
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     6,     4,     0,
       3,     0,     1,     0,     1,     2,     4,     3,     2,     5,
       3,     1,     0,     3,     1,     1,     3,     3,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       2,     4,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     4,     1,     5,     1,     2,     2,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     1,     3,     1,     2,     2,     2,     2,
       2,     1,     3,     1,     1,     1,     5,     7,     9,     6,
       2,     2,     2,     2,     1,     1,     3,     3,     3,     3,
       4,     3,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
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
#line 47 "parser.y"
             {arvore = (yyvsp[0].ast);}
#line 1354 "parser.tab.c"
    break;

  case 3: /* program: declaration program  */
#line 50 "parser.y"
                          {(yyval.ast) = (yyvsp[-1].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1360 "parser.tab.c"
    break;

  case 4: /* program: %empty  */
#line 51 "parser.y"
                          {(yyval.ast) = NULL;}
#line 1366 "parser.tab.c"
    break;

  case 5: /* declaration: function  */
#line 55 "parser.y"
                           {(yyval.ast) = (yyvsp[0].ast);}
#line 1372 "parser.tab.c"
    break;

  case 6: /* declaration: global_variable_body  */
#line 56 "parser.y"
                           {(yyval.ast) = NULL;}
#line 1378 "parser.tab.c"
    break;

  case 7: /* global_variable_body: static type id vector_declaration global_fotter ';'  */
#line 60 "parser.y"
                                                          { symbol s = create_symbol((yyvsp[-2].valor_lexico).lv.v.vui, NULL, (yyvsp[-3].ast)->data);
                                                           insert_symbol(st->table, s);}
#line 1385 "parser.tab.c"
    break;

  case 8: /* global_fotter: ',' id vector_declaration global_fotter  */
#line 65 "parser.y"
                                              {symbol s = create_symbol((yyvsp[-1].valor_lexico).lv.v.vui, NULL, (yyvsp[-2].ast)->data);
                                               insert_symbol(st->table, s);
                                               }
#line 1393 "parser.tab.c"
    break;

  case 9: /* global_fotter: %empty  */
#line 68 "parser.y"
            {(yyval.ast) = NULL;}
#line 1399 "parser.tab.c"
    break;

  case 10: /* vector_declaration: '[' TK_LIT_UINT ']'  */
#line 72 "parser.y"
                          {(yyval.valor_lexico) = (yyvsp[-1].valor_lexico);}
#line 1405 "parser.tab.c"
    break;

  case 11: /* vector_declaration: %empty  */
#line 73 "parser.y"
                          {}
#line 1411 "parser.tab.c"
    break;

  case 12: /* static: TK_PR_STATIC  */
#line 77 "parser.y"
                          {(yyval.ast) = NULL;}
#line 1417 "parser.tab.c"
    break;

  case 13: /* static: %empty  */
#line 78 "parser.y"
                          {(yyval.ast) = NULL;}
#line 1423 "parser.tab.c"
    break;

  case 14: /* id: TK_IDENTIFICADOR  */
#line 82 "parser.y"
                          {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1429 "parser.tab.c"
    break;

  case 15: /* function: func_header command_block  */
#line 86 "parser.y"
                                {(yyval.ast) = (yyvsp[-1].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1435 "parser.tab.c"
    break;

  case 16: /* func_header: static type id list  */
#line 90 "parser.y"
                                {(yyval.ast) = (yyvsp[-1].ast);}
#line 1441 "parser.tab.c"
    break;

  case 17: /* list: '(' parameters ')'  */
#line 94 "parser.y"
                                {(yyval.ast) = NULL;}
#line 1447 "parser.tab.c"
    break;

  case 18: /* list: '(' ')'  */
#line 95 "parser.y"
                                {(yyval.ast) = NULL;}
#line 1453 "parser.tab.c"
    break;

  case 19: /* parameters: parameters ',' const type id  */
#line 99 "parser.y"
                                    {(yyval.ast) = NULL;}
#line 1459 "parser.tab.c"
    break;

  case 20: /* parameters: const type id  */
#line 100 "parser.y"
                                    {(yyval.ast) = NULL;}
#line 1465 "parser.tab.c"
    break;

  case 21: /* const: TK_PR_CONST  */
#line 104 "parser.y"
                                  {(yyval.ast) = NULL;}
#line 1471 "parser.tab.c"
    break;

  case 22: /* const: %empty  */
#line 105 "parser.y"
                                  {(yyval.ast) = NULL;}
#line 1477 "parser.tab.c"
    break;

  case 23: /* command_block: open_block command close_block  */
#line 109 "parser.y"
                                      {(yyval.ast) = (yyvsp[-1].ast);}
#line 1483 "parser.tab.c"
    break;

  case 24: /* open_block: '{'  */
#line 113 "parser.y"
                                  {symbol_table table = create_table(); push(&st, &table);}
#line 1489 "parser.tab.c"
    break;

  case 25: /* close_block: '}'  */
#line 117 "parser.y"
                                  {pop(&st);}
#line 1495 "parser.tab.c"
    break;

  case 26: /* command: simple_command ';' command  */
#line 121 "parser.y"
                                  {(yyval.ast) = (yyvsp[-2].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1501 "parser.tab.c"
    break;

  case 27: /* command: flux_control ';' command  */
#line 123 "parser.y"
                                  {(yyval.ast) = (yyvsp[-2].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1507 "parser.tab.c"
    break;

  case 28: /* command: %empty  */
#line 124 "parser.y"
                                  {(yyval.ast) = NULL;}
#line 1513 "parser.tab.c"
    break;

  case 29: /* simple_command: local_variable  */
#line 128 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1519 "parser.tab.c"
    break;

  case 30: /* simple_command: attribution  */
#line 129 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1525 "parser.tab.c"
    break;

  case 31: /* simple_command: input  */
#line 130 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1531 "parser.tab.c"
    break;

  case 32: /* simple_command: output  */
#line 131 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1537 "parser.tab.c"
    break;

  case 33: /* simple_command: return  */
#line 132 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1543 "parser.tab.c"
    break;

  case 34: /* simple_command: command_block  */
#line 133 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1549 "parser.tab.c"
    break;

  case 35: /* simple_command: shift  */
#line 134 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1555 "parser.tab.c"
    break;

  case 36: /* simple_command: break  */
#line 135 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1561 "parser.tab.c"
    break;

  case 37: /* simple_command: continue  */
#line 136 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1567 "parser.tab.c"
    break;

  case 38: /* simple_command: func_call  */
#line 137 "parser.y"
                      {(yyval.ast) = (yyvsp[0].ast);}
#line 1573 "parser.tab.c"
    break;

  case 39: /* local_variable: static const type id_list  */
#line 141 "parser.y"
                                {(yyval.ast) = (yyvsp[0].ast);}
#line 1579 "parser.tab.c"
    break;

  case 40: /* id_list: id initialization  */
#line 145 "parser.y"
                                     {(yyval.ast) = (yyvsp[0].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-1].ast));
                                      symbol s = create_symbol(1, NULL, (yyvsp[-1].ast)->data);
                                      insert_symbol(st->table, s);}
#line 1587 "parser.tab.c"
    break;

  case 41: /* id_list: id_list ',' id initialization  */
#line 149 "parser.y"
                                     {(yyval.ast) = (yyvsp[-1].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-3].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-1].ast));
                                      symbol s = create_symbol(1, NULL, (yyvsp[-1].ast)->data);
                                      insert_symbol(st->table, s);}
#line 1595 "parser.tab.c"
    break;

  case 42: /* id_list: id  */
#line 153 "parser.y"
                                     { symbol s = create_symbol(1, NULL, (yyvsp[0].ast)->data);
                                               insert_symbol(st->table, s);}
#line 1602 "parser.tab.c"
    break;

  case 43: /* initialization: TK_OC_LE id  */
#line 158 "parser.y"
                                     {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1608 "parser.tab.c"
    break;

  case 44: /* initialization: TK_OC_LE literal  */
#line 159 "parser.y"
                                     {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1614 "parser.tab.c"
    break;

  case 45: /* literal: TK_LIT_UINT  */
#line 163 "parser.y"
                    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico)); }
#line 1620 "parser.tab.c"
    break;

  case 46: /* literal: TK_LIT_INT  */
#line 164 "parser.y"
                    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico)); }
#line 1626 "parser.tab.c"
    break;

  case 47: /* literal: TK_LIT_FLOAT  */
#line 165 "parser.y"
                    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico)); }
#line 1632 "parser.tab.c"
    break;

  case 48: /* literal: TK_LIT_FALSE  */
#line 166 "parser.y"
                    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico)); }
#line 1638 "parser.tab.c"
    break;

  case 49: /* literal: TK_LIT_TRUE  */
#line 167 "parser.y"
                    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico)); }
#line 1644 "parser.tab.c"
    break;

  case 50: /* literal: TK_LIT_CHAR  */
#line 168 "parser.y"
                    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico)); }
#line 1650 "parser.tab.c"
    break;

  case 51: /* literal: TK_LIT_STRING  */
#line 169 "parser.y"
                    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico)); }
#line 1656 "parser.tab.c"
    break;

  case 52: /* attribution: id '=' expr  */
#line 173 "parser.y"
                    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));
                     if(!search(st, (yyvsp[-2].ast)->data.lv.v.vs)) {printf("Variável não declarada %s: line (%d)", (yyvsp[-2].ast)->data.lv.v.vs, (yyvsp[-2].ast)->data.line); exit(10);}
                     }
#line 1664 "parser.tab.c"
    break;

  case 53: /* attribution: vector_attribution '=' expr  */
#line 176 "parser.y"
                                   {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1670 "parser.tab.c"
    break;

  case 54: /* vector_attribution: id '[' expr ']'  */
#line 180 "parser.y"
                      {(yyval.ast) = insert_leaf((yyvsp[-2].valor_lexico)); (yyval.ast)->data.lv.v.vs = "[]"; (yyval.ast)->data.token_t = COMPOSE_OP;
                       (yyval.ast) = insert_child((yyval.ast), (yyvsp[-3].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-1].ast));}
#line 1677 "parser.tab.c"
    break;

  case 55: /* expr: ternary  */
#line 186 "parser.y"
                    {(yyval.ast) = (yyvsp[0].ast);}
#line 1683 "parser.tab.c"
    break;

  case 56: /* ternary: ternary '?' ternary ':' or  */
#line 189 "parser.y"
                                     {(yyval.ast) = insert_leaf((yyvsp[-3].valor_lexico)); (yyval.ast)->data.lv.v.vs = "?:";
                                       (yyval.ast)->data.token_t = COMPOSE_OP;
                                       (yyval.ast) = insert_child((yyval.ast), (yyvsp[-4].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));
                                       (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1692 "parser.tab.c"
    break;

  case 57: /* ternary: unary_minus  */
#line 193 "parser.y"
                                 {(yyval.ast) = (yyvsp[0].ast);}
#line 1698 "parser.tab.c"
    break;

  case 58: /* unary_minus: '+' unary_minus  */
#line 197 "parser.y"
                                 {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1704 "parser.tab.c"
    break;

  case 59: /* unary_minus: '-' unary_minus  */
#line 198 "parser.y"
                                 {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1710 "parser.tab.c"
    break;

  case 60: /* unary_minus: or  */
#line 199 "parser.y"
                                 {(yyval.ast) = (yyvsp[0].ast);}
#line 1716 "parser.tab.c"
    break;

  case 61: /* or: or TK_OC_OR and  */
#line 203 "parser.y"
                                 {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1722 "parser.tab.c"
    break;

  case 62: /* or: and  */
#line 204 "parser.y"
                                 {(yyval.ast) = (yyvsp[0].ast);}
#line 1728 "parser.tab.c"
    break;

  case 63: /* and: and TK_OC_AND or_log  */
#line 208 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1734 "parser.tab.c"
    break;

  case 64: /* and: or_log  */
#line 209 "parser.y"
                           {(yyval.ast) = (yyvsp[0].ast);}
#line 1740 "parser.tab.c"
    break;

  case 65: /* or_log: or_log '|' and_log  */
#line 213 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1746 "parser.tab.c"
    break;

  case 66: /* or_log: and_log  */
#line 214 "parser.y"
                           {(yyval.ast) =  (yyvsp[0].ast);}
#line 1752 "parser.tab.c"
    break;

  case 67: /* and_log: and_log '&' equal  */
#line 218 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1758 "parser.tab.c"
    break;

  case 68: /* and_log: equal  */
#line 219 "parser.y"
                           {(yyval.ast) = (yyvsp[0].ast);}
#line 1764 "parser.tab.c"
    break;

  case 69: /* equal: equal TK_OC_EQ rel  */
#line 223 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1770 "parser.tab.c"
    break;

  case 70: /* equal: equal TK_OC_NE rel  */
#line 224 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1776 "parser.tab.c"
    break;

  case 71: /* equal: rel  */
#line 225 "parser.y"
                           {(yyval.ast) = (yyvsp[0].ast);}
#line 1782 "parser.tab.c"
    break;

  case 72: /* rel: rel TK_OC_LE soma_sub  */
#line 229 "parser.y"
                            {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1788 "parser.tab.c"
    break;

  case 73: /* rel: rel TK_OC_GE soma_sub  */
#line 230 "parser.y"
                            {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1794 "parser.tab.c"
    break;

  case 74: /* rel: rel '>' soma_sub  */
#line 231 "parser.y"
                            {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1800 "parser.tab.c"
    break;

  case 75: /* rel: rel '<' soma_sub  */
#line 232 "parser.y"
                            {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1806 "parser.tab.c"
    break;

  case 76: /* rel: soma_sub  */
#line 233 "parser.y"
                            {(yyval.ast) = (yyvsp[0].ast);}
#line 1812 "parser.tab.c"
    break;

  case 77: /* soma_sub: soma_sub '+' mult_div  */
#line 237 "parser.y"
                            {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1818 "parser.tab.c"
    break;

  case 78: /* soma_sub: soma_sub '-' mult_div  */
#line 238 "parser.y"
                            {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1824 "parser.tab.c"
    break;

  case 79: /* soma_sub: mult_div  */
#line 239 "parser.y"
                            {(yyval.ast) = (yyvsp[0].ast);}
#line 1830 "parser.tab.c"
    break;

  case 80: /* mult_div: mult_div '*' unary  */
#line 243 "parser.y"
                            {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1836 "parser.tab.c"
    break;

  case 81: /* mult_div: mult_div '/' unary  */
#line 244 "parser.y"
                            {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1842 "parser.tab.c"
    break;

  case 82: /* mult_div: mult_div '%' unary  */
#line 245 "parser.y"
                            {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1848 "parser.tab.c"
    break;

  case 83: /* mult_div: exponential  */
#line 246 "parser.y"
                            {(yyval.ast) = (yyvsp[0].ast);}
#line 1854 "parser.tab.c"
    break;

  case 84: /* exponential: exponential '^' unary  */
#line 250 "parser.y"
                            {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1860 "parser.tab.c"
    break;

  case 85: /* exponential: unary  */
#line 251 "parser.y"
                            {(yyval.ast) = (yyvsp[0].ast);}
#line 1866 "parser.tab.c"
    break;

  case 86: /* unary: '*' unary  */
#line 255 "parser.y"
                  {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1872 "parser.tab.c"
    break;

  case 87: /* unary: '&' unary  */
#line 256 "parser.y"
                  {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1878 "parser.tab.c"
    break;

  case 88: /* unary: '#' unary  */
#line 257 "parser.y"
                  {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1884 "parser.tab.c"
    break;

  case 89: /* unary: '?' unary  */
#line 258 "parser.y"
                  {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1890 "parser.tab.c"
    break;

  case 90: /* unary: '!' unary  */
#line 259 "parser.y"
                  {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1896 "parser.tab.c"
    break;

  case 91: /* unary: parenthesis  */
#line 260 "parser.y"
                  {(yyval.ast) = (yyvsp[0].ast);}
#line 1902 "parser.tab.c"
    break;

  case 92: /* parenthesis: '(' expr ')'  */
#line 264 "parser.y"
                   {(yyval.ast) = (yyvsp[-1].ast);}
#line 1908 "parser.tab.c"
    break;

  case 93: /* parenthesis: operand_arit  */
#line 265 "parser.y"
                   {(yyval.ast) = (yyvsp[0].ast);}
#line 1914 "parser.tab.c"
    break;

  case 94: /* flux_control: conditional  */
#line 269 "parser.y"
                   {(yyval.ast) = (yyvsp[0].ast);}
#line 1920 "parser.tab.c"
    break;

  case 95: /* flux_control: iterative  */
#line 270 "parser.y"
                   {(yyval.ast) = (yyvsp[0].ast);}
#line 1926 "parser.tab.c"
    break;

  case 96: /* conditional: TK_PR_IF '(' expr ')' command_block  */
#line 274 "parser.y"
                                          {(yyval.ast) = insert_leaf((yyvsp[-4].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1932 "parser.tab.c"
    break;

  case 97: /* conditional: TK_PR_IF '(' expr ')' command_block TK_PR_ELSE command_block  */
#line 276 "parser.y"
                                                                   {
        (yyval.ast) = insert_leaf((yyvsp[-6].valor_lexico));
        (yyval.ast) = insert_child((yyval.ast), (yyvsp[-4].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1940 "parser.tab.c"
    break;

  case 98: /* iterative: TK_PR_FOR '(' attribution ':' expr ':' attribution ')' command_block  */
#line 282 "parser.y"
                                                                           {
        (yyval.ast) = insert_leaf((yyvsp[-8].valor_lexico));
        (yyval.ast) = insert_child((yyval.ast), (yyvsp[-6].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-4].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));
        (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1949 "parser.tab.c"
    break;

  case 99: /* iterative: TK_PR_WHILE '(' expr ')' TK_PR_DO command_block  */
#line 286 "parser.y"
                                                      {
        (yyval.ast) = insert_leaf((yyvsp[-5].valor_lexico));
        (yyval.ast) = insert_child((yyval.ast), (yyvsp[-3].ast));
        (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1958 "parser.tab.c"
    break;

  case 100: /* input: TK_PR_INPUT id  */
#line 293 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1964 "parser.tab.c"
    break;

  case 101: /* output: TK_PR_OUTPUT id  */
#line 297 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1970 "parser.tab.c"
    break;

  case 102: /* output: TK_PR_OUTPUT literal  */
#line 298 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child ((yyval.ast), (yyvsp[0].ast));}
#line 1976 "parser.tab.c"
    break;

  case 103: /* return: TK_PR_RETURN expr  */
#line 302 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1982 "parser.tab.c"
    break;

  case 104: /* break: TK_PR_BREAK  */
#line 306 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1988 "parser.tab.c"
    break;

  case 105: /* continue: TK_PR_CONTINUE  */
#line 310 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1994 "parser.tab.c"
    break;

  case 106: /* shift: id TK_OC_SL TK_LIT_UINT  */
#line 314 "parser.y"
                               {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), insert_leaf((yyvsp[0].valor_lexico)));}
#line 2000 "parser.tab.c"
    break;

  case 107: /* shift: id TK_OC_SR TK_LIT_UINT  */
#line 315 "parser.y"
                               {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), insert_leaf((yyvsp[0].valor_lexico)));}
#line 2006 "parser.tab.c"
    break;

  case 108: /* shift: vector_attribution TK_OC_SL TK_LIT_UINT  */
#line 316 "parser.y"
                                               {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), insert_leaf((yyvsp[0].valor_lexico)));}
#line 2012 "parser.tab.c"
    break;

  case 109: /* shift: vector_attribution TK_OC_SR TK_LIT_UINT  */
#line 317 "parser.y"
                                               {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), insert_leaf((yyvsp[0].valor_lexico)));}
#line 2018 "parser.tab.c"
    break;

  case 110: /* func_call: id '(' args ')'  */
#line 321 "parser.y"
                      {(yyval.ast) = (yyvsp[-3].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-1].ast));}
#line 2024 "parser.tab.c"
    break;

  case 111: /* args: expr ',' args  */
#line 325 "parser.y"
                     {(yyval.ast) = (yyvsp[-2].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 2030 "parser.tab.c"
    break;

  case 112: /* args: expr  */
#line 326 "parser.y"
                     {(yyval.ast) = (yyvsp[0].ast);}
#line 2036 "parser.tab.c"
    break;

  case 113: /* args: %empty  */
#line 327 "parser.y"
                     {(yyval.ast) = NULL;}
#line 2042 "parser.tab.c"
    break;

  case 114: /* operand_arit: vector_attribution  */
#line 331 "parser.y"
                         { (yyval.ast) = (yyvsp[0].ast);}
#line 2048 "parser.tab.c"
    break;

  case 115: /* operand_arit: id  */
#line 332 "parser.y"
                         { (yyval.ast) = (yyvsp[0].ast);}
#line 2054 "parser.tab.c"
    break;

  case 116: /* operand_arit: TK_LIT_UINT  */
#line 333 "parser.y"
                         { (yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 2060 "parser.tab.c"
    break;

  case 117: /* operand_arit: TK_LIT_INT  */
#line 334 "parser.y"
                         { (yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 2066 "parser.tab.c"
    break;

  case 118: /* operand_arit: TK_LIT_FLOAT  */
#line 335 "parser.y"
                         { (yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 2072 "parser.tab.c"
    break;

  case 119: /* operand_arit: TK_LIT_TRUE  */
#line 336 "parser.y"
                         { (yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 2078 "parser.tab.c"
    break;

  case 120: /* operand_arit: TK_LIT_FALSE  */
#line 337 "parser.y"
                         { (yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 2084 "parser.tab.c"
    break;

  case 121: /* operand_arit: func_call  */
#line 338 "parser.y"
                         { (yyval.ast) = (yyvsp[0].ast);}
#line 2090 "parser.tab.c"
    break;

  case 122: /* type: TK_PR_INT  */
#line 342 "parser.y"
                    {(yyval.ast) = NULL;}
#line 2096 "parser.tab.c"
    break;

  case 123: /* type: TK_PR_FLOAT  */
#line 343 "parser.y"
                    {(yyval.ast) = NULL;}
#line 2102 "parser.tab.c"
    break;

  case 124: /* type: TK_PR_BOOL  */
#line 344 "parser.y"
                    {(yyval.ast) = NULL;}
#line 2108 "parser.tab.c"
    break;

  case 125: /* type: TK_PR_CHAR  */
#line 345 "parser.y"
                    {(yyval.ast) = NULL;}
#line 2114 "parser.tab.c"
    break;

  case 126: /* type: TK_PR_STRING  */
#line 346 "parser.y"
                    {(yyval.ast) = NULL;}
#line 2120 "parser.tab.c"
    break;


#line 2124 "parser.tab.c"

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

#line 348 "parser.y"

