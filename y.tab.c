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
     IDENTIFIER = 258,
     I_CONSTANT = 259,
     F_CONSTANT = 260,
     STRING_LITERAL = 261,
     FUNC_NAME = 262,
     SIZEOF = 263,
     PTR_OP = 264,
     INC_OP = 265,
     DEC_OP = 266,
     LEFT_OP = 267,
     RIGHT_OP = 268,
     LE_OP = 269,
     GE_OP = 270,
     EQ_OP = 271,
     NE_OP = 272,
     AND_OP = 273,
     OR_OP = 274,
     MUL_ASSIGN = 275,
     DIV_ASSIGN = 276,
     MOD_ASSIGN = 277,
     ADD_ASSIGN = 278,
     SUB_ASSIGN = 279,
     LEFT_ASSIGN = 280,
     RIGHT_ASSIGN = 281,
     AND_ASSIGN = 282,
     XOR_ASSIGN = 283,
     OR_ASSIGN = 284,
     TYPEDEF_NAME = 285,
     ENUMERATION_CONSTANT = 286,
     TYPEDEF = 287,
     EXTERN = 288,
     STATIC = 289,
     AUTO = 290,
     REGISTER = 291,
     INLINE = 292,
     CONST = 293,
     RESTRICT = 294,
     VOLATILE = 295,
     BOOL = 296,
     CHAR = 297,
     SHORT = 298,
     INT = 299,
     LONG = 300,
     SIGNED = 301,
     UNSIGNED = 302,
     FLOAT = 303,
     DOUBLE = 304,
     VOID = 305,
     COMPLEX = 306,
     IMAGINARY = 307,
     STRUCT = 308,
     UNION = 309,
     ENUM = 310,
     ELLIPSIS = 311,
     CASE = 312,
     DEFAULT = 313,
     IF = 314,
     ELSE = 315,
     SWITCH = 316,
     WHILE = 317,
     DO = 318,
     FOR = 319,
     GOTO = 320,
     CONTINUE = 321,
     BREAK = 322,
     RETURN = 323,
     ALIGNAS = 324,
     ALIGNOF = 325,
     ATOMIC = 326,
     GENERIC = 327,
     NORETURN = 328,
     STATIC_ASSERT = 329,
     THREAD_LOCAL = 330
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define I_CONSTANT 259
#define F_CONSTANT 260
#define STRING_LITERAL 261
#define FUNC_NAME 262
#define SIZEOF 263
#define PTR_OP 264
#define INC_OP 265
#define DEC_OP 266
#define LEFT_OP 267
#define RIGHT_OP 268
#define LE_OP 269
#define GE_OP 270
#define EQ_OP 271
#define NE_OP 272
#define AND_OP 273
#define OR_OP 274
#define MUL_ASSIGN 275
#define DIV_ASSIGN 276
#define MOD_ASSIGN 277
#define ADD_ASSIGN 278
#define SUB_ASSIGN 279
#define LEFT_ASSIGN 280
#define RIGHT_ASSIGN 281
#define AND_ASSIGN 282
#define XOR_ASSIGN 283
#define OR_ASSIGN 284
#define TYPEDEF_NAME 285
#define ENUMERATION_CONSTANT 286
#define TYPEDEF 287
#define EXTERN 288
#define STATIC 289
#define AUTO 290
#define REGISTER 291
#define INLINE 292
#define CONST 293
#define RESTRICT 294
#define VOLATILE 295
#define BOOL 296
#define CHAR 297
#define SHORT 298
#define INT 299
#define LONG 300
#define SIGNED 301
#define UNSIGNED 302
#define FLOAT 303
#define DOUBLE 304
#define VOID 305
#define COMPLEX 306
#define IMAGINARY 307
#define STRUCT 308
#define UNION 309
#define ENUM 310
#define ELLIPSIS 311
#define CASE 312
#define DEFAULT 313
#define IF 314
#define ELSE 315
#define SWITCH 316
#define WHILE 317
#define DO 318
#define FOR 319
#define GOTO 320
#define CONTINUE 321
#define BREAK 322
#define RETURN 323
#define ALIGNAS 324
#define ALIGNOF 325
#define ATOMIC 326
#define GENERIC 327
#define NORETURN 328
#define STATIC_ASSERT 329
#define THREAD_LOCAL 330




/* Copy the first part of user declarations.  */
#line 1 "cparser.y"

#include <stdio.h>
#include <stdlib.h>
#include "AST.h"
#ifdef DEBUG
#define YYERROR_VERBOSE 1
#define YYDEBUG 1
#endif
int yylex();
void yyerror(const char* msg) {
 fprintf(stderr, "%s\n", msg);
}


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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
#line 15 "cparser.y"
{
	AST *val;
	int type;
}
/* Line 193 of yacc.c.  */
#line 265 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 278 "y.tab.c"

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
#define YYFINAL  67
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2473

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  78
/* YYNRULES -- Number of rules.  */
#define YYNRULES  276
/* YYNRULES -- Number of states.  */
#define YYNSTATES  480

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   330

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    10,     2,     2,     2,    95,    93,     2,
      84,    85,     8,     6,    86,     7,    90,     9,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    87,    99,
       4,     3,     5,    98,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    88,     2,    89,    96,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    91,    97,    92,    94,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    13,    15,    17,    19,
      21,    23,    25,    27,    34,    36,    40,    44,    48,    50,
      55,    59,    64,    68,    72,    75,    78,    85,    93,    95,
      99,   101,   104,   107,   110,   113,   118,   123,   125,   127,
     129,   131,   133,   135,   137,   142,   144,   148,   152,   156,
     158,   162,   166,   168,   172,   176,   178,   182,   186,   190,
     194,   196,   200,   204,   206,   210,   212,   216,   218,   222,
     224,   228,   230,   234,   236,   242,   244,   248,   250,   252,
     254,   256,   258,   260,   262,   264,   266,   268,   270,   272,
     276,   278,   281,   285,   287,   290,   292,   295,   297,   300,
     302,   305,   307,   310,   312,   314,   318,   322,   324,   326,
     328,   330,   332,   334,   336,   337,   339,   341,   343,   345,
     347,   349,   351,   353,   355,   357,   359,   361,   363,   365,
     367,   369,   374,   380,   383,   385,   387,   389,   392,   395,
     399,   401,   404,   406,   409,   411,   413,   417,   420,   424,
     426,   431,   437,   443,   450,   453,   455,   459,   463,   465,
     470,   472,   474,   476,   478,   480,   482,   487,   492,   495,
     497,   499,   503,   507,   512,   519,   525,   531,   538,   544,
     549,   554,   559,   563,   568,   572,   575,   578,   580,   582,
     585,   589,   591,   593,   597,   600,   603,   605,   607,   611,
     614,   616,   619,   621,   623,   627,   630,   634,   640,   645,
     651,   656,   660,   664,   668,   673,   680,   686,   692,   699,
     704,   709,   712,   716,   720,   725,   729,   734,   736,   739,
     741,   746,   750,   753,   755,   758,   762,   765,   773,   775,
     777,   779,   781,   783,   785,   789,   794,   798,   801,   805,
     807,   810,   812,   814,   816,   819,   827,   833,   839,   845,
     853,   860,   868,   875,   883,   887,   890,   893,   896,   900,
     902,   905,   907,   909,   914,   918,   920
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     174,     0,    -1,    11,    -1,   102,    -1,   104,    -1,    84,
     126,    85,    -1,   105,    -1,    12,    -1,    13,    -1,    39,
      -1,    11,    -1,    14,    -1,    15,    -1,    80,    84,   124,
      86,   106,    85,    -1,   107,    -1,   106,    86,   107,    -1,
     156,    87,   124,    -1,    66,    87,   124,    -1,   101,    -1,
     108,    88,   126,    89,    -1,   108,    84,    85,    -1,   108,
      84,   109,    85,    -1,   108,    90,    11,    -1,   108,    17,
      11,    -1,   108,    18,    -1,   108,    19,    -1,    84,   156,
      85,    91,   160,    92,    -1,    84,   156,    85,    91,   160,
      86,    92,    -1,   124,    -1,   109,    86,   124,    -1,   108,
      -1,    18,   110,    -1,    19,   110,    -1,   111,   112,    -1,
      16,   110,    -1,    16,    84,   156,    85,    -1,    78,    84,
     156,    85,    -1,    93,    -1,     8,    -1,     6,    -1,     7,
      -1,    94,    -1,    10,    -1,   110,    -1,    84,   156,    85,
     112,    -1,   112,    -1,   113,     8,   112,    -1,   113,     9,
     112,    -1,   113,    95,   112,    -1,   113,    -1,   114,     6,
     113,    -1,   114,     7,   113,    -1,   114,    -1,   115,    20,
     114,    -1,   115,    21,   114,    -1,   115,    -1,   116,     4,
     115,    -1,   116,     5,   115,    -1,   116,    22,   115,    -1,
     116,    23,   115,    -1,   116,    -1,   117,    24,   116,    -1,
     117,    25,   116,    -1,   117,    -1,   118,    93,   117,    -1,
     118,    -1,   119,    96,   118,    -1,   119,    -1,   120,    97,
     119,    -1,   120,    -1,   121,    26,   120,    -1,   121,    -1,
     122,    27,   121,    -1,   122,    -1,   122,    98,   126,    87,
     123,    -1,   123,    -1,   110,   125,   124,    -1,     3,    -1,
      28,    -1,    29,    -1,    30,    -1,    31,    -1,    32,    -1,
      33,    -1,    34,    -1,    35,    -1,    36,    -1,    37,    -1,
     124,    -1,   126,    86,   124,    -1,   123,    -1,   129,    99,
      -1,   129,   130,    99,    -1,   164,    -1,   132,   129,    -1,
     132,    -1,   133,   129,    -1,   133,    -1,   145,   129,    -1,
     145,    -1,   146,   129,    -1,   146,    -1,   147,   129,    -1,
     147,    -1,   131,    -1,   130,    86,   131,    -1,   148,     3,
     159,    -1,   148,    -1,    40,    -1,    41,    -1,    42,    -1,
      83,    -1,    43,    -1,    44,    -1,    -1,    58,    -1,    50,
      -1,    51,    -1,    52,    -1,    53,    -1,    56,    -1,    57,
      -1,    54,    -1,    55,    -1,    49,    -1,    59,    -1,    60,
      -1,   144,    -1,   134,    -1,   141,    -1,    38,    -1,   135,
      91,   136,    92,    -1,   135,    11,    91,   136,    92,    -1,
     135,    11,    -1,    61,    -1,    62,    -1,   137,    -1,   136,
     137,    -1,   138,    99,    -1,   138,   139,    99,    -1,   164,
      -1,   133,   138,    -1,   133,    -1,   145,   138,    -1,   145,
      -1,   140,    -1,   139,    86,   140,    -1,    87,   127,    -1,
     148,    87,   127,    -1,   148,    -1,    63,    91,   142,    92,
      -1,    63,    91,   142,    86,    92,    -1,    63,    11,    91,
     142,    92,    -1,    63,    11,    91,   142,    86,    92,    -1,
      63,    11,    -1,   143,    -1,   142,    86,   143,    -1,   103,
       3,   127,    -1,   103,    -1,    79,    84,   156,    85,    -1,
      46,    -1,    47,    -1,    48,    -1,    79,    -1,    45,    -1,
      81,    -1,    77,    84,   156,    85,    -1,    77,    84,   127,
      85,    -1,   150,   149,    -1,   149,    -1,    11,    -1,    84,
     148,    85,    -1,   149,    88,    89,    -1,   149,    88,     8,
      89,    -1,   149,    88,    42,   151,   124,    89,    -1,   149,
      88,    42,   124,    89,    -1,   149,    88,   151,     8,    89,
      -1,   149,    88,   151,    42,   124,    89,    -1,   149,    88,
     151,   124,    89,    -1,   149,    88,   151,    89,    -1,   149,
      88,   124,    89,    -1,   149,    84,   152,    85,    -1,   149,
      84,    85,    -1,   149,    84,   155,    85,    -1,     8,   151,
     150,    -1,     8,   151,    -1,     8,   150,    -1,     8,    -1,
     145,    -1,   151,   145,    -1,   153,    86,    64,    -1,   153,
      -1,   154,    -1,   153,    86,   154,    -1,   129,   148,    -1,
     129,   157,    -1,   129,    -1,    11,    -1,   155,    86,    11,
      -1,   138,   157,    -1,   138,    -1,   150,   158,    -1,   150,
      -1,   158,    -1,    84,   157,    85,    -1,    88,    89,    -1,
      88,     8,    89,    -1,    88,    42,   151,   124,    89,    -1,
      88,    42,   124,    89,    -1,    88,   151,    42,   124,    89,
      -1,    88,   151,   124,    89,    -1,    88,   151,    89,    -1,
      88,   124,    89,    -1,   158,    88,    89,    -1,   158,    88,
       8,    89,    -1,   158,    88,    42,   151,   124,    89,    -1,
     158,    88,    42,   124,    89,    -1,   158,    88,   151,   124,
      89,    -1,   158,    88,   151,    42,   124,    89,    -1,   158,
      88,   151,    89,    -1,   158,    88,   124,    89,    -1,    84,
      85,    -1,    84,   152,    85,    -1,   158,    84,    85,    -1,
     158,    84,   152,    85,    -1,    91,   160,    92,    -1,    91,
     160,    86,    92,    -1,   124,    -1,   161,   159,    -1,   159,
      -1,   160,    86,   161,   159,    -1,   160,    86,   159,    -1,
     162,     3,    -1,   163,    -1,   162,   163,    -1,    88,   127,
      89,    -1,    90,    11,    -1,    82,    84,   127,    86,    14,
      85,    99,    -1,   166,    -1,   167,    -1,   170,    -1,   171,
      -1,   172,    -1,   173,    -1,    11,    87,   165,    -1,    65,
     127,    87,   165,    -1,    66,    87,   165,    -1,    91,    92,
      -1,    91,   168,    92,    -1,   169,    -1,   168,   169,    -1,
     128,    -1,   165,    -1,    99,    -1,   126,    99,    -1,    67,
      84,   126,    85,   165,    68,   165,    -1,    67,    84,   126,
      85,   165,    -1,    69,    84,   126,    85,   165,    -1,    70,
      84,   126,    85,   165,    -1,    71,   165,    70,    84,   126,
      85,    99,    -1,    72,    84,   170,   170,    85,   165,    -1,
      72,    84,   170,   170,   126,    85,   165,    -1,    72,    84,
     128,   170,    85,   165,    -1,    72,    84,   128,   170,   126,
      85,   165,    -1,    73,    11,    99,    -1,    74,    99,    -1,
      75,    99,    -1,    76,    99,    -1,    76,   126,    99,    -1,
     175,    -1,   174,   175,    -1,   176,    -1,   128,    -1,   129,
     148,   177,   167,    -1,   129,   148,   167,    -1,   128,    -1,
     177,   128,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    61,    61,    62,    63,    64,    65,    69,    70,    71,
      75,    79,    80,    84,    88,    89,    93,    94,    98,    99,
     100,   102,   104,   105,   106,   107,   108,   109,   113,   115,
     120,   121,   122,   123,   124,   125,   126,   130,   131,   132,
     133,   134,   135,   139,   140,   144,   145,   147,   149,   153,
     154,   156,   161,   162,   163,   167,   168,   170,   172,   174,
     179,   180,   181,   185,   186,   190,   191,   195,   196,   200,
     201,   205,   206,   210,   211,   215,   216,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   235,   237,
     242,   246,   247,   249,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   266,   268,   273,   275,   279,   280,
     281,   282,   283,   284,   287,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   308,   309,   310,   314,   315,   319,   320,   324,   325,
     326,   330,   331,   332,   333,   337,   338,   342,   343,   344,
     348,   349,   350,   351,   352,   356,   357,   361,   362,   366,
     370,   371,   372,   373,   377,   378,   382,   383,   387,   389,
     393,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   407,   408,   414,   415,   416,   418,   422,   423,
     428,   429,   433,   435,   440,   442,   443,   447,   449,   454,
     455,   459,   460,   461,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,   480,
     481,   482,   483,   484,   485,   489,   490,   491,   495,   496,
     497,   498,   502,   506,   507,   511,   512,   516,   520,   521,
     522,   523,   524,   525,   529,   530,   531,   535,   536,   541,
     543,   548,   549,   553,   554,   558,   560,   562,   566,   568,
     569,   570,   572,   573,   577,   578,   579,   580,   582,   587,
     588,   592,   593,   598,   600,   608,   609
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "'='", "'<'", "'>'", "'+'", "'-'", "'*'",
  "'/'", "'!'", "IDENTIFIER", "I_CONSTANT", "F_CONSTANT", "STRING_LITERAL",
  "FUNC_NAME", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP",
  "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "TYPEDEF_NAME", "ENUMERATION_CONSTANT", "TYPEDEF", "EXTERN", "STATIC",
  "AUTO", "REGISTER", "INLINE", "CONST", "RESTRICT", "VOLATILE", "BOOL",
  "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE",
  "VOID", "COMPLEX", "IMAGINARY", "STRUCT", "UNION", "ENUM", "ELLIPSIS",
  "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "ALIGNAS", "ALIGNOF", "ATOMIC", "GENERIC",
  "NORETURN", "STATIC_ASSERT", "THREAD_LOCAL", "'('", "')'", "','", "':'",
  "'['", "']'", "'.'", "'{'", "'}'", "'&'", "'~'", "'%'", "'^'", "'|'",
  "'?'", "';'", "$accept", "primary_expression", "constant",
  "enumeration_constant", "string", "generic_selection",
  "generic_assoc_list", "generic_association", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "atomic_type_specifier", "type_qualifier", "function_specifier",
  "alignment_specifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "designation", "designator_list", "designator",
  "static_assert_declaration", "statement", "labeled_statement",
  "compound_statement", "block_item_list", "block_item",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "declaration_list", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,    61,    60,    62,    43,    45,    42,    47,
      33,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,    40,    41,    44,    58,    91,    93,
      46,   123,   125,    38,   126,    37,    94,   124,    63,    59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   100,   101,   101,   101,   101,   101,   102,   102,   102,
     103,   104,   104,   105,   106,   106,   107,   107,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   109,   109,
     110,   110,   110,   110,   110,   110,   110,   111,   111,   111,
     111,   111,   111,   112,   112,   113,   113,   113,   113,   114,
     114,   114,   115,   115,   115,   116,   116,   116,   116,   116,
     117,   117,   117,   118,   118,   119,   119,   120,   120,   121,
     121,   122,   122,   123,   123,   124,   124,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   126,   126,
     127,   128,   128,   128,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   130,   130,   131,   131,   132,   132,
     132,   132,   132,   132,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   134,   134,   134,   135,   135,   136,   136,   137,   137,
     137,   138,   138,   138,   138,   139,   139,   140,   140,   140,
     141,   141,   141,   141,   141,   142,   142,   143,   143,   144,
     145,   145,   145,   145,   146,   146,   147,   147,   148,   148,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   150,   150,   150,   150,   151,   151,
     152,   152,   153,   153,   154,   154,   154,   155,   155,   156,
     156,   157,   157,   157,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   159,   159,   159,   160,   160,
     160,   160,   161,   162,   162,   163,   163,   164,   165,   165,
     165,   165,   165,   165,   166,   166,   166,   167,   167,   168,
     168,   169,   169,   170,   170,   171,   171,   171,   172,   172,
     172,   172,   172,   172,   173,   173,   173,   173,   173,   174,
     174,   175,   175,   176,   176,   177,   177
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     6,     1,     3,     3,     3,     1,     4,
       3,     4,     3,     3,     2,     2,     6,     7,     1,     3,
       1,     2,     2,     2,     2,     4,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     5,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     2,     3,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     5,     2,     1,     1,     1,     2,     2,     3,
       1,     2,     1,     2,     1,     1,     3,     2,     3,     1,
       4,     5,     5,     6,     2,     1,     3,     3,     1,     4,
       1,     1,     1,     1,     1,     1,     4,     4,     2,     1,
       1,     3,     3,     4,     6,     5,     5,     6,     5,     4,
       4,     4,     3,     4,     3,     2,     2,     1,     1,     2,
       3,     1,     1,     3,     2,     2,     1,     1,     3,     2,
       1,     2,     1,     1,     3,     2,     3,     5,     4,     5,
       4,     3,     3,     3,     4,     6,     5,     5,     6,     4,
       4,     2,     3,     3,     4,     3,     4,     1,     2,     1,
       4,     3,     2,     1,     2,     3,     2,     7,     1,     1,
       1,     1,     1,     1,     3,     4,     3,     2,     3,     1,
       2,     1,     1,     1,     2,     7,     5,     5,     5,     7,
       6,     7,     6,     7,     3,     2,     2,     2,     3,     1,
       2,     1,     1,     4,     3,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     114,   130,   108,   109,   110,   112,   113,   164,   160,   161,
     162,   124,   116,   117,   118,   119,   122,   123,   120,   121,
     115,   125,   126,   134,   135,     0,     0,   163,   165,     0,
     111,   272,     0,    95,    97,   128,     0,   129,   127,    99,
     101,   103,    93,   114,   269,   271,   154,     0,   114,   114,
       0,   187,   170,     0,    91,     0,   104,   114,   169,     0,
      94,    96,   133,   114,    98,   100,   102,     1,   270,     0,
      10,   158,     0,   155,    39,    40,    38,    42,     2,     7,
       8,    11,    12,     0,     0,     0,     9,     0,     0,   114,
      37,    41,    18,     3,     4,     6,    30,    43,     0,    45,
      49,    52,    55,    60,    63,    65,    67,    69,    71,    73,
      90,     0,   114,   200,   114,     0,     0,     0,   163,   188,
     186,   185,     0,     0,    92,     0,     0,   275,     0,   274,
     114,   114,     0,   168,   114,   114,   136,     0,   140,     0,
       0,     0,   150,   114,    34,   114,    31,    32,   114,     0,
      43,    75,    88,     0,     0,     0,    24,    25,     0,     0,
       0,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   167,   141,   114,     0,   202,   199,   203,   143,   166,
     159,     0,   189,   184,   171,   105,   107,     0,   227,   106,
       2,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   247,   253,     0,   251,   252,   238,   239,     0,
     249,   240,   241,   242,   243,   276,   273,   197,   182,   196,
       0,   191,   192,     0,    38,     0,   172,     0,     0,   114,
     131,   137,     0,   138,     0,   145,   149,     0,   152,   157,
     151,   156,     0,     0,     0,     0,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,     0,     5,     0,
       0,    23,    20,     0,    28,     0,    22,    46,    47,    48,
      50,    51,    53,    54,    56,    57,    58,    59,    61,    62,
      64,    66,    68,    70,    72,     0,   221,     0,     0,    38,
       0,   205,     0,     0,   201,   114,     0,     0,     0,     0,
     229,     0,     0,     0,   233,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   265,   266,   267,     0,   254,   248,
     250,   114,   194,   202,   195,   181,   114,   183,     0,   173,
       0,     0,   180,    38,     0,   179,     0,   132,   147,     0,
     139,     0,   153,    35,     0,    36,   114,    76,    89,     0,
      44,    21,     0,    19,     0,   222,   204,   206,     0,     0,
     212,     0,   211,     0,   223,     0,    38,     0,   213,     0,
       0,     0,     0,   236,     0,   225,   228,   232,   234,   244,
       0,   246,     0,     0,     0,     0,     0,     0,   264,   268,
     190,   193,   198,   175,     0,   176,     0,   178,   146,   148,
       0,     0,    14,     0,     0,    29,    74,   208,     0,     0,
     210,   224,   214,     0,     0,   220,     0,   219,     0,   237,
     235,   226,   231,     0,   245,     0,     0,     0,     0,     0,
       0,   174,   177,     0,    13,   114,     0,     0,    26,   207,
     209,   216,     0,     0,   217,   230,   256,   257,   258,     0,
       0,     0,     0,     0,    17,    15,    16,    27,   215,   218,
       0,     0,   262,     0,   260,     0,   255,   259,   263,   261
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    92,    93,    71,    94,    95,   411,   412,    96,   273,
     150,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   151,   152,   267,   214,   111,    31,   128,
      55,    56,    33,    34,    35,    36,   135,   136,   113,   244,
     245,    37,    72,    73,    38,    39,    40,    41,   122,    58,
      59,   121,   297,   231,   232,   233,   413,   298,   187,   310,
     311,   312,   313,   314,    42,   216,   217,   218,   219,   220,
     221,   222,   223,   224,    43,    44,    45,   130
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -354
static const yytype_int16 yypact[] =
{
    2195,  -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,
    -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,
    -354,  -354,  -354,  -354,  -354,    11,   -40,   -17,  -354,     5,
    -354,  -354,    72,  2285,  2285,  -354,    14,  -354,  -354,  2285,
    2285,  2285,  -354,   493,  -354,  -354,   -58,    81,  1013,  2394,
    1749,   150,  -354,   131,  -354,   -59,  -354,   429,   100,    42,
    -354,  -354,    30,  2323,  -354,  -354,  -354,  -354,  -354,    81,
    -354,   143,   -21,  -354,  -354,  -354,  -354,  -354,  -354,  -354,
    -354,  -354,  -354,  1796,  1838,  1838,  -354,    67,    70,  1013,
    -354,  -354,  -354,  -354,  -354,  -354,   158,  -354,  1749,  -354,
      15,   205,   196,    32,   201,    79,   107,    66,   155,    24,
    -354,   108,  2394,    49,  2394,   120,   145,   157,  -354,  -354,
    -354,   150,   156,   131,  -354,  1528,   579,  -354,    72,  -354,
    2097,  2004,  1071,   100,  2323,   951,  -354,    51,  -354,    94,
    1749,    21,  -354,  1013,  -354,  1013,  -354,  -354,  2394,  1749,
     335,  -354,  -354,   142,   162,   242,  -354,  -354,  1571,  1749,
     246,  -354,  1749,  1749,  1749,  1749,  1749,  1749,  1749,  1749,
    1749,  1749,  1749,  1749,  1749,  1749,  1749,  1749,  1749,  1749,
    1749,  -354,  -354,  1951,  1115,   118,  -354,   126,  -354,  -354,
    -354,   256,  -354,  -354,  -354,  -354,   269,  1482,  -354,  -354,
     197,  1749,   199,   203,   207,   208,   849,   212,   278,   198,
     200,   866,  -354,  -354,    58,  -354,  -354,  -354,  -354,   669,
    -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,    71,
     219,   220,  -354,   149,   216,  1350,  -354,   218,  1164,  2044,
    -354,  -354,  1749,  -354,    61,  -354,   222,    28,  -354,  -354,
    -354,  -354,   225,   226,   228,   229,  -354,  -354,  -354,  -354,
    -354,  -354,  -354,  -354,  -354,  -354,  -354,  1749,  -354,  1749,
    1618,  -354,  -354,   152,  -354,   -51,  -354,  -354,  -354,  -354,
      15,    15,   205,   205,   196,   196,   196,   196,    32,    32,
     201,    79,   107,    66,   155,   153,  -354,   238,   240,   244,
    1350,  -354,   250,  1208,   126,  2149,  1257,   257,  1749,   316,
    -354,    97,  1528,    27,  -354,   849,   254,   849,  1749,  1749,
    1749,   261,   759,   245,  -354,  -354,  -354,    63,  -354,  -354,
    -354,  1895,  -354,    85,  -354,  -354,  2241,  -354,   332,  -354,
     258,  1350,  -354,   259,  1749,  -354,   260,  -354,  -354,    77,
    -354,  1749,  -354,   255,   255,  -354,  2360,  -354,  -354,  1482,
    -354,  -354,  1749,  -354,  1749,  -354,  -354,  -354,   265,  1350,
    -354,  1749,  -354,   266,  -354,   271,   270,  1350,  -354,   272,
    1301,   263,   284,  -354,  1393,  -354,  -354,  -354,  -354,  -354,
     849,  -354,   159,   164,   174,   274,   956,   956,  -354,  -354,
    -354,  -354,  -354,  -354,   285,  -354,   288,  -354,  -354,  -354,
     292,   176,  -354,   293,   115,  -354,  -354,  -354,   294,   295,
    -354,  -354,  -354,   297,  1350,  -354,  1749,  -354,   299,  -354,
    -354,  -354,  -354,  1528,  -354,   849,   849,   849,  1749,  1660,
    1707,  -354,  -354,  1749,  -354,  2360,  1749,  1439,  -354,  -354,
    -354,  -354,   300,   301,  -354,  -354,   313,  -354,  -354,   181,
     849,   183,   849,   191,  -354,  -354,  -354,  -354,  -354,  -354,
     849,   283,  -354,   849,  -354,   849,  -354,  -354,  -354,  -354
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -354,  -354,  -354,  -354,  -354,  -354,  -354,   -54,  -354,  -354,
     252,  -354,   -88,   113,   114,    50,   121,   223,   227,   217,
     221,   230,  -354,   -34,    16,  -354,   -87,   -33,   -49,     9,
    -354,   279,  -354,   -44,  -354,  -354,   273,  -109,    -3,  -354,
      46,  -354,   336,  -120,  -354,   -48,  -354,  -354,   -25,   -53,
      -5,  -121,  -111,  -354,    68,  -354,   -20,  -100,  -167,  -113,
      47,  -353,  -354,    95,   -16,  -172,  -354,     4,  -354,   192,
    -244,  -354,  -354,  -354,  -354,   367,  -354,  -354
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -108
static const yytype_int16 yytable[] =
{
     114,   114,   153,   119,   112,   112,   133,    57,   127,    32,
     161,   238,   199,   186,   110,   114,   110,   117,   304,   112,
     230,   251,    46,   162,   163,    62,   241,   123,   115,   116,
     387,   433,    70,    69,   321,   269,   169,   170,   363,    70,
     124,   114,    60,    61,    48,   112,   120,   138,    64,    65,
      66,   179,    32,    52,   171,   172,   153,    51,   153,    51,
     137,   129,    52,   303,   114,   141,   114,    49,   112,   154,
     112,   142,   275,   192,   277,   278,   279,   215,   397,    51,
      51,   225,    52,    52,   119,    51,   114,   114,    52,    50,
     112,   112,    70,   295,   433,   114,    52,   114,   196,   112,
     114,   112,    47,   196,   112,    63,   110,   249,   185,   182,
     164,   188,   246,   250,   341,   308,   193,   309,   138,   138,
     352,   134,   180,   252,   327,   253,    53,   251,   254,   334,
     241,   137,   137,   183,   226,    53,   119,   184,   242,    51,
     229,   198,    52,   389,   269,   391,   140,   349,   237,   269,
     243,   148,   439,   440,   149,   331,    53,   328,    51,   184,
     350,    53,   399,   177,   242,   255,   304,   110,   316,   331,
     215,    54,   175,   184,   274,   155,   156,   157,   185,   369,
     247,   178,   360,   384,   131,   380,   248,   119,   132,   385,
     192,   114,   229,   181,   375,   112,     8,     9,    10,   386,
     302,   447,   183,   176,   332,   189,   184,   448,   110,   348,
     305,   165,   166,   198,   306,    53,   167,   168,   434,   284,
     285,   286,   287,   138,   333,   173,   174,   268,   269,   118,
     190,   392,   393,   394,   337,   338,   137,   361,   362,   269,
     364,   194,   158,   191,   435,   269,   159,   270,   160,   436,
     269,   340,   119,   271,   346,   192,   424,   276,   119,   437,
     269,   444,   445,   456,   457,   458,   471,   269,   473,   269,
     307,   432,   125,   396,   110,   382,   475,   269,   280,   281,
     133,   282,   283,   357,   315,   358,   317,   318,   472,   323,
     474,   319,   320,   192,   288,   289,   322,   324,   476,   325,
      97,   478,    97,   479,   335,   339,   336,   342,   114,   351,
     353,   354,   112,   355,   229,   356,   368,   110,   409,   373,
     455,   192,   379,   365,   246,   366,   333,   383,   198,   119,
     416,   395,   192,   367,   432,   144,   146,   147,   256,   370,
     229,   390,   381,   402,   398,   229,   359,   403,   405,   407,
      97,   459,   461,   463,   417,   420,   421,   404,   438,   422,
     406,   425,   429,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   430,   441,   198,   192,   442,   415,   443,
     446,   470,   477,   449,   450,   418,   451,   419,   454,   468,
     469,   465,    97,   423,   292,   408,   428,   114,   290,   293,
     198,   112,   195,   291,   401,   139,   414,   239,   388,   294,
      68,   330,     0,     0,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,   125,     0,     0,     0,     0,     0,     0,     0,
     452,     0,   453,     0,     0,     0,     0,     0,     0,   198,
       0,     0,     0,    97,     0,     0,     0,     0,     0,   464,
       0,     0,   466,   198,     0,     0,     0,     1,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    67,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,    27,     0,
      28,    29,    30,     0,     0,  -107,     0,     0,     0,     0,
     126,     0,    97,     0,     0,     0,     0,     0,  -107,     0,
       0,     1,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
      97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,    27,     0,    28,    29,    30,     0,     0,     0,
       0,     0,     0,     0,     0,    74,    75,    76,     0,    77,
     200,    79,    80,    81,    82,    83,     0,    84,    85,     0,
       0,     0,     0,    97,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    97,     1,    86,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,   201,   202,   203,     0,   204,   205,
     206,   207,   208,   209,   210,   211,    26,    87,    27,    88,
      28,    29,    30,    89,     0,     0,     0,     0,     0,     0,
     126,   212,    90,    91,     0,    74,    75,    76,   213,    77,
     200,    79,    80,    81,    82,    83,     0,    84,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,    86,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,   201,   202,   203,     0,   204,   205,
     206,   207,   208,   209,   210,   211,    26,    87,    27,    88,
      28,    29,    30,    89,     0,     0,     0,     0,     0,     0,
     126,   329,    90,    91,     0,    74,    75,    76,   213,    77,
      78,    79,    80,    81,    82,    83,     0,    84,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,    86,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,    87,    27,    88,
      28,    29,    30,    89,     0,     0,     0,     0,     0,     0,
       0,     0,    90,    91,     0,    74,    75,    76,   213,    77,
     200,    79,    80,    81,    82,    83,     0,    84,    85,     0,
       0,     0,    74,    75,    76,     0,    77,    78,    79,    80,
      81,    82,    83,     0,    84,    85,     0,     0,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    86,     0,     0,     0,     0,
       0,     0,     0,     0,   201,   202,   203,     0,   204,   205,
     206,   207,   208,   209,   210,   211,     0,    87,     0,    88,
       0,     0,     0,    89,     0,     0,     0,     0,     0,     0,
     126,     0,    90,    91,    87,     0,    88,     0,   213,     0,
      89,     0,     0,     0,     0,     0,     0,     0,     0,    90,
      91,     0,    74,    75,    76,   326,    77,    78,    79,    80,
      81,    82,    83,     0,    84,    85,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       0,     0,     0,     0,     0,    86,     0,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,    74,
      75,    76,     0,    77,    78,    79,    80,    81,    82,    83,
      27,    84,    85,    29,    87,     0,    88,     0,     0,     0,
      89,     0,     0,   240,     0,     0,     0,     0,     0,    90,
      91,     1,    86,     0,     0,   213,     0,     0,     0,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    74,    75,   234,
       0,    77,    78,    79,    80,    81,    82,    83,     0,    84,
      85,    87,    27,    88,     0,     0,     0,    89,     0,     0,
       0,     0,     0,     0,     0,     0,    90,    91,     0,     0,
      86,     0,     0,   235,     0,     0,     0,     8,     9,    10,
       0,    74,    75,   299,     0,    77,    78,    79,    80,    81,
      82,    83,     0,    84,    85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    87,
     118,    88,     0,     0,    86,    89,     0,   300,     0,     0,
     236,     8,     9,    10,    90,    91,     0,     0,     0,     0,
      74,    75,   343,     0,    77,    78,    79,    80,    81,    82,
      83,     0,    84,    85,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    87,   118,    88,     0,     0,     0,    89,
       0,     0,     0,    86,   301,     0,   344,     0,    90,    91,
       8,     9,    10,     0,    74,    75,    76,     0,    77,    78,
      79,    80,    81,    82,    83,     0,    84,    85,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    87,   118,    88,     0,     0,    86,    89,     0,
     371,     0,     0,   345,     8,     9,    10,    90,    91,     0,
       0,     0,     0,    74,    75,   376,     0,    77,    78,    79,
      80,    81,    82,    83,     0,    84,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    87,   118,    88,     0,
       0,     0,    89,     0,     0,     0,    86,   372,     0,   377,
       0,    90,    91,     8,     9,    10,     0,    74,    75,    76,
       0,    77,    78,    79,    80,    81,    82,    83,     0,    84,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,   118,    88,     0,     0,
      86,    89,     0,   426,     0,     0,   378,     8,     9,    10,
      90,    91,     0,     0,     0,     0,    74,    75,    76,     0,
      77,    78,    79,    80,    81,    82,    83,     0,    84,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    87,
     118,    88,     0,     0,     0,    89,     0,     0,     0,    86,
     427,     0,     0,     0,    90,    91,     8,     9,    10,    74,
      75,    76,     0,    77,    78,    79,    80,    81,    82,    83,
       0,    84,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    87,   118,
      88,     0,    86,     0,    89,     0,     0,     0,     0,     0,
       0,     0,     0,    90,    91,    74,    75,    76,     0,    77,
      78,    79,    80,    81,    82,    83,     0,    84,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    87,     0,    88,     0,     0,     0,    89,    86,     0,
       0,   308,     0,   309,   197,   431,    90,    91,    74,    75,
      76,     0,    77,    78,    79,    80,    81,    82,    83,     0,
      84,    85,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    87,     0,    88,
       0,    86,     0,    89,     0,     0,     0,   308,     0,   309,
     197,   467,    90,    91,    74,    75,    76,     0,    77,    78,
      79,    80,    81,    82,    83,     0,    84,    85,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      87,     0,    88,     0,     0,     0,    89,    86,     0,     0,
     308,     0,   309,   197,     0,    90,    91,    74,    75,    76,
       0,    77,    78,    79,    80,    81,    82,    83,     0,    84,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    87,     0,    88,     0,
      86,     0,    89,     0,     0,     0,     0,     0,     0,   197,
       0,    90,    91,     0,    74,    75,    76,     0,    77,    78,
      79,    80,    81,    82,    83,     0,    84,    85,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    87,
       0,    88,     0,     0,     0,    89,   272,    86,     0,     0,
       0,     0,     0,     0,    90,    91,    74,    75,    76,     0,
      77,    78,    79,    80,    81,    82,    83,     0,    84,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    87,     0,    88,    86,
       0,     0,    89,     0,     0,     0,     0,     0,     0,   359,
       0,    90,    91,    74,    75,    76,     0,    77,    78,    79,
      80,    81,    82,    83,     0,    84,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    87,     0,
      88,     0,     0,     0,    89,   460,    86,     0,     0,     0,
       0,     0,     0,    90,    91,    74,    75,    76,     0,    77,
      78,    79,    80,    81,    82,    83,     0,    84,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,     0,    88,    86,     0,
       0,    89,   462,     0,     0,     0,     0,     0,     0,     0,
      90,    91,    74,    75,    76,     0,    77,    78,    79,    80,
      81,    82,    83,     0,    84,    85,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    87,     0,    88,
       0,     0,     0,    89,     0,    86,     0,     0,     0,     0,
       0,     0,    90,    91,    74,    75,    76,     0,    77,    78,
      79,    80,    81,    82,    83,     0,    84,    85,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    87,     0,    88,    86,     0,     0,
     143,     0,     0,     0,     0,     0,     0,     0,     0,    90,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    51,     0,     0,    52,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    87,     0,    88,     0,
       0,     0,   145,     0,     0,     0,     0,     0,     0,     0,
       0,    90,    91,     1,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    51,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,    27,     0,    28,     0,    30,   331,
     296,     0,     0,   184,     0,     0,     0,     0,     0,     1,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,   227,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      27,     0,    28,     0,    30,   183,   296,     0,     0,   184,
       0,     0,     1,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     1,    27,     0,    28,     0,    30,     0,   228,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,     0,     0,    29,     0,     0,     0,
       0,     0,     0,     0,     0,     1,   347,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,     0,    28,    29,
      30,     0,     0,     0,     0,     0,     0,     1,   126,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,    27,     0,
      28,     0,    30,     1,   374,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,    27,     0,    28,    29,    30,     1,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,   400,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      27,     0,    28,     1,    30,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,    26,     0,    27,     0,    28,     0,    30,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       0,     0,    27,     0,     0,    29,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,     0,   410,     0,     0,     0,
       0,     0,     1,     0,     0,     0,     0,     0,     0,    27,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27
};

static const yytype_int16 yycheck[] =
{
      48,    49,    89,    51,    48,    49,    59,    32,    57,     0,
      98,   132,   125,   113,    48,    63,    50,    50,   185,    63,
     131,   141,    11,     8,     9,    11,   135,    86,    48,    49,
       3,   384,    11,    91,   206,    86,     4,     5,    89,    11,
      99,    89,    33,    34,    84,    89,    51,    63,    39,    40,
      41,    27,    43,    11,    22,    23,   143,     8,   145,     8,
      63,    57,    11,   184,   112,    86,   114,    84,   112,    89,
     114,    92,   159,   121,   162,   163,   164,   126,   322,     8,
       8,   130,    11,    11,   132,     8,   134,   135,    11,    84,
     134,   135,    11,   180,   447,   143,    11,   145,   123,   143,
     148,   145,    91,   128,   148,    91,   140,   140,   113,   112,
      95,   114,   137,    92,   235,    88,   121,    90,   134,   135,
      92,    91,    98,   143,   211,   145,    84,   247,   148,   229,
     239,   134,   135,    84,   130,    84,   184,    88,    87,     8,
     131,   125,    11,   315,    86,   317,     3,    86,   132,    86,
      99,    84,   396,   397,    84,    84,    84,    99,     8,    88,
      99,    84,    99,    97,    87,   149,   333,   201,   201,    84,
     219,    99,    93,    88,   158,    17,    18,    19,   183,   300,
      86,    26,   270,    86,    84,   306,    92,   235,    88,    92,
     238,   239,   183,    85,   305,   239,    46,    47,    48,   312,
     184,    86,    84,    96,   229,    85,    88,    92,   242,   242,
      84,     6,     7,   197,    88,    84,    20,    21,   390,   169,
     170,   171,   172,   239,   229,    24,    25,    85,    86,    79,
      85,   318,   319,   320,    85,    86,   239,    85,    86,    86,
      87,    85,    84,    86,    85,    86,    88,    85,    90,    85,
      86,   235,   300,    11,   238,   303,   377,    11,   306,    85,
      86,    85,    86,   435,   436,   437,    85,    86,    85,    86,
      14,   384,     3,   322,   308,   308,    85,    86,   165,   166,
     333,   167,   168,   267,    87,   269,    87,    84,   460,    11,
     462,    84,    84,   341,   173,   174,    84,    99,   470,    99,
      48,   473,    50,   475,    85,    89,    86,    89,   356,    87,
      85,    85,   356,    85,   305,    86,   300,   351,   351,   303,
     433,   369,   306,    85,   349,    85,   331,    11,   312,   377,
     364,    70,   380,    89,   447,    83,    84,    85,     3,    89,
     331,    87,    85,    11,    99,   336,    91,    89,    89,    89,
      98,   438,   439,   440,    89,    89,    85,   341,    84,    89,
     344,    89,    99,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    89,    89,   359,   424,    89,   362,    87,
      87,    68,    99,    89,    89,   369,    89,   371,    89,    89,
      89,   445,   140,   377,   177,   349,   380,   445,   175,   178,
     384,   445,   123,   176,   336,    69,   359,   134,   313,   179,
      43,   219,    -1,    -1,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     424,    -1,   426,    -1,    -1,    -1,    -1,    -1,    -1,   433,
      -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,   443,
      -1,    -1,   446,   447,    -1,    -1,    -1,    38,    -1,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,     0,   242,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,
      81,    82,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      91,    -1,   270,    -1,    -1,    -1,    -1,    -1,    99,    -1,
      -1,    38,    -1,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
     308,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    -1,    79,    -1,    81,    82,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     6,     7,     8,    -1,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    -1,
      -1,    -1,    -1,   351,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   364,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    65,    66,    67,    -1,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,    -1,
      91,    92,    93,    94,    -1,     6,     7,     8,    99,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    65,    66,    67,    -1,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,    -1,
      91,    92,    93,    94,    -1,     6,     7,     8,    99,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    78,    79,    80,
      81,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    93,    94,    -1,     6,     7,     8,    99,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    -1,
      -1,    -1,     6,     7,     8,    -1,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    66,    67,    -1,    69,    70,
      71,    72,    73,    74,    75,    76,    -1,    78,    -1,    80,
      -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,
      91,    -1,    93,    94,    78,    -1,    80,    -1,    99,    -1,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,
      94,    -1,     6,     7,     8,    99,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    15,    16,
      79,    18,    19,    82,    78,    -1,    80,    -1,    -1,    -1,
      84,    -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    93,
      94,    38,    39,    -1,    -1,    99,    -1,    -1,    -1,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,     6,     7,     8,
      -1,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    78,    79,    80,    -1,    -1,    -1,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    93,    94,    -1,    -1,
      39,    -1,    -1,    42,    -1,    -1,    -1,    46,    47,    48,
      -1,     6,     7,     8,    -1,    10,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      79,    80,    -1,    -1,    39,    84,    -1,    42,    -1,    -1,
      89,    46,    47,    48,    93,    94,    -1,    -1,    -1,    -1,
       6,     7,     8,    -1,    10,    11,    12,    13,    14,    15,
      16,    -1,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    79,    80,    -1,    -1,    -1,    84,
      -1,    -1,    -1,    39,    89,    -1,    42,    -1,    93,    94,
      46,    47,    48,    -1,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    79,    80,    -1,    -1,    39,    84,    -1,
      42,    -1,    -1,    89,    46,    47,    48,    93,    94,    -1,
      -1,    -1,    -1,     6,     7,     8,    -1,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    79,    80,    -1,
      -1,    -1,    84,    -1,    -1,    -1,    39,    89,    -1,    42,
      -1,    93,    94,    46,    47,    48,    -1,     6,     7,     8,
      -1,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    79,    80,    -1,    -1,
      39,    84,    -1,    42,    -1,    -1,    89,    46,    47,    48,
      93,    94,    -1,    -1,    -1,    -1,     6,     7,     8,    -1,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      79,    80,    -1,    -1,    -1,    84,    -1,    -1,    -1,    39,
      89,    -1,    -1,    -1,    93,    94,    46,    47,    48,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    15,    16,
      -1,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,
      80,    -1,    39,    -1,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    93,    94,     6,     7,     8,    -1,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    -1,    80,    -1,    -1,    -1,    84,    39,    -1,
      -1,    88,    -1,    90,    91,    92,    93,    94,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    80,
      -1,    39,    -1,    84,    -1,    -1,    -1,    88,    -1,    90,
      91,    92,    93,    94,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    -1,    80,    -1,    -1,    -1,    84,    39,    -1,    -1,
      88,    -1,    90,    91,    -1,    93,    94,     6,     7,     8,
      -1,    10,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    80,    -1,
      39,    -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      -1,    93,    94,    -1,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      -1,    80,    -1,    -1,    -1,    84,    85,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    93,    94,     6,     7,     8,    -1,
      10,    11,    12,    13,    14,    15,    16,    -1,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    80,    39,
      -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      -1,    93,    94,     6,     7,     8,    -1,    10,    11,    12,
      13,    14,    15,    16,    -1,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,
      80,    -1,    -1,    -1,    84,    85,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    93,    94,     6,     7,     8,    -1,    10,
      11,    12,    13,    14,    15,    16,    -1,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    -1,    80,    39,    -1,
      -1,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      93,    94,     6,     7,     8,    -1,    10,    11,    12,    13,
      14,    15,    16,    -1,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    80,
      -1,    -1,    -1,    84,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    93,    94,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    -1,    80,    39,    -1,    -1,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,
      94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     8,    -1,    -1,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    80,    -1,
      -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    93,    94,    38,    -1,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    79,    -1,    81,    -1,    83,    84,
      85,    -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,
      79,    -1,    81,    -1,    83,    84,    85,    -1,    -1,    88,
      -1,    -1,    38,    -1,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    38,    79,    -1,    81,    -1,    83,    -1,    85,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    92,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    79,    -1,    81,    82,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    38,    91,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,
      81,    -1,    83,    38,    85,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    79,    -1,    81,    82,    83,    38,
      -1,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,
      79,    -1,    81,    38,    83,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    77,    -1,    79,    -1,    81,    -1,    83,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    79,    -1,    -1,    82,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    38,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    77,    79,    81,    82,
      83,   128,   129,   132,   133,   134,   135,   141,   144,   145,
     146,   147,   164,   174,   175,   176,    11,    91,    84,    84,
      84,     8,    11,    84,    99,   130,   131,   148,   149,   150,
     129,   129,    11,    91,   129,   129,   129,     0,   175,    91,
      11,   103,   142,   143,     6,     7,     8,    10,    11,    12,
      13,    14,    15,    16,    18,    19,    39,    78,    80,    84,
      93,    94,   101,   102,   104,   105,   108,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   127,   133,   138,   145,   156,   156,   127,    79,   145,
     150,   151,   148,    86,    99,     3,    91,   128,   129,   167,
     177,    84,    88,   149,    91,   136,   137,   138,   164,   142,
       3,    86,    92,    84,   110,    84,   110,   110,    84,    84,
     110,   123,   124,   126,   156,    17,    18,    19,    84,    88,
      90,   112,     8,     9,    95,     6,     7,    20,    21,     4,
       5,    22,    23,    24,    25,    93,    96,    97,    26,    27,
      98,    85,   138,    84,    88,   150,   157,   158,   138,    85,
      85,    86,   145,   150,    85,   131,   148,    91,   124,   159,
      11,    65,    66,    67,    69,    70,    71,    72,    73,    74,
      75,    76,    92,    99,   126,   128,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   128,   167,    11,    85,   129,
     152,   153,   154,   155,     8,    42,    89,   124,   151,   136,
      92,   137,    87,    99,   139,   140,   148,    86,    92,   127,
      92,   143,   156,   156,   156,   124,     3,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,   125,    85,    86,
      85,    11,    85,   109,   124,   126,    11,   112,   112,   112,
     113,   113,   114,   114,   115,   115,   115,   115,   116,   116,
     117,   118,   119,   120,   121,   126,    85,   152,   157,     8,
      42,    89,   124,   151,   158,    84,    88,    14,    88,    90,
     159,   160,   161,   162,   163,    87,   127,    87,    84,    84,
      84,   165,    84,    11,    99,    99,    99,   126,    99,    92,
     169,    84,   148,   150,   157,    85,    86,    85,    86,    89,
     124,   151,    89,     8,    42,    89,   124,    92,   127,    86,
      99,    87,    92,    85,    85,    85,    86,   124,   124,    91,
     112,    85,    86,    89,    87,    85,    85,    89,   124,   151,
      89,    42,    89,   124,    85,   152,     8,    42,    89,   124,
     151,    85,   127,    11,    86,    92,   159,     3,   163,   165,
      87,   165,   126,   126,   126,    70,   128,   170,    99,    99,
      64,   154,    11,    89,   124,    89,   124,    89,   140,   127,
      66,   106,   107,   156,   160,   124,   123,    89,   124,   124,
      89,    85,    89,   124,   151,    89,    42,    89,   124,    99,
      89,    92,   159,   161,   165,    85,    85,    85,    84,   170,
     170,    89,    89,    87,    85,    86,    87,    86,    92,    89,
      89,    89,   124,   124,    89,   159,   165,   165,   165,   126,
      85,   126,    85,   126,   124,   107,   124,    92,    89,    89,
      68,    85,   165,    85,   165,    85,   165,    99,   165,   165
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
        case 20:
#line 101 "cparser.y"
    { (yyval.val) = makeAST(CALL_OP, (yyvsp[(1) - (3)].val), 0); }
    break;

  case 21:
#line 103 "cparser.y"
    { (yyval.val) = makeAST(CALL_OP, (yyvsp[(1) - (4)].val), (yyvsp[(3) - (4)].val)); }
    break;

  case 28:
#line 114 "cparser.y"
    { (yyval.val) = makeList1((yyvsp[(1) - (1)].val)); }
    break;

  case 29:
#line 116 "cparser.y"
    { (yyval.val) = addLast((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val)); }
    break;

  case 46:
#line 146 "cparser.y"
    { (yyval.val) = makeAST(MUL_OP, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val)); }
    break;

  case 50:
#line 155 "cparser.y"
    { (yyval.val) = makeAST(PLUS_OP, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val)); }
    break;

  case 51:
#line 157 "cparser.y"
    { (yyval.val) = makeAST(MINUS_OP, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val)); }
    break;

  case 56:
#line 169 "cparser.y"
    { (yyval.val) = makeAST(LT_OP, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val)); }
    break;

  case 57:
#line 171 "cparser.y"
    { (yyval.val) = makeAST(GT_OP, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val)); }
    break;

  case 58:
#line 173 "cparser.y"
    { (yyval.val) = makeAST(LE_OP, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val)); }
    break;

  case 59:
#line 175 "cparser.y"
    { (yyval.val) = makeAST(GE_OP, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val)); }
    break;

  case 76:
#line 217 "cparser.y"
    { (yyval.val) = makeAST(EX_EQ, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val)); }
    break;

  case 92:
#line 248 "cparser.y"
    { (yyvsp[(2) - (3)].val)->left->sym->type = (yyvsp[(1) - (3)].val); (yyval.val) = (yyvsp[(2) - (3)].val); /*printf("[%s]\n",$2->left->sym->name);*/ }
    break;

  case 104:
#line 267 "cparser.y"
    { (yyval.val) = addList((yyvsp[(1) - (1)].val));/*printf("[%s]\n",$1->sym->name);*//*printf("[%x]\n",$1->right);*/ }
    break;

  case 105:
#line 269 "cparser.y"
    { (yyval.val) = addLast((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val));/*printf("[%s]\n",$3->sym->name);*/ }
    break;

  case 106:
#line 274 "cparser.y"
    { (yyval.val) = makeList1((yyvsp[(1) - (3)].val)); (yyval.val) = addLast((yyval.val), makeAST(EX_EQ, (yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val))); }
    break;

  case 168:
#line 388 "cparser.y"
    { (yyvsp[(2) - (2)].val)->sym->pointer = 1/*$1->sym->pointer*/; (yyval.val) = (yyvsp[(2) - (2)].val); }
    break;

  case 181:
#line 406 "cparser.y"
    { (yyvsp[(1) - (4)].val)->right = (yyvsp[(3) - (4)].val); }
    break;

  case 183:
#line 410 "cparser.y"
    { (yyvsp[(1) - (4)].val)->right = (yyvsp[(3) - (4)].val); }
    break;

  case 192:
#line 434 "cparser.y"
    { (yyval.val) = makeList1((yyvsp[(1) - (1)].val)); }
    break;

  case 193:
#line 436 "cparser.y"
    { (yyval.val) = addLast((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val)); }
    break;

  case 194:
#line 441 "cparser.y"
    { (yyval.val) = (yyvsp[(2) - (2)].val); }
    break;

  case 197:
#line 448 "cparser.y"
    { (yyval.val) = makeList1((yyvsp[(1) - (1)].val)); }
    break;

  case 198:
#line 450 "cparser.y"
    { (yyval.val) = addLast((yyvsp[(1) - (3)].val), (yyvsp[(3) - (3)].val)); }
    break;

  case 248:
#line 537 "cparser.y"
    { (yyval.val) = makeAST(BLOCK_STATEMENT, (yyvsp[(2) - (3)].val), 0); printAST((yyval.val)); }
    break;

  case 249:
#line 542 "cparser.y"
    { (yyval.val) = addList((yyvsp[(1) - (1)].val)); }
    break;

  case 250:
#line 544 "cparser.y"
    { (yyval.val) = addLast((yyvsp[(1) - (2)].val), (yyvsp[(2) - (2)].val)); }
    break;

  case 255:
#line 559 "cparser.y"
    { (yyval.val) = makeAST(IF_STATEMENT, (yyvsp[(3) - (7)].val), makeList2((yyvsp[(5) - (7)].val), (yyvsp[(7) - (7)].val))); }
    break;

  case 256:
#line 561 "cparser.y"
    { (yyval.val) = makeAST(IF_STATEMENT, (yyvsp[(3) - (5)].val), makeList2((yyvsp[(5) - (5)].val), NULL)); }
    break;

  case 258:
#line 567 "cparser.y"
    { (yyval.val) = makeAST(WHILE_STATEMENT, (yyvsp[(3) - (5)].val), (yyvsp[(5) - (5)].val)); }
    break;

  case 261:
#line 571 "cparser.y"
    { (yyval.val) = makeAST(FOR_STATEMENT, makeList3((yyvsp[(3) - (7)].val), (yyvsp[(4) - (7)].val), (yyvsp[(5) - (7)].val)), (yyvsp[(7) - (7)].val)); }
    break;

  case 267:
#line 581 "cparser.y"
    { (yyval.val) = makeAST(RETURN_STATEMENT, NULL, NULL); }
    break;

  case 268:
#line 583 "cparser.y"
    { (yyval.val) = makeAST(RETURN_STATEMENT, (yyvsp[(2) - (3)].val), NULL); }
    break;

  case 272:
#line 594 "cparser.y"
    { declareVariable(getSymbol((yyvsp[(1) - (1)].val)->left), (yyvsp[(1) - (1)].val)->right->left->right); }
    break;

  case 274:
#line 601 "cparser.y"
    { defineFunction(getSymbol((yyvsp[(2) - (3)].val)), (yyvsp[(2) - (3)].val)->right, (yyvsp[(3) - (3)].val)); }
    break;


/* Line 1267 of yacc.c.  */
#line 2536 "y.tab.c"
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


#line 612 "cparser.y"

#include <stdarg.h>
void error(char *fmt, ...)
{
	fprintf(stderr, "\033[1m\033[31m");
	va_list argp;
	va_start(argp, fmt);
	vfprintf(stderr, fmt, argp);
	va_end(argp);
	fprintf(stderr, "\033[0m");
	exit(1);
}

#if 1
#include "lex.yy.c"

// retrieve from '# digits text'
static char *source; // current input file name
void yymark()
{
	if (source) free(source);
	source = (char *)calloc(yyleng, sizeof(char));
	if (source) {
		sscanf(yytext, "# %d %s", &yylineno, source);
	}
}

int main(int argc, char *argv[])
{
#ifdef DEBUG
	yydebug = 1;
#endif
	if (!strcmp(argv[1], "-S")) {
		argv++;
		argc = 1;
		yyin = fopen(argv[1], "r");
	}

	char name[3][256];
	if (argc>1) {
		yyin = fopen(argv[1], "r");
		if (argc>2) {
			yyout = fopen(argv[2], "w");
		} else {
			sscanf(argv[1], "%[^.]]", name[0]);
			strcpy(name[1], name[0]);
			strcat(name[1], ".o");
			strcpy(name[2], name[0]);
			//strcat(name[0], ".asm");
			strcat(name[0], ".s");	// gas
			yyout = fopen(name[0], "w");
		}
	}

	if (yyparse()) {
		fprintf(stderr, "*** fatal error!\n");
		return 1;
	}

	if (argc>1) {
		fclose(yyout);
		fclose(yyin);

		char cmd[256];
		//snprintf(cmd, 256, "as %s -o %s", name[0], name[1]);
		//system(cmd);
		//snprintf(cmd, 256, "gcc %s -o %s", name[1], name[2]);
		snprintf(cmd, 256, "gcc %s -o %s", name[0], name[2]);
		system(cmd);
	}

	return 0;
}
#else

#include "clex.c"
int main(int argc, char *argv[])
{
	yyparse();
	return 0;
}
#endif

