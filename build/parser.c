/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

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

#include <stdio.h>
#include "main.h"
#include <time.h>
clock_t sec;


#line 74 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:339  */

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
   by #include "parser.h".  */
#ifndef YY_YY_HOME_MANDIOW_REA_DE_TRABALHO_MONT_BUILD_PARSER_H_INCLUDED
# define YY_YY_HOME_MANDIOW_REA_DE_TRABALHO_MONT_BUILD_PARSER_H_INCLUDED
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
    TK_PR_INT = 258,
    TK_PR_FLOAT = 259,
    TK_PR_BOOL = 260,
    TK_PR_CHAR = 261,
    TK_PR_STRING = 262,
    TK_PR_IF = 263,
    TK_PR_THEN = 264,
    TK_PR_ELSE = 265,
    TK_PR_WHILE = 266,
    TK_PR_DO = 267,
    TK_PR_INPUT = 268,
    TK_PR_OUTPUT = 269,
    TK_PR_RETURN = 270,
    TK_PR_STATIC = 271,
    TK_PR_CONST = 272,
    TK_OC_LE = 273,
    TK_OC_GE = 274,
    TK_OC_EQ = 275,
    TK_OC_NE = 276,
    TK_OC_AND = 277,
    TK_OC_OR = 278,
    TK_OC_NOT = 279,
    TK_LIT_INT = 280,
    TK_LIT_FLOAT = 281,
    TK_LIT_FALSE = 282,
    TK_LIT_TRUE = 283,
    TK_LIT_CHAR = 284,
    TK_LIT_STRING = 285,
    TK_IDENTIFICADOR = 286,
    TOKEN_ERRO = 287,
    LOWER_THAN_ELSE = 288
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 13 "parser.y" /* yacc.c:355  */

	struct comp_tree_t *syntaxTree;
	struct comp_dict_item_t *valor_simbolo_lexico;


#line 154 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_HOME_MANDIOW_REA_DE_TRABALHO_MONT_BUILD_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 169 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:358  */

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
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   187

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  164

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   288

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    43,     2,     2,     2,    33,     2,     2,
      48,    49,    38,    34,    50,    35,     2,    39,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    45,
      37,    40,    36,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    46,     2,    47,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    41,     2,    42,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    44
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    98,    98,   114,   115,   116,   120,   121,   122,   126,
     127,   131,   132,   133,   134,   135,   136,   140,   141,   142,
     143,   144,   148,   149,   150,   151,   152,   153,   158,   159,
     163,   164,   172,   177,   178,   187,   188,   189,   195,   196,
     197,   198,   199,   200,   201,   202,   206,   207,   211,   212,
     216,   217,   221,   225,   229,   230,   234,   241,   242,   247,
     248,   249,   250,   260,   263,   267,   268,   269,   270,   271,
     275,   276,   277,   278,   279,   280,   281,   282,   286,   298,
     306,   313,   314,   315,   331,   336,   337,   338
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TK_PR_INT", "TK_PR_FLOAT", "TK_PR_BOOL",
  "TK_PR_CHAR", "TK_PR_STRING", "TK_PR_IF", "TK_PR_THEN", "TK_PR_ELSE",
  "TK_PR_WHILE", "TK_PR_DO", "TK_PR_INPUT", "TK_PR_OUTPUT", "TK_PR_RETURN",
  "TK_PR_STATIC", "TK_PR_CONST", "TK_OC_LE", "TK_OC_GE", "TK_OC_EQ",
  "TK_OC_NE", "TK_OC_AND", "TK_OC_OR", "TK_OC_NOT", "TK_LIT_INT",
  "TK_LIT_FLOAT", "TK_LIT_FALSE", "TK_LIT_TRUE", "TK_LIT_CHAR",
  "TK_LIT_STRING", "TK_IDENTIFICADOR", "TOKEN_ERRO", "'%'", "'+'", "'-'",
  "'>'", "'<'", "'*'", "'/'", "'='", "'{'", "'}'", "'!'",
  "LOWER_THAN_ELSE", "';'", "'['", "']'", "'('", "')'", "','", "$accept",
  "start", "programa", "declaracao_global", "declarar_funcao", "literal",
  "especificador_tipo", "declaracao_local", "valor", "ID", "atribuicao",
  "retorno", "bloco_comando", "comando", "parametros_vazio", "parametros",
  "lista_parametros", "entrada", "saida", "lista_vazia",
  "lista_expressoes", "mais_de_uma", "controle_fluxo", "chamada_funcao",
  "nome", "operador_aritmetico", "operador_logico", "expressao", "inverte",
  "tem_operador", YY_NULLPTR
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
     285,   286,   287,    37,    43,    45,    62,    60,    42,    47,
      61,   123,   125,    33,   288,    59,    91,    93,    40,    41,
      44
};
# endif

#define YYPACT_NINF -101

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-101)))

#define YYTABLE_NINF -65

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     164,  -101,  -101,  -101,  -101,  -101,    74,    25,  -101,   -16,
     164,     7,     9,  -101,   164,  -101,   -27,   -24,  -101,    10,
      67,    18,    67,    -5,    74,    16,    -1,  -101,     0,     2,
       8,  -101,    22,  -101,    20,    67,  -101,    23,  -101,    83,
    -101,    83,    15,    21,    83,   104,   104,   104,   159,    74,
     -20,    83,    37,  -101,    52,  -101,  -101,    51,    56,  -101,
    -101,  -101,  -101,    55,    62,   104,   104,    95,   104,  -101,
    -101,  -101,  -101,  -101,  -101,  -101,   104,   122,   122,   122,
      70,   156,  -101,    63,  -101,    74,    86,    87,   104,    78,
     103,   104,  -101,    83,   104,  -101,    73,    76,    88,  -101,
      77,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,
    -101,  -101,  -101,  -101,   104,   104,  -101,  -101,  -101,   101,
    -101,  -101,   122,   104,  -101,   107,   128,   129,   102,  -101,
     156,  -101,  -101,    99,  -101,   141,   139,   104,   122,  -101,
    -101,   104,  -101,  -101,   135,   156,   156,  -101,  -101,  -101,
      83,    83,   105,  -101,  -101,   156,  -101,  -101,   162,  -101,
    -101,  -101,    83,  -101
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,    17,    18,    19,    20,    21,     0,     0,     2,     0,
       5,     0,     0,     1,     5,     4,     7,     0,     3,     0,
      47,     0,    47,     0,     0,     0,     0,    46,    49,     0,
       0,     6,     0,    50,     0,     0,     8,     0,    51,    37,
      48,    37,     0,     0,     0,     0,     0,    34,     0,     0,
      30,    37,     0,    40,     0,    39,    38,     0,    36,    43,
      45,    41,    44,     0,     0,     0,     0,     0,     0,    11,
      12,    13,    14,    15,    16,    84,     0,    87,    87,    87,
       0,     0,    53,    58,    33,     0,     0,     0,     0,     0,
      22,     0,     9,    37,    55,    10,     0,     0,     0,    81,
       0,    70,    71,    72,    73,    74,    75,    69,    65,    66,
      77,    76,    67,    68,     0,     0,    78,    79,    80,     0,
      29,    28,    87,     0,    56,     0,    24,     0,     0,    42,
       0,    32,    35,     0,    54,     0,     0,     0,    87,    85,
      86,     0,    83,    57,     0,     0,     0,    31,    23,    63,
       0,     0,     0,    82,    52,     0,    25,    27,    60,    61,
      62,    26,     0,    59
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -101,  -101,     4,  -101,  -101,   -70,    17,  -101,  -100,   -39,
    -101,  -101,   -31,   -43,   151,   140,  -101,  -101,  -101,  -101,
     -91,  -101,  -101,   -35,  -101,  -101,  -101,   -32,  -101,   -71
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    10,    77,    52,    53,   122,    78,
      55,    56,    57,    58,    26,    27,    28,    59,    60,   133,
      82,   124,    61,    79,    63,   114,   115,    83,    81,   116
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      54,    67,    54,   134,    62,    54,    62,   117,   118,    62,
      64,   121,    54,    80,    15,    84,    62,    11,    18,    19,
      89,    20,    21,    12,    22,    13,    88,    11,   -64,    14,
     148,    11,   143,    96,    97,    23,    99,    25,    16,    25,
      17,    32,    31,    29,   100,   156,   157,    33,    34,    36,
      35,   142,    25,    38,    54,   161,   128,    37,    62,   131,
     121,    39,   132,    65,    41,    86,    87,   153,    90,    66,
       1,     2,     3,     4,     5,   121,   121,     1,     2,     3,
       4,     5,   139,   140,    24,   121,     1,     2,     3,     4,
       5,    42,    91,    92,    43,    44,    45,    46,    47,    48,
      49,    93,   125,    94,    95,   152,    98,   158,   159,   154,
     119,    54,    54,   123,    50,    62,    62,   126,   127,   163,
     129,   130,   135,    54,    51,   136,   138,    62,    68,    69,
      70,    71,    72,    73,    74,    50,   137,   141,   144,    75,
     101,   102,   103,   104,   105,   106,   145,   146,   149,   147,
     150,   151,    76,   155,   160,   107,   108,   109,   110,   111,
     112,   113,     1,     2,     3,     4,     5,     1,     2,     3,
       4,     5,   162,    30,     0,    40,    85,     0,     0,     0,
       6,    69,    70,    71,    72,    73,    74,   120
};

static const yytype_int16 yycheck[] =
{
      39,    44,    41,    94,    39,    44,    41,    78,    79,    44,
      41,    81,    51,    45,    10,    47,    51,     0,    14,    46,
      51,    48,    46,     6,    48,     0,    46,    10,    48,    45,
     130,    14,   123,    65,    66,    25,    68,    20,    31,    22,
      31,    24,    47,    25,    76,   145,   146,    31,    49,    47,
      50,   122,    35,    31,    93,   155,    88,    49,    93,    91,
     130,    41,    93,    48,    41,    48,    49,   138,    31,    48,
       3,     4,     5,     6,     7,   145,   146,     3,     4,     5,
       6,     7,   114,   115,    17,   155,     3,     4,     5,     6,
       7,     8,    40,    42,    11,    12,    13,    14,    15,    16,
      17,    45,    85,    48,    42,   137,    11,   150,   151,   141,
      40,   150,   151,    50,    31,   150,   151,    31,    31,   162,
      42,    18,    49,   162,    41,    49,    49,   162,    24,    25,
      26,    27,    28,    29,    30,    31,    48,    36,    31,    35,
      18,    19,    20,    21,    22,    23,    18,    18,    49,    47,
       9,    12,    48,    18,    49,    33,    34,    35,    36,    37,
      38,    39,     3,     4,     5,     6,     7,     3,     4,     5,
       6,     7,    10,    22,    -1,    35,    17,    -1,    -1,    -1,
      16,    25,    26,    27,    28,    29,    30,    31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,    16,    52,    53,    54,
      55,    57,    57,     0,    45,    53,    31,    31,    53,    46,
      48,    46,    48,    25,    17,    57,    65,    66,    67,    25,
      65,    47,    57,    31,    49,    50,    47,    49,    31,    41,
      66,    41,     8,    11,    12,    13,    14,    15,    16,    17,
      31,    41,    57,    58,    60,    61,    62,    63,    64,    68,
      69,    73,    74,    75,    63,    48,    48,    64,    24,    25,
      26,    27,    28,    29,    30,    35,    48,    56,    60,    74,
      78,    79,    71,    78,    78,    17,    57,    57,    46,    63,
      31,    40,    42,    45,    48,    42,    78,    78,    11,    78,
      78,    18,    19,    20,    21,    22,    23,    33,    34,    35,
      36,    37,    38,    39,    76,    77,    80,    80,    80,    40,
      31,    56,    59,    50,    72,    57,    31,    31,    78,    42,
      18,    78,    63,    70,    71,    49,    49,    48,    49,    78,
      78,    36,    80,    71,    31,    18,    18,    47,    59,    49,
       9,    12,    78,    80,    78,    18,    59,    59,    64,    64,
      49,    59,    10,    64
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    53,    53,    53,    54,    54,    54,    55,
      55,    56,    56,    56,    56,    56,    56,    57,    57,    57,
      57,    57,    58,    58,    58,    58,    58,    58,    59,    59,
      60,    60,    61,    62,    62,    63,    63,    63,    64,    64,
      64,    64,    64,    64,    64,    64,    65,    65,    66,    66,
      67,    67,    68,    69,    70,    70,    71,    72,    72,    73,
      73,    73,    73,    74,    75,    76,    76,    76,    76,    76,
      77,    77,    77,    77,    77,    77,    77,    77,    78,    78,
      78,    78,    78,    78,    79,    80,    80,    80
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     2,     0,     5,     2,     6,     8,
       9,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     4,     3,     5,     6,     5,     1,     1,
       1,     4,     3,     2,     1,     3,     1,     0,     1,     1,
       1,     1,     3,     1,     1,     1,     1,     0,     3,     1,
       2,     3,     5,     2,     1,     0,     2,     2,     0,     8,
       6,     6,     6,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     2,     4,     3,     1,     2,     2,     0
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
#line 98 "parser.y" /* yacc.c:1646  */
    {
					(yyval.syntaxTree) = createNode(AST_PROGRAMA,NULL);
					if((yyvsp[0].syntaxTree) != NULL)appendChildNode((yyval.syntaxTree),(yyvsp[0].syntaxTree));
					gv_create_initial_tree((yyval.syntaxTree)); 
					syntaxTree = (yyval.syntaxTree);
					removeNode(syntaxTree);}
#line 1373 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 3:
#line 114 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree)=(yyvsp[0].syntaxTree);}
#line 1379 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 4:
#line 115 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = (yyvsp[-1].syntaxTree);if((yyvsp[0].syntaxTree) != NULL)appendChildNode((yyval.syntaxTree),(yyvsp[0].syntaxTree));}
#line 1385 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 5:
#line 116 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = NULL;}
#line 1391 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 9:
#line 126 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = createNode(AST_FUNCAO,(yyvsp[-6].valor_simbolo_lexico));if((yyvsp[-1].syntaxTree) !=NULL)appendChildNode((yyval.syntaxTree),(yyvsp[-1].syntaxTree));}
#line 1397 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 10:
#line 127 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = createNode(AST_FUNCAO,(yyvsp[-6].valor_simbolo_lexico));if((yyvsp[-1].syntaxTree) !=NULL)appendChildNode((yyval.syntaxTree),(yyvsp[-1].syntaxTree));}
#line 1403 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 11:
#line 131 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = createNode(AST_LITERAL, (yyvsp[0].valor_simbolo_lexico)); }
#line 1409 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 12:
#line 132 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = createNode(AST_LITERAL, (yyvsp[0].valor_simbolo_lexico));}
#line 1415 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 13:
#line 133 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = createNode(AST_LITERAL, (yyvsp[0].valor_simbolo_lexico));}
#line 1421 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 14:
#line 134 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = createNode(AST_LITERAL, (yyvsp[0].valor_simbolo_lexico));}
#line 1427 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 15:
#line 135 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = createNode(AST_LITERAL, (yyvsp[0].valor_simbolo_lexico));}
#line 1433 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 16:
#line 136 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = createNode(AST_LITERAL, (yyvsp[0].valor_simbolo_lexico));}
#line 1439 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 22:
#line 148 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = NULL;}
#line 1445 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 23:
#line 149 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = NULL;}
#line 1451 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 150 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = NULL;}
#line 1457 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 151 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = NULL;}
#line 1463 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 26:
#line 152 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = NULL;}
#line 1469 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 27:
#line 153 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = NULL;}
#line 1475 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 28:
#line 158 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = (yyvsp[0].syntaxTree);}
#line 1481 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 29:
#line 159 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = createNode(AST_IDENTIFICADOR,(yyvsp[0].valor_simbolo_lexico));}
#line 1487 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 163 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = createNode(AST_IDENTIFICADOR,(yyvsp[0].valor_simbolo_lexico));}
#line 1493 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 31:
#line 164 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = createNode(AST_VETOR_INDEXADO,NULL);appendChildNode((yyval.syntaxTree),createNode(AST_IDENTIFICADOR,(yyvsp[-3].valor_simbolo_lexico))); appendChildNode((yyval.syntaxTree),(yyvsp[-1].syntaxTree));}
#line 1499 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 32:
#line 172 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = createNode(AST_ATRIBUICAO,(yyvsp[-1].valor_simbolo_lexico)); appendChildNode((yyval.syntaxTree),(yyvsp[-2].syntaxTree));appendChildNode((yyval.syntaxTree),(yyvsp[0].syntaxTree));}
#line 1505 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 177 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = createNode(AST_RETURN,NULL);appendChildNode((yyval.syntaxTree),(yyvsp[0].syntaxTree));}
#line 1511 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 178 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = createNode(AST_RETURN,NULL); }
#line 1517 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 187 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = (yyvsp[-2].syntaxTree); if((yyvsp[-2].syntaxTree) != NULL)appendChildNode((yyval.syntaxTree),(yyvsp[0].syntaxTree));else (yyval.syntaxTree) = (yyvsp[0].syntaxTree);}
#line 1523 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 36:
#line 188 "parser.y" /* yacc.c:1646  */
    {if((yyvsp[0].syntaxTree) != NULL)(yyval.syntaxTree) = (yyvsp[0].syntaxTree);}
#line 1529 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 189 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = NULL;}
#line 1535 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 195 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = (yyvsp[0].syntaxTree);}
#line 1541 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 39:
#line 196 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = (yyvsp[0].syntaxTree);}
#line 1547 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 197 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = (yyvsp[0].syntaxTree);}
#line 1553 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 198 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = (yyvsp[0].syntaxTree);}
#line 1559 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 199 "parser.y" /* yacc.c:1646  */
    { (yyval.syntaxTree) = createNode(AST_BLOCO, NULL);appendChildNode((yyval.syntaxTree),(yyvsp[-1].syntaxTree));}
#line 1565 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 200 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = (yyvsp[0].syntaxTree);}
#line 1571 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 201 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = (yyvsp[0].syntaxTree);}
#line 1577 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 45:
#line 202 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = (yyvsp[0].syntaxTree);}
#line 1583 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 52:
#line 221 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = createNode(AST_INPUT, NULL); appendChildNode((yyval.syntaxTree),(yyvsp[-3].syntaxTree));appendChildNode((yyval.syntaxTree),(yyvsp[0].syntaxTree));}
#line 1589 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 53:
#line 225 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = createNode(AST_OUTPUT,NULL);appendChildNode((yyval.syntaxTree),(yyvsp[0].syntaxTree));}
#line 1595 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 54:
#line 229 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = (yyvsp[0].syntaxTree);}
#line 1601 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 55:
#line 230 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = NULL;}
#line 1607 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 56:
#line 234 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = (yyvsp[-1].syntaxTree); 
							if((yyvsp[0].syntaxTree) != NULL)
								appendChildNode((yyval.syntaxTree),(yyvsp[0].syntaxTree));
							}
#line 1616 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 57:
#line 241 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = (yyvsp[0].syntaxTree);}
#line 1622 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 58:
#line 242 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = NULL;}
#line 1628 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 59:
#line 247 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = createNode(AST_IF_ELSE,NULL); appendChildNode((yyval.syntaxTree),(yyvsp[-5].syntaxTree));appendChildNode((yyval.syntaxTree),(yyvsp[-2].syntaxTree));appendChildNode((yyval.syntaxTree),(yyvsp[0].syntaxTree));}
#line 1634 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 60:
#line 248 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = createNode(AST_IF_ELSE,NULL); appendChildNode((yyval.syntaxTree),(yyvsp[-3].syntaxTree));appendChildNode((yyval.syntaxTree),(yyvsp[0].syntaxTree));}
#line 1640 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 61:
#line 249 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = createNode(AST_WHILE_DO,NULL); appendChildNode((yyval.syntaxTree),(yyvsp[-3].syntaxTree));appendChildNode((yyval.syntaxTree),(yyvsp[0].syntaxTree));}
#line 1646 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 62:
#line 250 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = createNode(AST_DO_WHILE,NULL); appendChildNode((yyval.syntaxTree),(yyvsp[-4].syntaxTree));appendChildNode((yyval.syntaxTree),(yyvsp[-1].syntaxTree));}
#line 1652 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 63:
#line 260 "parser.y" /* yacc.c:1646  */
    { (yyval.syntaxTree) = createNode(AST_CHAMADA_DE_FUNCAO,NULL); appendChildNode((yyval.syntaxTree),(yyvsp[-3].syntaxTree));if((yyvsp[-1].syntaxTree) != NULL) appendChildNode((yyval.syntaxTree),(yyvsp[-1].syntaxTree));}
#line 1658 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 64:
#line 263 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = createNode(AST_IDENTIFICADOR,(yyvsp[0].valor_simbolo_lexico));}
#line 1664 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 65:
#line 267 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = createNode(AST_ARIM_SOMA, NULL);}
#line 1670 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 66:
#line 268 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = createNode(AST_ARIM_SUBTRACAO, NULL);}
#line 1676 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 67:
#line 269 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = createNode(AST_ARIM_MULTIPLICACAO, NULL);}
#line 1682 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 68:
#line 270 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = createNode(AST_ARIM_DIVISAO, NULL);}
#line 1688 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 69:
#line 271 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = createNode(AST_LOGICO_COMP_LE, NULL);}
#line 1694 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 70:
#line 275 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = createNode(AST_LOGICO_COMP_LE, NULL);}
#line 1700 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 71:
#line 276 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = createNode(AST_LOGICO_COMP_GE, NULL);}
#line 1706 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 72:
#line 277 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = createNode(AST_LOGICO_COMP_IGUAL, NULL);}
#line 1712 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 278 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = createNode(AST_LOGICO_COMP_DIF, NULL);}
#line 1718 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 279 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = createNode(AST_LOGICO_E, NULL);}
#line 1724 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 280 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = createNode(AST_LOGICO_OU, NULL);}
#line 1730 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 281 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = createNode(AST_LOGICO_COMP_L, NULL);}
#line 1736 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 282 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = createNode(AST_LOGICO_COMP_G, NULL);}
#line 1742 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 286 "parser.y" /* yacc.c:1646  */
    {							
								if((yyvsp[0].syntaxTree) != NULL)	
									{
										(yyval.syntaxTree) = (yyvsp[0].syntaxTree); 
										 
										appendChildNode((yyval.syntaxTree),(yyvsp[-1].syntaxTree));
									}
								else
									{
										(yyval.syntaxTree) = (yyvsp[-1].syntaxTree);
									}
							}
#line 1759 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 298 "parser.y" /* yacc.c:1646  */
    {
								if((yyvsp[0].syntaxTree) != NULL)	
									{
										(yyval.syntaxTree) = (yyvsp[0].syntaxTree);
										appendChildNode((yyvsp[0].syntaxTree),(yyvsp[-1].syntaxTree));
									}
								else (yyval.syntaxTree) = (yyvsp[-1].syntaxTree);
							}
#line 1772 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 306 "parser.y" /* yacc.c:1646  */
    {
									if((yyvsp[0].syntaxTree) != NULL)	
										{(yyval.syntaxTree) = (yyvsp[0].syntaxTree); 
										appendChildNode((yyvsp[0].syntaxTree),(yyvsp[-1].syntaxTree));}
									else (yyval.syntaxTree) = (yyvsp[-1].syntaxTree);
								  }
#line 1783 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 313 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = createNode(AST_LOGICO_COMP_NEGACAO, NULL);appendChildNode((yyval.syntaxTree),(yyvsp[0].syntaxTree));}
#line 1789 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 314 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = (yyvsp[-2].syntaxTree); if((yyvsp[0].syntaxTree) != NULL) {(yyval.syntaxTree) = (yyvsp[0].syntaxTree); appendChildNode((yyvsp[0].syntaxTree),(yyvsp[-2].syntaxTree));}}
#line 1795 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 315 "parser.y" /* yacc.c:1646  */
    {
								if((yyvsp[0].syntaxTree) != NULL)
								{
									(yyval.syntaxTree) = (yyvsp[0].syntaxTree);
									appendChildNode((yyval.syntaxTree),(yyvsp[-2].syntaxTree));
									appendChildNode((yyvsp[-2].syntaxTree),(yyvsp[-1].syntaxTree));
								}
								else
								{
									(yyval.syntaxTree) = (yyvsp[-2].syntaxTree);
									appendChildNode((yyval.syntaxTree),(yyvsp[-1].syntaxTree));
								}

							 }
#line 1814 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 84:
#line 331 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = createNode(AST_ARIM_INVERSAO,(yyvsp[0].valor_simbolo_lexico));}
#line 1820 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 336 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = (yyvsp[-1].syntaxTree); appendChildNode((yyval.syntaxTree),(yyvsp[0].syntaxTree)); }
#line 1826 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 337 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = (yyvsp[-1].syntaxTree); appendChildNode((yyval.syntaxTree),(yyvsp[0].syntaxTree)); }
#line 1832 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;

  case 87:
#line 338 "parser.y" /* yacc.c:1646  */
    {(yyval.syntaxTree) = NULL;}
#line 1838 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
    break;


#line 1842 "/home/mandiow/Área de Trabalho/MonT/build/parser.c" /* yacc.c:1646  */
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
#line 344 "parser.y" /* yacc.c:1906  */
