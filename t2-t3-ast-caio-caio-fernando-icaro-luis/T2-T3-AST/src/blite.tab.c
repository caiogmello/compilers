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
#line 1 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"

#include <stdio.h>
#include <stdlib.h>
#include "decl.h"
#include "param_list.h"
#include "expr.h"
#include "type.h"
#include "stmt.h"

extern int yylineno;
void yyerror(const char *);
extern int yylex();

struct decl *parser_result;


#line 88 "blite.tab.c"

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

#include "blite.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_VOID = 3,                       /* VOID  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_BOOL = 5,                       /* BOOL  */
  YYSYMBOL_IF = 6,                         /* IF  */
  YYSYMBOL_ELSE = 7,                       /* ELSE  */
  YYSYMBOL_WHILE = 8,                      /* WHILE  */
  YYSYMBOL_RETURN = 9,                     /* RETURN  */
  YYSYMBOL_TRUE = 10,                      /* TRUE  */
  YYSYMBOL_FALSE = 11,                     /* FALSE  */
  YYSYMBOL_FUNCTION = 12,                  /* FUNCTION  */
  YYSYMBOL_PRINT = 13,                     /* PRINT  */
  YYSYMBOL_ID = 14,                        /* ID  */
  YYSYMBOL_NUMBER = 15,                    /* NUMBER  */
  YYSYMBOL_PLUS = 16,                      /* PLUS  */
  YYSYMBOL_MINUS = 17,                     /* MINUS  */
  YYSYMBOL_TIMES = 18,                     /* TIMES  */
  YYSYMBOL_DIVIDE = 19,                    /* DIVIDE  */
  YYSYMBOL_ASSIGN = 20,                    /* ASSIGN  */
  YYSYMBOL_LT = 21,                        /* LT  */
  YYSYMBOL_GT = 22,                        /* GT  */
  YYSYMBOL_LTE = 23,                       /* LTE  */
  YYSYMBOL_EQ = 24,                        /* EQ  */
  YYSYMBOL_NEQ = 25,                       /* NEQ  */
  YYSYMBOL_GTE = 26,                       /* GTE  */
  YYSYMBOL_OPENP = 27,                     /* OPENP  */
  YYSYMBOL_CLOSEP = 28,                    /* CLOSEP  */
  YYSYMBOL_COLON = 29,                     /* COLON  */
  YYSYMBOL_SEMIC = 30,                     /* SEMIC  */
  YYSYMBOL_COMMA = 31,                     /* COMMA  */
  YYSYMBOL_OPENB = 32,                     /* OPENB  */
  YYSYMBOL_CLOSEB = 33,                    /* CLOSEB  */
  YYSYMBOL_QUOTE = 34,                     /* QUOTE  */
  YYSYMBOL_ERROR = 35,                     /* ERROR  */
  YYSYMBOL_YYACCEPT = 36,                  /* $accept  */
  YYSYMBOL_program = 37,                   /* program  */
  YYSYMBOL_declarations = 38,              /* declarations  */
  YYSYMBOL_declaration = 39,               /* declaration  */
  YYSYMBOL_type = 40,                      /* type  */
  YYSYMBOL_void_type = 41,                 /* void_type  */
  YYSYMBOL_func_declaration = 42,          /* func_declaration  */
  YYSYMBOL_params = 43,                    /* params  */
  YYSYMBOL_param_list = 44,                /* param_list  */
  YYSYMBOL_parameter = 45,                 /* parameter  */
  YYSYMBOL_local_declarations = 46,        /* local_declarations  */
  YYSYMBOL_var_declaration = 47,           /* var_declaration  */
  YYSYMBOL_block = 48,                     /* block  */
  YYSYMBOL_statements = 49,                /* statements  */
  YYSYMBOL_statement = 50,                 /* statement  */
  YYSYMBOL_expression_statement = 51,      /* expression_statement  */
  YYSYMBOL_if_statement = 52,              /* if_statement  */
  YYSYMBOL_function_call = 53,             /* function_call  */
  YYSYMBOL_argument_list = 54,             /* argument_list  */
  YYSYMBOL_while_statement = 55,           /* while_statement  */
  YYSYMBOL_var = 56,                       /* var  */
  YYSYMBOL_print_statement = 57,           /* print_statement  */
  YYSYMBOL_expression_list = 58,           /* expression_list  */
  YYSYMBOL_return_statement = 59,          /* return_statement  */
  YYSYMBOL_expression = 60,                /* expression  */
  YYSYMBOL_condition = 61,                 /* condition  */
  YYSYMBOL_term = 62,                      /* term  */
  YYSYMBOL_factor = 63                     /* factor  */
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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   181

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  135

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   290


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
      35
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    72,    72,    77,    78,    82,    83,    87,    88,    92,
      95,    96,   102,   103,   107,   108,   112,   117,   118,   124,
     125,   132,   133,   140,   141,   145,   146,   147,   148,   149,
     150,   156,   161,   162,   167,   171,   172,   178,   183,   189,
     193,   194,   199,   200,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   230,   231,   232,   236,   237,   238,   239,
     240,   241
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
  "\"end of file\"", "error", "\"invalid token\"", "VOID", "INT", "BOOL",
  "IF", "ELSE", "WHILE", "RETURN", "TRUE", "FALSE", "FUNCTION", "PRINT",
  "ID", "NUMBER", "PLUS", "MINUS", "TIMES", "DIVIDE", "ASSIGN", "LT", "GT",
  "LTE", "EQ", "NEQ", "GTE", "OPENP", "CLOSEP", "COLON", "SEMIC", "COMMA",
  "OPENB", "CLOSEB", "QUOTE", "ERROR", "$accept", "program",
  "declarations", "declaration", "type", "void_type", "func_declaration",
  "params", "param_list", "parameter", "local_declarations",
  "var_declaration", "block", "statements", "statement",
  "expression_statement", "if_statement", "function_call", "argument_list",
  "while_statement", "var", "print_statement", "expression_list",
  "return_statement", "expression", "condition", "term", "factor", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-80)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       1,    -9,    39,     1,   -80,   -80,   -80,    57,   -80,   -80,
     -80,   -80,   152,    -8,   -80,    16,    19,    -4,   -80,    43,
      43,   -80,   -80,    26,   -80,    -4,   -80,    40,   -12,   146,
     -80,    38,    48,    80,   -80,    60,    -4,     0,    -4,    -4,
      -4,   -80,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,
      59,   101,    43,   106,   102,   119,    68,   -80,    68,   -80,
      62,    62,   -80,   -80,    62,    62,    62,    62,    62,    62,
     -80,   100,   -80,   100,   -80,    -4,   114,   -80,   -80,    68,
     125,   126,   124,    -4,    22,   114,   -80,   -80,    64,   -80,
     -80,   -80,   -80,   -80,   -80,    -3,    -4,    -4,   -80,    25,
      78,    59,   -80,   104,   -80,   -80,   -80,    28,   155,    73,
     -80,   -80,   -80,    -4,    -4,   134,    -4,    -4,    -4,    -4,
      -4,    -4,   100,    62,    62,   151,    62,    62,    62,    62,
      62,    62,   -80,   134,   -80
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     2,     3,     5,     6,     0,     1,     4,
       7,     8,     0,     0,     9,     0,     0,     0,    19,    12,
      12,    67,    68,    38,    66,     0,    71,    69,     0,    44,
      65,     0,     0,    13,    14,     0,    35,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    36,    40,    70,    53,    69,
      45,    46,    63,    64,    47,    48,    49,    50,    51,    52,
      16,     0,    15,     0,    34,     0,     0,    10,    11,    41,
       0,     0,     0,     0,    38,     0,    17,    29,     0,    23,
      30,    25,    26,    27,    28,     0,     0,     0,    43,     0,
       0,     0,    18,     0,    22,    24,    31,     0,    54,     0,
      42,    39,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    55,    56,    32,    57,    58,    59,    60,
      61,    62,    37,     0,    33
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -80,   -80,   -80,   130,   -10,   -80,   -80,   139,   -80,   108,
     -80,   -38,   -70,    77,   -79,   -80,   -80,   -80,   -80,   -80,
     -17,   -80,    92,   -80,    12,    66,   -14,    50
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     3,     4,    13,    16,     5,    32,    33,    34,
      85,     6,    87,    88,    89,    90,    91,    26,    54,    92,
      59,    93,    55,    94,    95,   107,    29,    30
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      27,    77,    15,    78,    39,    40,    21,    22,    27,   105,
      23,    24,    17,    39,    40,     1,    39,    40,    41,    27,
       7,    27,    18,    25,   105,    60,    61,   106,    57,    28,
      64,    65,    66,    67,    68,    69,   125,    37,    86,     8,
      70,    39,    40,    19,   113,   114,    20,   102,    56,    36,
      58,   101,   132,    36,   134,   110,   115,    31,    27,    27,
      38,    10,    11,    10,    11,    27,    27,    50,    27,    12,
      80,    27,    81,    82,    21,    22,    51,    83,    23,    24,
      42,    43,   108,   108,    39,    40,    27,    79,    53,   113,
     114,    25,    62,    63,    99,    56,    76,   104,    27,   123,
     124,   122,   126,   127,   128,   129,   130,   131,   111,    75,
      80,    52,    81,    82,    21,    22,    27,    83,    23,    24,
      80,    71,    81,    82,    21,    22,    73,    83,    84,    24,
      74,    25,    76,     9,    21,    22,    76,   112,    23,    24,
      80,    25,    81,    82,    21,    22,    76,    83,    23,    24,
      75,    25,    96,    97,    98,    14,    10,    11,   133,    35,
      72,    25,   103,   109,    42,    43,    76,    44,    45,    46,
      47,    48,    49,    42,    43,   100,   116,   117,   118,   119,
     120,   121
};

static const yytype_uint8 yycheck[] =
{
      17,    71,    12,    73,    16,    17,    10,    11,    25,    88,
      14,    15,    20,    16,    17,    14,    16,    17,    30,    36,
      29,    38,    30,    27,   103,    39,    40,    30,    28,    17,
      44,    45,    46,    47,    48,    49,   115,    25,    76,     0,
      50,    16,    17,    27,    16,    17,    27,    85,    36,    27,
      38,    29,   122,    27,   133,    30,    28,    14,    75,    76,
      20,     4,     5,     4,     5,    82,    83,    29,    85,    12,
       6,    88,     8,     9,    10,    11,    28,    13,    14,    15,
      18,    19,    96,    97,    16,    17,   103,    75,    28,    16,
      17,    27,    42,    43,    82,    83,    32,    33,   115,   113,
     114,    28,   116,   117,   118,   119,   120,   121,    30,    31,
       6,    31,     8,     9,    10,    11,   133,    13,    14,    15,
       6,    20,     8,     9,    10,    11,    20,    13,    14,    15,
      28,    27,    32,     3,    10,    11,    32,    33,    14,    15,
       6,    27,     8,     9,    10,    11,    32,    13,    14,    15,
      31,    27,    27,    27,    30,     3,     4,     5,     7,    20,
      52,    27,    85,    97,    18,    19,    32,    21,    22,    23,
      24,    25,    26,    18,    19,    83,    21,    22,    23,    24,
      25,    26
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    14,    37,    38,    39,    42,    47,    29,     0,    39,
       4,     5,    12,    40,     3,    40,    41,    20,    30,    27,
      27,    10,    11,    14,    15,    27,    53,    56,    60,    62,
      63,    14,    43,    44,    45,    43,    27,    60,    20,    16,
      17,    30,    18,    19,    21,    22,    23,    24,    25,    26,
      29,    28,    31,    28,    54,    58,    60,    28,    60,    56,
      62,    62,    63,    63,    62,    62,    62,    62,    62,    62,
      40,    20,    45,    20,    28,    31,    32,    48,    48,    60,
       6,     8,     9,    13,    14,    46,    47,    48,    49,    50,
      51,    52,    55,    57,    59,    60,    27,    27,    30,    60,
      58,    29,    47,    49,    33,    50,    30,    61,    62,    61,
      30,    30,    33,    16,    17,    28,    21,    22,    23,    24,
      25,    26,    28,    62,    62,    50,    62,    62,    62,    62,
      62,    62,    48,     7,    50
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    36,    37,    38,    38,    39,    39,    40,    40,    41,
      42,    42,    43,    43,    44,    44,    45,    46,    46,    47,
      47,    48,    48,    49,    49,    50,    50,    50,    50,    50,
      50,    51,    52,    52,    53,    54,    54,    55,    56,    57,
      58,    58,    59,    59,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    62,    62,    62,    63,    63,    63,    63,
      63,    63
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       9,     9,     0,     1,     1,     3,     3,     1,     2,     4,
       6,     4,     3,     1,     2,     1,     1,     1,     1,     1,
       1,     2,     5,     7,     4,     0,     1,     5,     1,     3,
       1,     3,     3,     2,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     1,     1,
       3,     1
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
  case 2: /* program: declarations  */
#line 72 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
               { parser_result = (yyvsp[0].decl); (yyval.decl) = (yyvsp[0].decl);}
#line 1237 "blite.tab.c"
    break;

  case 3: /* declarations: declaration  */
#line 77 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
              { (yyval.decl) = (yyvsp[0].decl);}
#line 1243 "blite.tab.c"
    break;

  case 4: /* declarations: declarations declaration  */
#line 78 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
                           { (yyval.decl) = insert_decl((yyvsp[-1].decl), (yyvsp[0].decl)); }
#line 1249 "blite.tab.c"
    break;

  case 5: /* declaration: func_declaration  */
#line 82 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
                   { (yyval.decl) = (yyvsp[0].decl); }
#line 1255 "blite.tab.c"
    break;

  case 6: /* declaration: var_declaration  */
#line 83 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
                  { (yyval.decl) = (yyvsp[0].decl); }
#line 1261 "blite.tab.c"
    break;

  case 7: /* type: INT  */
#line 87 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
      { (yyval.type) = type_create(TYPE_INTEGER,0,0); }
#line 1267 "blite.tab.c"
    break;

  case 8: /* type: BOOL  */
#line 88 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
       { (yyval.type) = type_create(TYPE_BOOLEAN,0,0); }
#line 1273 "blite.tab.c"
    break;

  case 9: /* void_type: VOID  */
#line 92 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
       { (yyval.type) = type_create(TYPE_VOID,0,0); }
#line 1279 "blite.tab.c"
    break;

  case 10: /* func_declaration: ID COLON FUNCTION type OPENP params CLOSEP ASSIGN block  */
#line 95 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
                                                          { (yyval.decl) = func_decl_create((yyvsp[-8].name), (yyvsp[-5].type), (yyvsp[-3].param), (yyvsp[0].stmt)); }
#line 1285 "blite.tab.c"
    break;

  case 11: /* func_declaration: ID COLON FUNCTION void_type OPENP params CLOSEP ASSIGN block  */
#line 96 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
                                                               { (yyval.decl) = func_decl_create((yyvsp[-8].name), (yyvsp[-5].type), (yyvsp[-3].param), (yyvsp[0].stmt)); }
#line 1291 "blite.tab.c"
    break;

  case 12: /* params: %empty  */
#line 102 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
              { (yyval.param) = (struct param_list *) 0; }
#line 1297 "blite.tab.c"
    break;

  case 13: /* params: param_list  */
#line 103 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
             { (yyval.param) = (yyvsp[0].param); }
#line 1303 "blite.tab.c"
    break;

  case 14: /* param_list: parameter  */
#line 107 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
            { (yyval.param) = (yyvsp[0].param);}
#line 1309 "blite.tab.c"
    break;

  case 15: /* param_list: param_list COMMA parameter  */
#line 108 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
                             { (yyval.param) = insert_param((yyvsp[-2].param), (yyvsp[0].param));}
#line 1315 "blite.tab.c"
    break;

  case 16: /* parameter: ID COLON type  */
#line 112 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
                { (yyval.param) = param_create((yyvsp[-2].name), (yyvsp[0].type));}
#line 1321 "blite.tab.c"
    break;

  case 17: /* local_declarations: var_declaration  */
#line 117 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
                  { (yyval.decl) = (yyvsp[0].decl); }
#line 1327 "blite.tab.c"
    break;

  case 18: /* local_declarations: local_declarations var_declaration  */
#line 118 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
                                     { (yyval.decl) = insert_decl((yyvsp[-1].decl), (yyvsp[0].decl)); }
#line 1333 "blite.tab.c"
    break;

  case 19: /* var_declaration: ID COLON type SEMIC  */
#line 124 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
                      { (yyval.decl) = var_decl_create((yyvsp[-3].name), (yyvsp[-1].type), 0); }
#line 1339 "blite.tab.c"
    break;

  case 20: /* var_declaration: ID COLON type ASSIGN expression SEMIC  */
#line 125 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
                                        { (yyval.decl) = var_decl_create((yyvsp[-5].name), (yyvsp[-3].type), (yyvsp[-1].expr)); }
#line 1345 "blite.tab.c"
    break;

  case 21: /* block: OPENB local_declarations statements CLOSEB  */
#line 132 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
                                             { (yyval.stmt) = compound_stmt_create(STMT_BLOCK, (yyvsp[-2].decl), (yyvsp[-1].stmt)); }
#line 1351 "blite.tab.c"
    break;

  case 22: /* block: OPENB statements CLOSEB  */
#line 133 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
                          { (yyval.stmt) = stmt_create(STMT_BLOCK, 0, 0, 0, 0,(yyvsp[-1].stmt),0,0); }
#line 1357 "blite.tab.c"
    break;

  case 23: /* statements: statement  */
#line 140 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
            { (yyval.stmt) = (yyvsp[0].stmt);}
#line 1363 "blite.tab.c"
    break;

  case 24: /* statements: statements statement  */
#line 141 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
                       { (yyval.stmt) = insert_stmt((yyvsp[-1].stmt), (yyvsp[0].stmt)); }
#line 1369 "blite.tab.c"
    break;

  case 25: /* statement: if_statement  */
#line 145 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
               { (yyval.stmt) = (yyvsp[0].stmt);}
#line 1375 "blite.tab.c"
    break;

  case 26: /* statement: while_statement  */
#line 146 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
                  { (yyval.stmt) = (yyvsp[0].stmt);}
#line 1381 "blite.tab.c"
    break;

  case 27: /* statement: print_statement  */
#line 147 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
                  { (yyval.stmt) = (yyvsp[0].stmt);}
#line 1387 "blite.tab.c"
    break;

  case 28: /* statement: return_statement  */
#line 148 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
                   { (yyval.stmt) = (yyvsp[0].stmt);}
#line 1393 "blite.tab.c"
    break;

  case 29: /* statement: block  */
#line 149 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
        { (yyval.stmt) = (yyvsp[0].stmt);}
#line 1399 "blite.tab.c"
    break;

  case 30: /* statement: expression_statement  */
#line 150 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
                        { (yyval.stmt) = (yyvsp[0].stmt);}
#line 1405 "blite.tab.c"
    break;

  case 31: /* expression_statement: expression SEMIC  */
#line 156 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
                   { (yyval.stmt) = stmt_create(STMT_EXPR, 0, 0, (yyvsp[-1].expr), 0,0,0,0);}
#line 1411 "blite.tab.c"
    break;

  case 32: /* if_statement: IF OPENP condition CLOSEP statement  */
#line 161 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
                                      { (yyval.stmt) = if_create((yyvsp[-2].expr), (yyvsp[0].stmt));}
#line 1417 "blite.tab.c"
    break;

  case 33: /* if_statement: IF OPENP condition CLOSEP statement ELSE statement  */
#line 162 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
                                                     { (yyval.stmt) = if_else_create((yyvsp[-4].expr), (yyvsp[-2].stmt), (yyvsp[0].stmt));}
#line 1423 "blite.tab.c"
    break;

  case 34: /* function_call: ID OPENP argument_list CLOSEP  */
#line 167 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
                                { (yyval.expr) = expr_create_call((yyvsp[-3].name), (yyvsp[-1].expr)); }
#line 1429 "blite.tab.c"
    break;

  case 35: /* argument_list: %empty  */
#line 171 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
  { (yyval.expr) = (struct expr *) 0; }
#line 1435 "blite.tab.c"
    break;

  case 36: /* argument_list: expression_list  */
#line 172 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
                  { (yyval.expr) = (yyvsp[0].expr);}
#line 1441 "blite.tab.c"
    break;

  case 37: /* while_statement: WHILE OPENP condition CLOSEP block  */
#line 178 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
                                     { (yyval.stmt) = while_create((yyvsp[-2].expr), (yyvsp[0].stmt));}
#line 1447 "blite.tab.c"
    break;

  case 38: /* var: ID  */
#line 183 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
     { (yyval.expr) = expr_create_var((yyvsp[0].name)); }
#line 1453 "blite.tab.c"
    break;

  case 39: /* print_statement: PRINT expression_list SEMIC  */
#line 189 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
                              { (yyval.stmt) = print_stmt_create((yyvsp[-1].expr));}
#line 1459 "blite.tab.c"
    break;

  case 40: /* expression_list: expression  */
#line 193 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
             { (yyval.expr) = expr_create_arg((yyvsp[0].expr),0);}
#line 1465 "blite.tab.c"
    break;

  case 41: /* expression_list: expression_list COMMA expression  */
#line 194 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
                                   { (yyval.expr) = expr_create_arg((yyvsp[0].expr),(yyvsp[-2].expr));}
#line 1471 "blite.tab.c"
    break;

  case 42: /* return_statement: RETURN expression SEMIC  */
#line 199 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
                          { (yyval.stmt) = stmt_create(STMT_RETURN,0,0,(yyvsp[-1].expr),0,0,0,0); }
#line 1477 "blite.tab.c"
    break;

  case 43: /* return_statement: RETURN SEMIC  */
#line 200 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
               { (yyval.stmt) = stmt_create(STMT_RETURN,0,0,0,0,0,0,0); }
#line 1483 "blite.tab.c"
    break;

  case 44: /* expression: term  */
#line 205 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
       { (yyval.expr) = (yyvsp[0].expr);}
#line 1489 "blite.tab.c"
    break;

  case 45: /* expression: expression PLUS term  */
#line 206 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
                       { (yyval.expr) = expr_create(EXPR_ADD, (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1495 "blite.tab.c"
    break;

  case 46: /* expression: expression MINUS term  */
#line 207 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
                         { (yyval.expr) = expr_create(EXPR_SUB, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1501 "blite.tab.c"
    break;

  case 47: /* expression: term LT term  */
#line 208 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
               { (yyval.expr) = expr_create(EXPR_LT, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1507 "blite.tab.c"
    break;

  case 48: /* expression: term GT term  */
#line 209 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
               { (yyval.expr) = expr_create(EXPR_GT, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1513 "blite.tab.c"
    break;

  case 49: /* expression: term LTE term  */
#line 210 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
                { (yyval.expr) = expr_create(EXPR_LTEQ, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1519 "blite.tab.c"
    break;

  case 50: /* expression: term EQ term  */
#line 211 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
               { (yyval.expr) = expr_create(EXPR_EQ, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1525 "blite.tab.c"
    break;

  case 51: /* expression: term NEQ term  */
#line 212 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
                { (yyval.expr) = expr_create(EXPR_NEQ, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1531 "blite.tab.c"
    break;

  case 52: /* expression: term GTE term  */
#line 213 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
                { (yyval.expr) = expr_create(EXPR_GTEQ, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1537 "blite.tab.c"
    break;

  case 53: /* expression: var ASSIGN expression  */
#line 214 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
                        { (yyval.expr) = expr_create(EXPR_ASSIGN, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1543 "blite.tab.c"
    break;

  case 54: /* condition: term  */
#line 218 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
       { (yyval.expr) = (yyvsp[0].expr);}
#line 1549 "blite.tab.c"
    break;

  case 55: /* condition: condition PLUS term  */
#line 219 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
                      { (yyval.expr) = expr_create(EXPR_ADD, (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1555 "blite.tab.c"
    break;

  case 56: /* condition: condition MINUS term  */
#line 220 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
                        { (yyval.expr) = expr_create(EXPR_SUB, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1561 "blite.tab.c"
    break;

  case 57: /* condition: term LT term  */
#line 221 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
               { (yyval.expr) = expr_create(EXPR_LT, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1567 "blite.tab.c"
    break;

  case 58: /* condition: term GT term  */
#line 222 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
               { (yyval.expr) = expr_create(EXPR_GT, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1573 "blite.tab.c"
    break;

  case 59: /* condition: term LTE term  */
#line 223 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
                { (yyval.expr) = expr_create(EXPR_LTEQ, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1579 "blite.tab.c"
    break;

  case 60: /* condition: term EQ term  */
#line 224 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
               { (yyval.expr) = expr_create(EXPR_EQ, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1585 "blite.tab.c"
    break;

  case 61: /* condition: term NEQ term  */
#line 225 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
                { (yyval.expr) = expr_create(EXPR_NEQ, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1591 "blite.tab.c"
    break;

  case 62: /* condition: term GTE term  */
#line 226 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
                { (yyval.expr) = expr_create(EXPR_GTEQ, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1597 "blite.tab.c"
    break;

  case 63: /* term: term TIMES factor  */
#line 230 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
                    { (yyval.expr) = expr_create(EXPR_MUL, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1603 "blite.tab.c"
    break;

  case 64: /* term: term DIVIDE factor  */
#line 231 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
                     { (yyval.expr) = expr_create(EXPR_DIV, (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1609 "blite.tab.c"
    break;

  case 65: /* term: factor  */
#line 232 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
         { (yyval.expr) = (yyvsp[0].expr); }
#line 1615 "blite.tab.c"
    break;

  case 66: /* factor: NUMBER  */
#line 236 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
         { (yyval.expr) = create_integer_literal((yyvsp[0].d)); }
#line 1621 "blite.tab.c"
    break;

  case 67: /* factor: TRUE  */
#line 237 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
       { (yyval.expr) = create_boolean_literal(1); }
#line 1627 "blite.tab.c"
    break;

  case 68: /* factor: FALSE  */
#line 238 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
        { (yyval.expr) = create_boolean_literal(0); }
#line 1633 "blite.tab.c"
    break;

  case 69: /* factor: var  */
#line 239 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
      { (yyval.expr) = (yyvsp[0].expr); }
#line 1639 "blite.tab.c"
    break;

  case 70: /* factor: OPENP expression CLOSEP  */
#line 240 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
                          { (yyval.expr) = (yyvsp[-1].expr);}
#line 1645 "blite.tab.c"
    break;

  case 71: /* factor: function_call  */
#line 241 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"
                 { (yyval.expr) = (yyvsp[0].expr);}
#line 1651 "blite.tab.c"
    break;


#line 1655 "blite.tab.c"

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

#line 244 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"


void yyerror(const char *s) {
   fprintf(stdout, "%s\n", s);
}

