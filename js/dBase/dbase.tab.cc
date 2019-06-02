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
#line 1 "dbase.ypp" /* yacc.c:339  */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <sys/types.h>

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdint>
#include <string>
#include <vector>
using namespace std;

extern int line_row;
extern int line_col;

extern void yyset_in(FILE*);
extern void yyset_out(FILE*);

extern FILE* yyin;
extern FILE* yyout;

std::string str_exec;
std::string str_para;
std::string str_expr;

std::vector<std::string> str_pvec(255);  // parameter vector (items)
std::vector<std::string>::const_iterator pvec_i;

std::string str_dummy;

#ifndef false
# define false 0
# define true  1
#endif
bool end_header = false;

int yylex(); 
int yyerror(const char *p) {
    printf("error at %d:%d: %s\n",
        line_row,
        line_col,p);
    return 1;
}

void emit_ifcode(int mode, const std::string &str)
{
    if (mode == 0) {
        str_exec.append(str_expr);
        str_expr.clear();

	if (str.size() > 1)
	str_exec.append(str);
    }

    if (mode == 1) str_exec.append("){\n");		else
    if (mode == 2) str_exec.append("} else {\n");	else
    if (mode == 3) str_exec.append("}\n");		else
    if (mode == 4) str_exec.append(") {\n}\n");
}

// | if_stmt        { emit_ifcode(1); }                stmt_cmds CMD_ENDIF { emit_ifcode(3); }
// | if_stmt        { emit_ifcode(1); } CMD_ELSE       stmt_cmds CMD_ENDIF { emit_ifcode(3);     

#line 133 "dbase.tab.cc" /* yacc.c:339  */

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
   by #include "dbase.tab.hh".  */
#ifndef YY_YY_DBASE_TAB_HH_INCLUDED
# define YY_YY_DBASE_TAB_HH_INCLUDED
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
    CMD_FALSE = 258,
    CMD_TRUE = 259,
    CMD_NUMBER = 260,
    CMD_ID = 261,
    CMD_END_HEADER = 262,
    CMD_PARAMETER = 263,
    CMD_LOCAL = 264,
    CMD_NEW = 265,
    CMD_IF = 266,
    CMD_ELSE = 267,
    CMD_ENDIF = 268,
    CMD_CLASS = 269,
    CMD_OF = 270,
    CMD_ENDCLASS = 271,
    CMD_EQ = 272,
    CMD_NE = 273,
    CMD_LE = 274,
    CMD_GE = 275,
    CMD_LW = 276,
    CMD_GT = 277
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 69 "dbase.ypp" /* yacc.c:355  */

  uint32_t val_int32;
  char*    val_charp;

#line 201 "dbase.tab.cc" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_DBASE_TAB_HH_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 216 "dbase.tab.cc" /* yacc.c:358  */

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
#define YYFINAL  17
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   99

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  31
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  61
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  102

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   277

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
      24,    25,    29,    27,    26,    28,     2,    30,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    23,     2,     2,     2,     2,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   102,   102,   103,   107,   110,   112,   111,   123,   131,
     137,   137,   138,   138,   138,   139,   139,   139,   140,   140,
     140,   141,   141,   141,   142,   142,   142,   143,   143,   143,
     144,   147,   147,   150,   151,   152,   152,   153,   153,   154,
     154,   155,   155,   159,   168,   172,   179,   178,   188,   193,
     199,   200,   201,   202,   203,   203,   209,   208,   219,   218,
     227,   231
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CMD_FALSE", "CMD_TRUE", "CMD_NUMBER",
  "CMD_ID", "CMD_END_HEADER", "CMD_PARAMETER", "CMD_LOCAL", "CMD_NEW",
  "CMD_IF", "CMD_ELSE", "CMD_ENDIF", "CMD_CLASS", "CMD_OF", "CMD_ENDCLASS",
  "CMD_EQ", "CMD_NE", "CMD_LE", "CMD_GE", "CMD_LW", "CMD_GT", "'='", "'('",
  "')'", "','", "'+'", "'-'", "'*'", "'/'", "$accept", "program",
  "stmt_cmds", "$@1", "$@2", "$@3", "$@4", "$@5", "$@6", "$@7", "$@8",
  "$@9", "$@10", "$@11", "$@12", "$@13", "$@14", "if_stmt", "$@15",
  "if_full", "$@16", "$@17", "$@18", "$@19", "local_list",
  "parameter_list", "$@20", "expr", "$@21", "class_object", "$@22", "$@23",
  "class_object_body", "id", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,    61,    40,    41,    44,    43,    45,    42,
      47
};
# endif

#define YYPACT_NINF -8

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-8)))

#define YYTABLE_NINF -38

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       9,    -8,    -8,    -8,    -1,    -8,    -1,    19,     9,    40,
      -8,     3,    -1,    -4,    -8,     8,    12,    -8,    -8,    -8,
      -8,    -8,    -8,    -8,    -8,    81,    -3,     4,    -8,    -1,
      -8,    -8,    69,    -8,    -1,    -8,     8,     8,     8,     8,
       8,     8,    11,    -8,    -2,    -8,    -1,    69,    -8,    -4,
       8,     8,     8,     8,     8,    -8,    15,    69,    69,    69,
      69,    69,    69,    22,     9,    23,    -8,    13,    -1,    20,
      69,    69,    69,    69,    -8,    -8,    81,    81,    81,    81,
      81,    81,    -8,    31,    38,     9,    41,     4,    -8,    17,
      -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,    50,    -8,
      -8,    -8
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,    61,     4,     6,     0,    31,     0,     0,     3,    10,
      30,     0,     0,     5,    43,     0,    58,     1,     2,    12,
      27,    24,    21,    18,    15,     0,     0,     7,    45,     0,
      49,    54,    32,    48,     0,    60,     0,     0,     0,     0,
       0,     0,    39,    33,     0,    11,     0,     9,    46,    44,
       0,     0,     0,     0,     0,    56,     0,    13,    28,    25,
      22,    19,    16,     0,     0,    41,    34,     0,     0,     0,
      50,    51,    52,    53,    60,    59,     0,     0,     0,     0,
       0,     0,    38,     0,     0,     0,     0,    47,    55,     0,
      14,    29,    26,    23,    20,    17,    40,    36,     0,     8,
      57,    42
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
      -8,    59,     1,    -8,    -8,    -8,    -8,    -8,    -8,    -8,
      -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,    -7,
      -8,    -8,    -8,    -8,    46,    14,    -8,     2,    -8,    -8,
      -8,    -8,    10,     0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     7,    44,    12,    25,    36,    76,    41,    81,    40,
      80,    39,    79,    38,    78,    37,    77,     9,    15,    45,
      84,    63,    64,    85,    13,    27,    68,    32,    50,    10,
      74,    35,    56,    33
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      11,     8,    30,     1,    14,     1,    16,    46,    11,     8,
      65,    66,    28,    30,     1,     1,     2,     3,     4,    17,
       5,    31,    29,     6,   -37,    11,    26,    34,    47,    14,
      48,    75,    31,   100,    55,    82,   -35,    86,    57,    58,
      59,    60,    61,    62,    96,    88,    67,    51,    52,    53,
      54,    97,    69,    70,    71,    72,    73,    19,    20,    21,
      22,    23,    24,   101,    11,    83,    99,    18,    28,    90,
      91,    92,    93,    94,    95,    49,    11,    11,    11,    11,
      11,    11,    87,     0,    89,    11,    98,     1,     2,     3,
       4,     0,     5,    42,    43,     6,    51,    52,    53,    54
};

static const yytype_int8 yycheck[] =
{
       0,     0,     5,     6,     4,     6,     6,    10,     8,     8,
      12,    13,    12,     5,     6,     6,     7,     8,     9,     0,
      11,    24,    26,    14,    13,    25,    23,    15,    26,    29,
      26,    16,    24,    16,    34,    13,    13,    24,    36,    37,
      38,    39,    40,    41,    13,    25,    46,    27,    28,    29,
      30,    13,    50,    51,    52,    53,    54,    17,    18,    19,
      20,    21,    22,    13,    64,    64,    25,     8,    68,    76,
      77,    78,    79,    80,    81,    29,    76,    77,    78,    79,
      80,    81,    68,    -1,    74,    85,    85,     6,     7,     8,
       9,    -1,    11,    12,    13,    14,    27,    28,    29,    30
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     7,     8,     9,    11,    14,    32,    33,    48,
      60,    64,    34,    55,    64,    49,    64,     0,    32,    17,
      18,    19,    20,    21,    22,    35,    23,    56,    64,    26,
       5,    24,    58,    64,    15,    62,    36,    46,    44,    42,
      40,    38,    12,    13,    33,    50,    10,    58,    26,    55,
      59,    27,    28,    29,    30,    64,    63,    58,    58,    58,
      58,    58,    58,    52,    53,    12,    13,    64,    57,    58,
      58,    58,    58,    58,    61,    16,    37,    47,    45,    43,
      41,    39,    13,    33,    51,    54,    24,    56,    25,    63,
      50,    50,    50,    50,    50,    50,    13,    13,    33,    25,
      16,    13
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    31,    32,    32,    33,    33,    34,    33,    33,    33,
      35,    33,    36,    37,    33,    38,    39,    33,    40,    41,
      33,    42,    43,    33,    44,    45,    33,    46,    47,    33,
      33,    49,    48,    50,    50,    51,    50,    52,    50,    53,
      50,    54,    50,    55,    55,    56,    57,    56,    58,    58,
      58,    58,    58,    58,    59,    58,    61,    60,    62,    60,
      63,    64
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     1,     2,     0,     3,     6,     3,
       0,     3,     0,     0,     6,     0,     0,     6,     0,     0,
       6,     0,     0,     6,     0,     0,     6,     0,     0,     6,
       1,     0,     3,     1,     2,     0,     4,     0,     3,     0,
       4,     0,     5,     1,     3,     1,     0,     4,     1,     1,
       3,     3,     3,     3,     0,     4,     0,     7,     0,     5,
       0,     1
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

if (yycount >= 0 && yycount <= 5)
addLispYYerror();

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
        case 4:
#line 107 "dbase.ypp" /* yacc.c:1649  */
    {
	end_header = true;
    }
#line 1371 "dbase.tab.cc" /* yacc.c:1649  */
    break;

  case 6:
#line 112 "dbase.ypp" /* yacc.c:1649  */
    {
	    if (end_header == true) {
		str_exec.append("\n\t}\n\tmain_proc(");
	    }
	 }
#line 1381 "dbase.tab.cc" /* yacc.c:1649  */
    break;

  case 7:
#line 118 "dbase.ypp" /* yacc.c:1649  */
    {
	    if (end_header == true) {
		str_exec.append(")\n\t{");
	    }
	 }
#line 1391 "dbase.tab.cc" /* yacc.c:1649  */
    break;

  case 8:
#line 124 "dbase.ypp" /* yacc.c:1649  */
    {
	    str_exec.append("\n\t\tthis.");
	    str_exec.append((yyvsp[-5].val_charp));
	    str_exec.append(" = new ");
	    str_exec.append((yyvsp[-2].val_charp));
	    str_exec.append("(221221);");
	 }
#line 1403 "dbase.tab.cc" /* yacc.c:1649  */
    break;

  case 9:
#line 132 "dbase.ypp" /* yacc.c:1649  */
    {
	    str_exec.append(" = ");
	    str_exec.append(str_expr);
	    str_exec.append(";\n");
	 }
#line 1413 "dbase.tab.cc" /* yacc.c:1649  */
    break;

  case 10:
#line 137 "dbase.ypp" /* yacc.c:1649  */
    { emit_ifcode(0,") {\n");   }
#line 1419 "dbase.tab.cc" /* yacc.c:1649  */
    break;

  case 12:
#line 138 "dbase.ypp" /* yacc.c:1649  */
    { emit_ifcode(0," == " ); }
#line 1425 "dbase.tab.cc" /* yacc.c:1649  */
    break;

  case 13:
#line 138 "dbase.ypp" /* yacc.c:1649  */
    { emit_ifcode(1,str_dummy); }
#line 1431 "dbase.tab.cc" /* yacc.c:1649  */
    break;

  case 15:
#line 139 "dbase.ypp" /* yacc.c:1649  */
    { emit_ifcode(0," > "  ); }
#line 1437 "dbase.tab.cc" /* yacc.c:1649  */
    break;

  case 16:
#line 139 "dbase.ypp" /* yacc.c:1649  */
    { emit_ifcode(1,str_dummy); }
#line 1443 "dbase.tab.cc" /* yacc.c:1649  */
    break;

  case 18:
#line 140 "dbase.ypp" /* yacc.c:1649  */
    { emit_ifcode(0," < "  ); }
#line 1449 "dbase.tab.cc" /* yacc.c:1649  */
    break;

  case 19:
#line 140 "dbase.ypp" /* yacc.c:1649  */
    { emit_ifcode(1,str_dummy); }
#line 1455 "dbase.tab.cc" /* yacc.c:1649  */
    break;

  case 21:
#line 141 "dbase.ypp" /* yacc.c:1649  */
    { emit_ifcode(0," >= " ); }
#line 1461 "dbase.tab.cc" /* yacc.c:1649  */
    break;

  case 22:
#line 141 "dbase.ypp" /* yacc.c:1649  */
    { emit_ifcode(1,str_dummy); }
#line 1467 "dbase.tab.cc" /* yacc.c:1649  */
    break;

  case 24:
#line 142 "dbase.ypp" /* yacc.c:1649  */
    { emit_ifcode(0," <= " ); }
#line 1473 "dbase.tab.cc" /* yacc.c:1649  */
    break;

  case 25:
#line 142 "dbase.ypp" /* yacc.c:1649  */
    { emit_ifcode(1,str_dummy); }
#line 1479 "dbase.tab.cc" /* yacc.c:1649  */
    break;

  case 27:
#line 143 "dbase.ypp" /* yacc.c:1649  */
    { emit_ifcode(0," != " ); }
#line 1485 "dbase.tab.cc" /* yacc.c:1649  */
    break;

  case 28:
#line 143 "dbase.ypp" /* yacc.c:1649  */
    { emit_ifcode(1,str_dummy); }
#line 1491 "dbase.tab.cc" /* yacc.c:1649  */
    break;

  case 31:
#line 147 "dbase.ypp" /* yacc.c:1649  */
    { str_exec.append("\nif ("); }
#line 1497 "dbase.tab.cc" /* yacc.c:1649  */
    break;

  case 33:
#line 150 "dbase.ypp" /* yacc.c:1649  */
    { emit_ifcode(4,str_dummy); }
#line 1503 "dbase.tab.cc" /* yacc.c:1649  */
    break;

  case 34:
#line 151 "dbase.ypp" /* yacc.c:1649  */
    { emit_ifcode(3,str_dummy); }
#line 1509 "dbase.tab.cc" /* yacc.c:1649  */
    break;

  case 35:
#line 152 "dbase.ypp" /* yacc.c:1649  */
    { emit_ifcode(2,str_dummy); }
#line 1515 "dbase.tab.cc" /* yacc.c:1649  */
    break;

  case 36:
#line 152 "dbase.ypp" /* yacc.c:1649  */
    { emit_ifcode(3,str_dummy); }
#line 1521 "dbase.tab.cc" /* yacc.c:1649  */
    break;

  case 37:
#line 153 "dbase.ypp" /* yacc.c:1649  */
    { emit_ifcode(2,str_dummy); }
#line 1527 "dbase.tab.cc" /* yacc.c:1649  */
    break;

  case 38:
#line 153 "dbase.ypp" /* yacc.c:1649  */
    { emit_ifcode(4,str_dummy); }
#line 1533 "dbase.tab.cc" /* yacc.c:1649  */
    break;

  case 39:
#line 154 "dbase.ypp" /* yacc.c:1649  */
    { emit_ifcode(2,str_dummy); }
#line 1539 "dbase.tab.cc" /* yacc.c:1649  */
    break;

  case 40:
#line 154 "dbase.ypp" /* yacc.c:1649  */
    { emit_ifcode(3,str_dummy); }
#line 1545 "dbase.tab.cc" /* yacc.c:1649  */
    break;

  case 41:
#line 155 "dbase.ypp" /* yacc.c:1649  */
    { emit_ifcode(2,str_dummy); }
#line 1551 "dbase.tab.cc" /* yacc.c:1649  */
    break;

  case 42:
#line 155 "dbase.ypp" /* yacc.c:1649  */
    { emit_ifcode(3,str_dummy); }
#line 1557 "dbase.tab.cc" /* yacc.c:1649  */
    break;

  case 43:
#line 160 "dbase.ypp" /* yacc.c:1649  */
    {  //str_para.append("\n\t\tthis.");
	    //str_para.append($1);
	    //str_para.append(" = 0;");

	    str_exec.append("\n\t\tthis.");
	    str_exec.append((yyvsp[0].val_charp));
	    str_exec.append(" = 0;");
         }
#line 1570 "dbase.tab.cc" /* yacc.c:1649  */
    break;

  case 45:
#line 172 "dbase.ypp" /* yacc.c:1649  */
    {
	    if (end_header == true) {
		str_pvec.push_back((yyvsp[0].val_charp));
		str_exec.append((yyvsp[0].val_charp));
	    }
	 }
#line 1581 "dbase.tab.cc" /* yacc.c:1649  */
    break;

  case 46:
#line 179 "dbase.ypp" /* yacc.c:1649  */
    {
	    if (end_header == true) {
		str_exec.append(", ");
	    }
	 }
#line 1591 "dbase.tab.cc" /* yacc.c:1649  */
    break;

  case 48:
#line 189 "dbase.ypp" /* yacc.c:1649  */
    {
	//  str_localnew.append($1);
	    str_expr.append((yyvsp[0].val_charp));
	}
#line 1600 "dbase.tab.cc" /* yacc.c:1649  */
    break;

  case 49:
#line 194 "dbase.ypp" /* yacc.c:1649  */
    {
	    std::string str = std::to_string((yyvsp[0].val_int32));
	//  str_exec.append(str);
	    str_expr.append(str);
	}
#line 1610 "dbase.tab.cc" /* yacc.c:1649  */
    break;

  case 50:
#line 199 "dbase.ypp" /* yacc.c:1649  */
    { str_expr.append(" + "); }
#line 1616 "dbase.tab.cc" /* yacc.c:1649  */
    break;

  case 51:
#line 200 "dbase.ypp" /* yacc.c:1649  */
    { str_expr.append(" - "); }
#line 1622 "dbase.tab.cc" /* yacc.c:1649  */
    break;

  case 52:
#line 201 "dbase.ypp" /* yacc.c:1649  */
    { str_expr.append(" * "); }
#line 1628 "dbase.tab.cc" /* yacc.c:1649  */
    break;

  case 53:
#line 202 "dbase.ypp" /* yacc.c:1649  */
    { str_expr.append(" / "); }
#line 1634 "dbase.tab.cc" /* yacc.c:1649  */
    break;

  case 54:
#line 203 "dbase.ypp" /* yacc.c:1649  */
    { str_expr.append(" ( "); }
#line 1640 "dbase.tab.cc" /* yacc.c:1649  */
    break;

  case 55:
#line 204 "dbase.ypp" /* yacc.c:1649  */
    { str_expr.append(" ) "); }
#line 1646 "dbase.tab.cc" /* yacc.c:1649  */
    break;

  case 56:
#line 209 "dbase.ypp" /* yacc.c:1649  */
    {   str_exec.append("\n\t\tclass ");
	    str_exec.append((yyvsp[-2].val_charp));
	    str_exec.append(" extends ");
	    str_exec.append((yyvsp[0].val_charp));
	    str_exec.append(" {");
	}
#line 1657 "dbase.tab.cc" /* yacc.c:1649  */
    break;

  case 57:
#line 216 "dbase.ypp" /* yacc.c:1649  */
    {   str_exec.append("\n\t\t}\n");
	}
#line 1664 "dbase.tab.cc" /* yacc.c:1649  */
    break;

  case 58:
#line 219 "dbase.ypp" /* yacc.c:1649  */
    {   str_exec.append("\n\t\tclass ");
	    str_exec.append((yyvsp[0].val_charp));
	    str_exec.append(" {");
	}
#line 1673 "dbase.tab.cc" /* yacc.c:1649  */
    break;

  case 59:
#line 224 "dbase.ypp" /* yacc.c:1649  */
    {   str_exec.append("\n\t\t}\n");
	}
#line 1680 "dbase.tab.cc" /* yacc.c:1649  */
    break;

  case 61:
#line 231 "dbase.ypp" /* yacc.c:1649  */
    { (yyval.val_charp) = (yyvsp[0].val_charp);
	str_exec.append("this.");
	str_exec.append((yyvsp[0].val_charp));
    }
#line 1689 "dbase.tab.cc" /* yacc.c:1649  */
    break;


#line 1693 "dbase.tab.cc" /* yacc.c:1649  */
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
		addLispYYerror();
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
#line 237 "dbase.ypp" /* yacc.c:1910  */

//-- FUNCTION DEFINITIONS ---------------------------------

int main(int argc, char **argv)
{
    int result = 0;

    printf("// dbase2js (c) 2019 Jens Kallup\n");
    printf("// all rights reserved.\n\n");

    char * buffer = new char[strlen(argv[1])+5];
    strcpy(buffer , argv[1]);
    strcat(buffer , ".prg" );
    if (!(yyin = fopen(buffer,"r"))) {
        fprintf(stderr,"error: can't find input file, use default stdin.\n");
        yyset_in(stdin);
    }

    char * puffer = new char[strlen(argv[1])+5];
    strcpy(puffer , argv[1]);
    strcat(puffer , ".pro" );
    if (!(yyout = fopen(puffer,"w"))) {
	fprintf(stderr,"error: can't open output file.\n");
	delete puffer;
	delete buffer;
	return 1;
    }

nextstep:
    std::string sc(argv[1]);
    std::string para;

    str_expr.clear();
    str_exec.clear();

    str_dummy.append(" ");

    // -------------------------------------
    // check, if called from cli or wif ...
    // -------------------------------------
    if (sc.size() > 11) {
        sc = sc.erase(0,11);
        sc = sc.replace(sc.find("."), 1, "_");
    }

    str_exec.append("class _Z");
    str_exec.append(sc);
    str_exec.append(" {\n\tconstructor(@parameter@) {@defaultparameter@");

    result = yyparse();

    if (result < 1)
    {
	for ( pvec_i = str_pvec.begin();
	      pvec_i!= str_pvec.end();
	    ++pvec_i) {
	    if ((*pvec_i).size() > 0) {
		if (pvec_i+1 == str_pvec.end())
		{   str_para.append((*pvec_i));
			para.append("\n\t\tthis.");
			para.append((*pvec_i));
			para.append(" = ");
			para.append((*pvec_i));
			para.append(";");
		    break;
		}   else {
		    str_para.append((*pvec_i));
		    str_para.append(", ");
			para.append("\n\t\tthis.");
			para.append((*pvec_i));
			para.append(" = ");
			para.append((*pvec_i));
			para.append(";");
		}
	    }
	}
	std::string rp =
	    str_exec.replace(
	    str_exec.find("@parameter@) {"), 11,
	    str_para);
	str_exec = rp;
	std::string rs =
	    str_exec.replace(
	    str_exec.find("@defaultparameter@"), 18, para);
	str_exec = rs;
	str_exec.append("\n\t}\n}\n");

	if (end_header == true) {
	    std::string str_temp;
	    for ( pvec_i = str_pvec.begin();
		  pvec_i!= str_pvec.end();
		++pvec_i) {
		if ((*pvec_i).size() > 0) {
		    str_temp.append("var global_");
		    str_temp.append((*pvec_i));
		    str_temp.append(";\n");
		}
	    }

	    str_temp.append(str_exec);
	    str_exec = str_temp;
	    str_exec.append("var _z");
	    str_exec.append(sc);
	    str_exec.append(" = new _Z");
	    str_exec.append(sc);
	    str_exec.append("(");

	    for ( pvec_i = str_pvec.begin();
		  pvec_i!= str_pvec.end();
		++pvec_i) {
		if ((*pvec_i).size() > 0) {
		    str_exec.append("global_");
		    str_exec.append((*pvec_i));
		    if (pvec_i+1 != str_pvec.end())
		    str_exec.append(", ");   else
		    break;
		}
	    }
	    str_exec.append(");\n");
	}

        fprintf(yyout,str_exec.c_str());
        fprintf(stdout,"\nSUCCESS\n");
    } else {
        fprintf(stdout,"ERROR\n");
    }

    delete puffer;
    delete buffer;

    fclose(yyout);
    fclose(yyin);
    return result;
}
