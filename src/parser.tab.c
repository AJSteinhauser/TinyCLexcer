/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     EQUALS = 258,
     LESS_THAN_EQUALS = 259,
     GREATER_THAN_EQUALS = 260,
     NOT_EQUALS = 261,
     COMMA = 262,
     ASSIGNMENT = 263,
     SEMI_COLON = 264,
     PERIOD = 265,
     POINTER = 266,
     OPEN_BRACKET = 267,
     CLOSE_BRACKET = 268,
     OPEN_PAR = 269,
     CLOSE_PAR = 270,
     LEFT_TRI = 271,
     RIGHT_TRI = 272,
     HASHTAG = 273,
     INCLUDE = 274,
     RETURN = 275,
     VOID = 276,
     IF = 277,
     ELSE = 278,
     FOR = 279,
     WHILE = 280,
     PLUS = 281,
     MINUS = 282,
     MULTIPLY = 283,
     DIVIDE = 284,
     FLOAT_VALUE = 285,
     INT_VALUE = 286,
     CHAR_VALUE = 287,
     IDENTIFIER = 288,
     TYPE = 289,
     STRING = 290
   };
#endif
/* Tokens.  */
#define EQUALS 258
#define LESS_THAN_EQUALS 259
#define GREATER_THAN_EQUALS 260
#define NOT_EQUALS 261
#define COMMA 262
#define ASSIGNMENT 263
#define SEMI_COLON 264
#define PERIOD 265
#define POINTER 266
#define OPEN_BRACKET 267
#define CLOSE_BRACKET 268
#define OPEN_PAR 269
#define CLOSE_PAR 270
#define LEFT_TRI 271
#define RIGHT_TRI 272
#define HASHTAG 273
#define INCLUDE 274
#define RETURN 275
#define VOID 276
#define IF 277
#define ELSE 278
#define FOR 279
#define WHILE 280
#define PLUS 281
#define MINUS 282
#define MULTIPLY 283
#define DIVIDE 284
#define FLOAT_VALUE 285
#define INT_VALUE 286
#define CHAR_VALUE 287
#define IDENTIFIER 288
#define TYPE 289
#define STRING 290




/* Copy the first part of user declarations.  */
#line 2 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include "codeGen.h"

#define YYERROR_VERBOSE 	 1

void yyerror(char *msg);
extern int yylex();
extern int lineNum;
extern char* yytext;





/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 22 "parser.y"
{
    float f;
    int i;
    char ch;
    char* ident;

	struct treeNode *bVal;
	//BINARY_TREE bVal;
}
/* Line 193 of yacc.c.  */
#line 192 "parser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 205 "parser.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   164

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  74
/* YYNRULES -- Number of states.  */
#define YYNSTATES  139

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   290

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    17,
      21,    24,    26,    30,    35,    39,    41,    44,    47,    49,
      53,    57,    59,    63,    67,    69,    73,    77,    81,    85,
      87,    91,    95,   100,   106,   112,   120,   126,   129,   133,
     134,   137,   141,   143,   145,   147,   149,   151,   153,   155,
     157,   159,   161,   164,   165,   167,   171,   177,   182,   187,
     189,   190,   193,   194,   196,   199,   204,   211,   218,   219,
     222,   230,   234,   237,   239
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      64,     0,    -1,    30,    -1,    35,    -1,    32,    -1,    31,
      -1,    37,    -1,    33,    -1,    40,    -1,    14,    45,    15,
      -1,    11,    33,    -1,    45,    -1,    45,     7,    39,    -1,
      33,    14,    39,    15,    -1,    33,    14,    15,    -1,    38,
      -1,    26,    41,    -1,    27,    41,    -1,    41,    -1,    42,
      28,    41,    -1,    42,    29,    41,    -1,    42,    -1,    43,
      26,    43,    -1,    43,    27,    43,    -1,    43,    -1,    43,
      16,    43,    -1,    43,     4,    43,    -1,    43,    17,    43,
      -1,    43,     5,    43,    -1,    44,    -1,    44,     3,    44,
      -1,    44,     6,    44,    -1,    33,     8,    45,     9,    -1,
      34,    33,     8,    45,     9,    -1,    22,    14,    45,    15,
      53,    -1,    22,    14,    45,    15,    53,    23,    53,    -1,
      25,    14,    45,    15,    53,    -1,    20,     9,    -1,    20,
      45,     9,    -1,    -1,    53,    50,    -1,    12,    50,    13,
      -1,     9,    -1,    46,    -1,    47,    -1,    48,    -1,    49,
      -1,    51,    -1,    52,    -1,    40,    -1,    21,    -1,    34,
      -1,    34,    33,    -1,    -1,    55,    -1,    55,     7,    56,
      -1,    34,    33,     8,    37,     9,    -1,    34,    33,     8,
      33,    -1,    33,     8,    33,     9,    -1,    40,    -1,    -1,
      57,    58,    -1,    -1,    49,    -1,    53,    59,    -1,    12,
      58,    59,    13,    -1,    54,    33,    14,    56,    15,    60,
      -1,    54,    33,    14,    21,    15,    60,    -1,    -1,    61,
      62,    -1,    18,    19,    16,    33,    10,    33,    17,    -1,
      18,    19,    35,    -1,    63,    63,    -1,    62,    -1,    63,
      62,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    56,    56,    57,    58,    59,    62,    63,    64,    65,
      68,    69,    70,    73,    74,    77,    78,    79,    81,    82,
      83,    86,    87,    88,    91,    92,    93,    94,    95,    98,
      99,   100,   103,   104,   107,   108,   111,   114,   115,   118,
     119,   122,   125,   128,   129,   130,   131,   132,   133,   134,
     137,   138,   141,   144,   145,   146,   149,   150,   151,   152,
     155,   156,   159,   160,   161,   164,   167,   168,   171,   172,
     175,   176,   177,   181,   182
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "EQUALS", "LESS_THAN_EQUALS",
  "GREATER_THAN_EQUALS", "NOT_EQUALS", "COMMA", "ASSIGNMENT", "SEMI_COLON",
  "PERIOD", "POINTER", "OPEN_BRACKET", "CLOSE_BRACKET", "OPEN_PAR",
  "CLOSE_PAR", "LEFT_TRI", "RIGHT_TRI", "HASHTAG", "INCLUDE", "RETURN",
  "VOID", "IF", "ELSE", "FOR", "WHILE", "PLUS", "MINUS", "MULTIPLY",
  "DIVIDE", "FLOAT_VALUE", "INT_VALUE", "CHAR_VALUE", "IDENTIFIER", "TYPE",
  "STRING", "$accept", "CONSTANT", "PRIMARY_EXPRESSION",
  "FUNCTION_ARG_LIST", "FUNCTION_CALL", "UNARY_EXPRESSION",
  "MULTIPLICATIVE_EXPRESSION", "ADDITIVE_EXPRESSION",
  "COMPARISON_EXPRESSION", "EXPRESSION", "ASSIGNMENT_STATEMENT",
  "IF_STATEMENT", "WHILE_STATMENT", "RETURN_STATEMENT", "STATEMENT_LIST",
  "BLOCK_STATEMENT", "EMPTY_STATEMENT", "STATEMENT", "RETURN_TYPE",
  "FUNCTION_PARAMETER", "FUNCTION_PARAMETER_LIST", "VARIABLE_DEFINITION",
  "VARIABLE_DEFINITION_LIST", "FUNCTION_STATEMENT_LIST", "FUNCTION_BODY",
  "FUNCTION_DEFINITION", "FUNCTION_DEFINITION_LIST", "HEADER", "PROGRAM", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    36,    37,    37,    37,    37,    38,    38,    38,    38,
      39,    39,    39,    40,    40,    41,    41,    41,    42,    42,
      42,    43,    43,    43,    44,    44,    44,    44,    44,    45,
      45,    45,    46,    46,    47,    47,    48,    49,    49,    50,
      50,    51,    52,    53,    53,    53,    53,    53,    53,    53,
      54,    54,    55,    56,    56,    56,    57,    57,    57,    57,
      58,    58,    59,    59,    59,    60,    61,    61,    62,    62,
      63,    63,    63,    64,    64
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     3,
       2,     1,     3,     4,     3,     1,     2,     2,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     4,     5,     5,     7,     5,     2,     3,     0,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     0,     1,     3,     5,     4,     4,     1,
       0,     2,     0,     1,     2,     4,     6,     6,     0,     2,
       7,     3,     2,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      68,     0,    50,    51,     0,    68,    73,    68,     0,     0,
       0,    69,    74,    72,     1,     0,    71,    53,     0,     0,
       0,    54,     0,     0,     0,    52,    53,     0,     0,    60,
      67,    55,    66,    70,     0,     0,    59,    60,    62,     0,
       0,     0,    61,    42,    39,     0,     0,     0,     0,     0,
      49,    43,    44,    45,    46,    47,    48,    62,     0,     0,
       0,     0,    14,     0,     0,     2,     5,     4,     7,     3,
       6,    15,     0,     8,    18,    21,    24,    29,    11,     0,
      46,     0,    39,    37,     0,     0,     0,     0,     0,    64,
      65,    58,    10,     0,    16,    17,    13,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    57,     0,
      41,    40,    38,     0,     0,     0,     0,     9,    19,    20,
      26,    28,    25,    27,    22,    23,    30,    31,    12,    56,
       0,     0,    32,     0,    34,    36,    33,     0,    35
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      51,    52,    53,    80,    81,    55,    56,    57,     4,    21,
      22,    37,    38,    58,    30,     5,     6,    13,     8
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -58
static const yytype_int16 yypact[] =
{
      -8,    18,   -58,   -58,     9,   -16,   -58,    -8,    48,   -14,
      40,   -58,   -58,    43,   -58,    25,   -58,   -10,    59,    68,
      52,    82,    71,    58,    80,   -58,    70,    80,    90,    -2,
     -58,   -58,   -58,   -58,     6,    84,   -58,    -2,    37,    85,
      49,   105,   -58,   -58,    37,     3,   109,   115,     8,    98,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,    37,   119,   124,
     101,    89,   -58,    89,    89,   -58,   -58,   -58,   121,   -58,
     -58,   -58,   122,   -58,   -58,    23,    51,    44,   129,    95,
     -58,   125,    37,   -58,   130,    89,    89,    89,   132,   -58,
     -58,   -58,   -58,   126,   -58,   -58,   -58,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    79,   -58,   133,
     -58,   -58,   -58,   128,   131,   135,    89,   -58,   -58,   -58,
      39,    39,    39,    39,    39,    39,   -58,   -58,   -58,   -58,
      37,    37,   -58,   136,   127,   -58,   -58,    37,   -58
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -58,    69,   -58,    42,   -29,   -57,   -58,    -4,   -33,   -42,
     -58,   -58,   -58,   -34,    65,   -58,   -58,   -43,   -58,   -58,
     134,   -58,   114,    96,   137,   -58,    20,   152,   -58
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      36,    82,    15,    84,    54,     2,    94,    95,    36,    50,
       1,    19,    83,     2,    39,    50,    87,    61,     3,    93,
      40,    16,    40,    54,    20,    11,     3,    12,    50,    63,
      64,    34,    35,    65,    66,    67,    68,     9,    69,    82,
     118,   119,    10,   113,   114,   115,    43,   105,    14,    44,
     106,    97,    98,    50,    17,    99,   100,    45,    18,    46,
      60,     1,    47,    61,    62,   103,   104,   101,   102,    23,
      48,    49,   126,   127,   133,    63,    64,   103,   104,    65,
      66,    67,    68,    24,    69,    25,    27,   134,   135,    26,
      60,    28,    29,    61,   138,   120,   121,   122,   123,   124,
     125,    50,    50,    61,    20,    63,    64,    33,    50,    65,
      66,    67,    68,    79,    69,    63,    64,    41,    59,    65,
      66,    67,    68,    85,    69,    65,    66,    67,   108,    86,
      69,    88,    90,    91,    92,    40,   107,    96,   110,   112,
     116,   117,   129,   130,   132,   136,   131,   111,   109,   128,
     137,    42,     7,    89,     0,     0,     0,     0,     0,     0,
      31,     0,     0,     0,    32
};

static const yytype_int16 yycheck[] =
{
      29,    44,    16,    45,    38,    21,    63,    64,    37,    38,
      18,    21,     9,    21,     8,    44,     8,    14,    34,    61,
      14,    35,    14,    57,    34,     5,    34,     7,    57,    26,
      27,    33,    34,    30,    31,    32,    33,    19,    35,    82,
      97,    98,    33,    85,    86,    87,     9,     3,     0,    12,
       6,    28,    29,    82,    14,     4,     5,    20,    33,    22,
      11,    18,    25,    14,    15,    26,    27,    16,    17,    10,
      33,    34,   105,   106,   116,    26,    27,    26,    27,    30,
      31,    32,    33,    15,    35,    33,    15,   130,   131,     7,
      11,    33,    12,    14,   137,    99,   100,   101,   102,   103,
     104,   130,   131,    14,    34,    26,    27,    17,   137,    30,
      31,    32,    33,     8,    35,    26,    27,    33,    33,    30,
      31,    32,    33,    14,    35,    30,    31,    32,    33,    14,
      35,    33,    13,     9,    33,    14,     7,    15,    13,     9,
       8,    15,     9,    15,     9,     9,    15,    82,    79,   107,
      23,    37,     0,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    27
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    18,    21,    34,    54,    61,    62,    63,    64,    19,
      33,    62,    62,    63,     0,    16,    35,    14,    33,    21,
      34,    55,    56,    10,    15,    33,     7,    15,    33,    12,
      60,    56,    60,    17,    33,    34,    40,    57,    58,     8,
      14,    33,    58,     9,    12,    20,    22,    25,    33,    34,
      40,    46,    47,    48,    49,    51,    52,    53,    59,    33,
      11,    14,    15,    26,    27,    30,    31,    32,    33,    35,
      37,    38,    39,    40,    41,    42,    43,    44,    45,     8,
      49,    50,    53,     9,    45,    14,    14,     8,    33,    59,
      13,     9,    33,    45,    41,    41,    15,    28,    29,     4,
       5,    16,    17,    26,    27,     3,     6,     7,    33,    37,
      13,    50,     9,    45,    45,    45,     8,    15,    41,    41,
      43,    43,    43,    43,    43,    43,    44,    44,    39,     9,
      15,    15,     9,    45,    53,    53,     9,    23,    53
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

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
#line 56 "parser.y"
    {(yyval.bVal) = newNode(addDataObject_float(yytext), CONSTANT, NULL , NULL, NULL);;}
    break;

  case 3:
#line 57 "parser.y"
    {(yyval.bVal) = newNode(addDataObject_str(yytext), CONSTANT, NULL , NULL, NULL); ;}
    break;

  case 4:
#line 58 "parser.y"
    {(yyval.bVal) = newNode(-1, CONSTANT, NULL , NULL, NULL);;}
    break;

  case 5:
#line 59 "parser.y"
    {(yyval.bVal) = newNode(addDataObject_int(yytext), CONSTANT, NULL , NULL, NULL);;}
    break;

  case 6:
#line 62 "parser.y"
    {(yyval.bVal) = newNode(-1, PRIMARY_EXPRESSION, (yyvsp[(1) - (1)].bVal), NULL, NULL);;}
    break;

  case 7:
#line 63 "parser.y"
    {(yyval.bVal) = newNode(-1, PRIMARY_EXPRESSION, NULL, NULL, NULL);;}
    break;

  case 8:
#line 64 "parser.y"
    {(yyval.bVal) = newNode(-1, PRIMARY_EXPRESSION, (yyvsp[(1) - (1)].bVal), NULL, NULL);;}
    break;

  case 9:
#line 65 "parser.y"
    {(yyval.bVal) = newNode(-1, PRIMARY_EXPRESSION, (yyvsp[(2) - (3)].bVal), NULL, NULL);;}
    break;

  case 10:
#line 68 "parser.y"
    {(yyval.bVal) = newNode(-1, FUNCTION_ARG_LIST, NULL, NULL, NULL);;}
    break;

  case 11:
#line 69 "parser.y"
    {(yyval.bVal) = newNode(-1, FUNCTION_ARG_LIST, (yyvsp[(1) - (1)].bVal), NULL, NULL);;}
    break;

  case 12:
#line 70 "parser.y"
    {(yyval.bVal) = newNode(-1, FUNCTION_ARG_LIST, (yyvsp[(1) - (3)].bVal), (yyvsp[(3) - (3)].bVal), NULL );;}
    break;

  case 13:
#line 73 "parser.y"
    {(yyval.bVal) = newNode(-1, FUNCTION_CALL, (yyvsp[(3) - (4)].bVal),NULL,NULL);;}
    break;

  case 14:
#line 74 "parser.y"
    {(yyval.bVal) = newNode(-1, FUNCTION_CALL, NULL, NULL, NULL);;}
    break;

  case 15:
#line 77 "parser.y"
    {(yyval.bVal) = newNode(0, UNARY_EXPRESSION, (yyvsp[(1) - (1)].bVal), NULL, NULL);;}
    break;

  case 16:
#line 78 "parser.y"
    {(yyval.bVal) = newNode(1, UNARY_EXPRESSION, (yyvsp[(2) - (2)].bVal), NULL, NULL);;}
    break;

  case 17:
#line 79 "parser.y"
    {(yyval.bVal) = newNode(2, UNARY_EXPRESSION, (yyvsp[(2) - (2)].bVal), NULL,NULL);;}
    break;

  case 18:
#line 81 "parser.y"
    {(yyval.bVal) = newNode(0, MULTIPLICATIVE_EXPRESSION, (yyvsp[(1) - (1)].bVal), NULL, NULL);;}
    break;

  case 19:
#line 82 "parser.y"
    {(yyval.bVal) = newNode(1, MULTIPLICATIVE_EXPRESSION, (yyvsp[(1) - (3)].bVal), (yyvsp[(3) - (3)].bVal),NULL);;}
    break;

  case 20:
#line 83 "parser.y"
    {(yyval.bVal) = newNode(2, MULTIPLICATIVE_EXPRESSION, (yyvsp[(1) - (3)].bVal), (yyvsp[(3) - (3)].bVal),NULL);;}
    break;

  case 21:
#line 86 "parser.y"
    {(yyval.bVal) = newNode(0, ADDITIVE_EXPRESSION, (yyvsp[(1) - (1)].bVal), NULL,NULL);;}
    break;

  case 22:
#line 87 "parser.y"
    {(yyval.bVal) = newNode(1, ADDITIVE_EXPRESSION, (yyvsp[(1) - (3)].bVal), (yyvsp[(3) - (3)].bVal), NULL);;}
    break;

  case 23:
#line 88 "parser.y"
    {(yyval.bVal) = newNode(2, ADDITIVE_EXPRESSION, (yyvsp[(1) - (3)].bVal), (yyvsp[(3) - (3)].bVal), NULL);;}
    break;

  case 24:
#line 91 "parser.y"
    {(yyval.bVal) = newNode(0, COMPARISON_EXPRESSION, (yyvsp[(1) - (1)].bVal), NULL,NULL);;}
    break;

  case 25:
#line 92 "parser.y"
    {(yyval.bVal) = newNode(1, COMPARISON_EXPRESSION, (yyvsp[(1) - (3)].bVal), (yyvsp[(3) - (3)].bVal),NULL);;}
    break;

  case 26:
#line 93 "parser.y"
    {(yyval.bVal) = newNode(2, COMPARISON_EXPRESSION, (yyvsp[(1) - (3)].bVal), (yyvsp[(3) - (3)].bVal),NULL);;}
    break;

  case 27:
#line 94 "parser.y"
    {(yyval.bVal) = newNode(3, COMPARISON_EXPRESSION, (yyvsp[(1) - (3)].bVal), (yyvsp[(3) - (3)].bVal),NULL);;}
    break;

  case 28:
#line 95 "parser.y"
    {(yyval.bVal) = newNode(4, COMPARISON_EXPRESSION, (yyvsp[(1) - (3)].bVal), (yyvsp[(3) - (3)].bVal),NULL);;}
    break;

  case 29:
#line 98 "parser.y"
    {(yyval.bVal) = newNode(0, EXPRESSION, (yyvsp[(1) - (1)].bVal), NULL,NULL);;}
    break;

  case 30:
#line 99 "parser.y"
    {(yyval.bVal) = newNode(1, EXPRESSION, (yyvsp[(1) - (3)].bVal), (yyvsp[(3) - (3)].bVal),NULL);;}
    break;

  case 31:
#line 100 "parser.y"
    {(yyval.bVal) = newNode(2, EXPRESSION, (yyvsp[(1) - (3)].bVal), (yyvsp[(3) - (3)].bVal) ,NULL);;}
    break;

  case 32:
#line 103 "parser.y"
    {(yyval.bVal) = newNode(-1, ASSIGNMENT_STATEMENT, (yyvsp[(3) - (4)].bVal),NULL,NULL);;}
    break;

  case 33:
#line 104 "parser.y"
    {(yyval.bVal) = newNode(-1, ASSIGNMENT_STATEMENT,(yyvsp[(4) - (5)].bVal),NULL,NULL);;}
    break;

  case 34:
#line 107 "parser.y"
    {(yyval.bVal) = newNode(-1, IF_STATEMENT, (yyvsp[(3) - (5)].bVal), (yyvsp[(5) - (5)].bVal),NULL);;}
    break;

  case 35:
#line 108 "parser.y"
    {(yyval.bVal) = newNode(-1, IF_STATEMENT, (yyvsp[(3) - (7)].bVal), (yyvsp[(5) - (7)].bVal), (yyvsp[(7) - (7)].bVal));;}
    break;

  case 36:
#line 111 "parser.y"
    {(yyval.bVal) = newNode(-1, WHILE_STATMENT, (yyvsp[(3) - (5)].bVal), (yyvsp[(5) - (5)].bVal),NULL);;}
    break;

  case 37:
#line 114 "parser.y"
    {(yyval.bVal) = newNode(-1, RETURN_STATEMENT, NULL,NULL,NULL);;}
    break;

  case 38:
#line 115 "parser.y"
    {(yyval.bVal) = newNode(-1, RETURN_STATEMENT, (yyvsp[(2) - (3)].bVal),NULL,NULL);;}
    break;

  case 40:
#line 119 "parser.y"
    {(yyval.bVal) = newNode(-1, STATEMENT_LIST, (yyvsp[(1) - (2)].bVal),(yyvsp[(2) - (2)].bVal),NULL);;}
    break;

  case 41:
#line 122 "parser.y"
    {(yyval.bVal) = newNode(-1, BLOCK_STATEMENT, (yyvsp[(2) - (3)].bVal),NULL,NULL);;}
    break;

  case 42:
#line 125 "parser.y"
    {(yyval.bVal) = newNode(-1, EMPTY_STATEMENT, NULL,NULL,NULL);;}
    break;

  case 43:
#line 128 "parser.y"
    {(yyval.bVal) = newNode(-1, STATEMENT,(yyvsp[(1) - (1)].bVal),NULL,NULL);;}
    break;

  case 44:
#line 129 "parser.y"
    {(yyval.bVal) = newNode(-1, STATEMENT,(yyvsp[(1) - (1)].bVal),NULL,NULL);;}
    break;

  case 45:
#line 130 "parser.y"
    {(yyval.bVal) = newNode(-1, STATEMENT,(yyvsp[(1) - (1)].bVal),NULL,NULL);;}
    break;

  case 46:
#line 131 "parser.y"
    {(yyval.bVal) = newNode(-1, STATEMENT,(yyvsp[(1) - (1)].bVal),NULL,NULL);;}
    break;

  case 47:
#line 132 "parser.y"
    {(yyval.bVal) = newNode(-1, STATEMENT,(yyvsp[(1) - (1)].bVal),NULL,NULL);;}
    break;

  case 48:
#line 133 "parser.y"
    {(yyval.bVal) = newNode(-1, STATEMENT,(yyvsp[(1) - (1)].bVal),NULL,NULL);;}
    break;

  case 49:
#line 134 "parser.y"
    {(yyval.bVal) = newNode(-1, STATEMENT,(yyvsp[(1) - (1)].bVal),NULL,NULL);;}
    break;

  case 50:
#line 137 "parser.y"
    {(yyval.bVal) = newNode(-1, RETURN_TYPE,NULL,NULL,NULL);;}
    break;

  case 51:
#line 138 "parser.y"
    {(yyval.bVal) = newNode(-1, RETURN_TYPE,NULL,NULL,NULL);;}
    break;

  case 52:
#line 141 "parser.y"
    {(yyval.bVal) = newNode(-1, FUNCTION_PARAMETER,NULL,NULL,NULL);;}
    break;

  case 54:
#line 145 "parser.y"
    {(yyval.bVal) = newNode(-1, FUNCTION_PARAMETER_LIST,(yyvsp[(1) - (1)].bVal),NULL,NULL);;}
    break;

  case 55:
#line 146 "parser.y"
    {(yyval.bVal) = newNode(-1, FUNCTION_PARAMETER_LIST,(yyvsp[(1) - (3)].bVal),(yyvsp[(3) - (3)].bVal),NULL);;}
    break;

  case 56:
#line 149 "parser.y"
    {(yyval.bVal) = newNode(-1, VARIABLE_DEFINITION,NULL,NULL,NULL);;}
    break;

  case 57:
#line 150 "parser.y"
    {(yyval.bVal) = newNode(-1, VARIABLE_DEFINITION,NULL,NULL,NULL);;}
    break;

  case 58:
#line 151 "parser.y"
    {(yyval.bVal) = newNode(-1, VARIABLE_DEFINITION,NULL,NULL,NULL);;}
    break;

  case 59:
#line 152 "parser.y"
    {(yyval.bVal) = newNode(-1, VARIABLE_DEFINITION,(yyvsp[(1) - (1)].bVal),NULL, NULL);;}
    break;

  case 61:
#line 156 "parser.y"
    {(yyval.bVal) = newNode(-1, VARIABLE_DEFINITION_LIST,(yyvsp[(1) - (2)].bVal),(yyvsp[(2) - (2)].bVal), NULL);;}
    break;

  case 63:
#line 160 "parser.y"
    {(yyval.bVal) = newNode(-1, FUNCTION_STATEMENT_LIST,(yyvsp[(1) - (1)].bVal),NULL, NULL);;}
    break;

  case 64:
#line 161 "parser.y"
    {(yyval.bVal) = newNode(-1, FUNCTION_STATEMENT_LIST,(yyvsp[(1) - (2)].bVal),(yyvsp[(2) - (2)].bVal), NULL);;}
    break;

  case 65:
#line 164 "parser.y"
    {(yyval.bVal) = newNode(-1, FUNCTION_BODY,(yyvsp[(2) - (4)].bVal),(yyvsp[(3) - (4)].bVal),NULL);;}
    break;

  case 66:
#line 167 "parser.y"
    {(yyval.bVal) = newNode(-1, FUNCTION_DEFINITION,(yyvsp[(4) - (6)].bVal),(yyvsp[(6) - (6)].bVal),NULL); printf("%s\tTESTING\n",yylval.ident);;}
    break;

  case 67:
#line 168 "parser.y"
    {(yyval.bVal) = newNode(-1, FUNCTION_DEFINITION,NULL,(yyvsp[(6) - (6)].bVal), NULL); printf("%s\tTESTING, %s\n",yylval.ident, (yyvsp[(2) - (6)].ident));;}
    break;

  case 69:
#line 172 "parser.y"
    {(yyval.bVal) = newNode(-1, FUNCTION_DEFINITION_LIST,(yyvsp[(1) - (2)].bVal),(yyvsp[(2) - (2)].bVal), NULL);;}
    break;

  case 73:
#line 181 "parser.y"
    {BINARY_TREE parseTree; parseTree = newNode(-1,PROGRAM,(yyvsp[(1) - (1)].bVal), NULL, NULL); print_tree(parseTree); ;}
    break;

  case 74:
#line 182 "parser.y"
    {BINARY_TREE parseTree; parseTree = newNode(-1,PROGRAM,(yyvsp[(2) - (2)].bVal), NULL, NULL); print_tree(parseTree);;}
    break;


/* Line 1267 of yacc.c.  */
#line 1856 "parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 187 "parser.y"


BINARY_TREE newNode(int iValue, int identifier, BINARY_TREE b1, BINARY_TREE b2, BINARY_TREE b3){
	BINARY_TREE n;
	n = (BINARY_TREE)malloc(sizeof(TREE_NODE));
	n->item = iValue;
	n->ident = identifier;
	n->left = b1;
	n->middle = b2;
	n->right = b3;
	
	return n;
}

void print_tree(BINARY_TREE b){
	if (b == NULL) return;
	printf("Item %d ", b->item);
	printf("Node identifier: %d\n", b->ident);
	print_tree(b->right);
	print_tree(b->middle);
	print_tree(b->left);
}

void yyerror(char *msg){
    fprintf(stderr,"Error on line #%d Token:[ %s ] : %s\n",lineNum,yytext,msg);
    exit(1);
};

int main(void){
	#ifdef YYDEBUG
	  //yydebug = 1;
	#endif
    yyparse();
    printf("%s\n", "No Syntax Errors Detected!");
	//printAllSymbols();
    return 0;
};

