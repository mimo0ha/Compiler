/* A Bison parser, made by GNU Bison 2.1.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005 Free Software Foundation, Inc.

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

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.1"

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
     ID = 258,
     STRING = 259,
     ASSIGN = 260,
     RETURN = 261,
     EQ = 262,
     PLUS = 263,
     MINUS = 264,
     MUL = 265,
     DIVIDE = 266,
     SEMICOLON = 267,
     EQUAL = 268,
     PRINT = 269,
     KEYWORD = 270,
     IDENTIFIER = 271,
     DEF = 272,
     INDENTAITON = 273,
     DENTAITON = 274,
     NEWLINE = 275,
     STRING_LITERAL = 276,
     DIGIT = 277,
     NUMBER = 278,
     DECIMAL = 279,
     LETTER = 280,
     ALPHANUM = 281,
     OPERATORS = 282,
     COLON = 283,
     ELSE = 284,
     IF = 285,
     FOR = 286,
     WHILE = 287,
     INPUT = 288,
     EXCEPT = 289,
     TRY = 290,
     ELIF = 291,
     LBRACKET = 292,
     RBRACKET = 293,
     TRUE = 294,
     FALSE = 295,
     COMMA = 296,
     GREATERTHAN = 297,
     LESSTHAN = 298,
     AS = 299,
     FINALLY = 300,
     IN = 301,
     RANGE = 302,
     BREAK = 303,
     CONTINUE = 304,
     SQUAREBL = 305,
     SQUAREBR = 306,
     PASS = 307,
     IMPORT = 308,
     DOT = 309,
     CLASS = 310,
     FROM = 311,
     OR = 312,
     AND = 313,
     UMINUS = 314
   };
#endif
/* Tokens.  */
#define ID 258
#define STRING 259
#define ASSIGN 260
#define RETURN 261
#define EQ 262
#define PLUS 263
#define MINUS 264
#define MUL 265
#define DIVIDE 266
#define SEMICOLON 267
#define EQUAL 268
#define PRINT 269
#define KEYWORD 270
#define IDENTIFIER 271
#define DEF 272
#define INDENTAITON 273
#define DENTAITON 274
#define NEWLINE 275
#define STRING_LITERAL 276
#define DIGIT 277
#define NUMBER 278
#define DECIMAL 279
#define LETTER 280
#define ALPHANUM 281
#define OPERATORS 282
#define COLON 283
#define ELSE 284
#define IF 285
#define FOR 286
#define WHILE 287
#define INPUT 288
#define EXCEPT 289
#define TRY 290
#define ELIF 291
#define LBRACKET 292
#define RBRACKET 293
#define TRUE 294
#define FALSE 295
#define COMMA 296
#define GREATERTHAN 297
#define LESSTHAN 298
#define AS 299
#define FINALLY 300
#define IN 301
#define RANGE 302
#define BREAK 303
#define CONTINUE 304
#define SQUAREBL 305
#define SQUAREBR 306
#define PASS 307
#define IMPORT 308
#define DOT 309
#define CLASS 310
#define FROM 311
#define OR 312
#define AND 313
#define UMINUS 314




/* Copy the first part of user declarations.  */
#line 1 "grammar.y"

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
int yydebug=1;
FILE *yyin;
void yyerror(const char *);
extern int yylex();



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

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 227 "grammar.tab.c"

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T) && (defined (__STDC__) || defined (__cplusplus))
# include <stddef.h> /* INFRINGES ON USER NAME SPACE */
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if defined (__STDC__) || defined (__cplusplus)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     define YYINCLUDED_STDLIB_H
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2005 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM ((YYSIZE_T) -1)
#  endif
#  ifdef __cplusplus
extern "C" {
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if (! defined (malloc) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if (! defined (free) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifdef __cplusplus
}
#  endif
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (defined (YYSTYPE_IS_TRIVIAL) && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short int yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short int) + sizeof (YYSTYPE))			\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined (__GNUC__) && 1 < __GNUC__
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
      while (0)
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
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short int yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  56
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1035

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  65
/* YYNRULES -- Number of rules. */
#define YYNRULES  219
/* YYNRULES -- Number of states. */
#define YYNSTATES  402

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   314

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
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
       2,     2,     2,     2,    59,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    60
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     5,     8,    11,    14,    17,    20,    23,
      26,    29,    31,    33,    35,    37,    39,    41,    43,    45,
      48,    51,    53,    55,    57,    59,    61,    66,    71,    76,
      81,    86,    91,    96,    99,   103,   105,   108,   110,   113,
     115,   118,   120,   123,   127,   129,   132,   135,   137,   140,
     142,   145,   148,   150,   154,   157,   161,   163,   166,   169,
     171,   174,   176,   179,   182,   184,   186,   189,   191,   194,
     196,   199,   202,   204,   206,   209,   212,   216,   218,   221,
     223,   226,   229,   231,   235,   238,   240,   243,   245,   248,
     250,   253,   256,   258,   262,   265,   268,   272,   274,   277,
     279,   282,   284,   287,   290,   292,   294,   296,   299,   303,
     305,   309,   313,   317,   321,   325,   329,   333,   337,   342,
     347,   351,   355,   359,   363,   366,   370,   373,   375,   383,
     384,   386,   388,   392,   394,   396,   398,   400,   402,   408,
     414,   419,   424,   430,   436,   440,   446,   452,   457,   462,
     468,   474,   478,   484,   490,   495,   500,   506,   512,   516,
     522,   528,   533,   538,   544,   550,   554,   559,   564,   571,
     578,   580,   582,   584,   586,   591,   597,   601,   603,   610,
     617,   624,   631,   639,   649,   652,   656,   659,   663,   667,
     671,   676,   680,   685,   690,   695,   700,   704,   706,   708,
     710,   712,   715,   717,   721,   725,   730,   735,   737,   739,
     744,   752,   756,   758,   763,   766,   770,   775,   781,   784
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const yysigned_char yyrhs[] =
{
      62,     0,    -1,    63,    -1,    63,    84,    -1,    63,    94,
      -1,    63,   123,    -1,    63,   124,    -1,    63,   120,    -1,
      63,    64,    -1,    63,   100,    -1,    63,   102,    -1,   102,
      -1,   100,    -1,   120,    -1,    84,    -1,    94,    -1,   123,
      -1,   124,    -1,    64,    -1,   113,    20,    -1,   114,    20,
      -1,   112,    -1,    52,    -1,   118,    -1,    20,    -1,    82,
      -1,    20,    18,    72,    19,    -1,    20,    18,    73,    19,
      -1,    20,    18,    75,    19,    -1,    20,    18,    77,    19,
      -1,    20,    18,    74,    19,    -1,    20,    18,    76,    19,
      -1,    20,    18,    78,    19,    -1,    80,    20,    -1,    72,
      80,    20,    -1,    64,    -1,    72,    64,    -1,   101,    -1,
      72,   101,    -1,   103,    -1,    72,   103,    -1,    97,    -1,
      72,    97,    -1,    73,    79,    20,    -1,    88,    -1,    73,
      88,    -1,    79,    20,    -1,   100,    -1,    73,   100,    -1,
     102,    -1,    73,   102,    -1,    73,    64,    -1,    64,    -1,
      74,    79,    20,    -1,    80,    20,    -1,    74,    80,    20,
      -1,    91,    -1,    74,    91,    -1,    79,    20,    -1,   101,
      -1,    74,   101,    -1,   103,    -1,    74,   103,    -1,    74,
      64,    -1,    64,    -1,    94,    -1,    75,    94,    -1,   100,
      -1,    75,   100,    -1,   102,    -1,    75,   102,    -1,    75,
      64,    -1,    64,    -1,    97,    -1,    76,    97,    -1,    80,
      20,    -1,    76,    80,    20,    -1,   101,    -1,    76,   101,
      -1,   103,    -1,    76,   103,    -1,    76,    64,    -1,    64,
      -1,    77,    79,    20,    -1,    79,    20,    -1,   100,    -1,
      77,   100,    -1,   102,    -1,    77,   102,    -1,    64,    -1,
      77,    64,    -1,    77,    88,    -1,    88,    -1,    78,    79,
      20,    -1,    79,    20,    -1,    80,    20,    -1,    78,    80,
      20,    -1,   101,    -1,    78,   101,    -1,   103,    -1,    78,
     103,    -1,    64,    -1,    78,    64,    -1,    78,    91,    -1,
      91,    -1,    48,    -1,    49,    -1,     6,    81,    -1,    81,
      41,    87,    -1,    87,    -1,    16,     5,    83,    -1,    16,
       5,   114,    -1,    16,     5,   118,    -1,    83,     8,    83,
      -1,    83,     9,    83,    -1,    83,    13,    83,    -1,    83,
      10,    83,    -1,    83,    11,    83,    -1,    83,    43,     5,
      83,    -1,    83,    42,     5,    83,    -1,    83,    43,    83,
      -1,    83,    42,    83,    -1,    83,    58,    83,    -1,    83,
      57,    83,    -1,    59,    83,    -1,    37,    83,    38,    -1,
       9,    83,    -1,    87,    -1,    17,    16,    37,    85,    38,
      28,    65,    -1,    -1,    86,    -1,    87,    -1,    86,    41,
      87,    -1,    16,    -1,    23,    -1,    21,    -1,    39,    -1,
      40,    -1,    30,    83,    28,    66,    89,    -1,    30,    83,
      28,    66,    90,    -1,    30,    83,    28,    66,    -1,    36,
      83,    28,    66,    -1,    36,    83,    28,    66,    90,    -1,
      36,    83,    28,    66,    89,    -1,    29,    28,    66,    -1,
      30,    83,    28,    69,    92,    -1,    30,    83,    28,    69,
      93,    -1,    30,    83,    28,    69,    -1,    36,    83,    28,
      69,    -1,    36,    83,    28,    69,    93,    -1,    36,    83,
      28,    69,    92,    -1,    29,    28,    69,    -1,    30,    83,
      28,    67,    95,    -1,    30,    83,    28,    67,    96,    -1,
      30,    83,    28,    67,    -1,    36,    83,    28,    67,    -1,
      36,    83,    28,    67,    96,    -1,    36,    83,    28,    67,
      95,    -1,    29,    28,    67,    -1,    30,    83,    28,    70,
      98,    -1,    30,    83,    28,    70,    99,    -1,    30,    83,
      28,    70,    -1,    36,    83,    28,    70,    -1,    36,    83,
      28,    70,    99,    -1,    36,    83,    28,    70,    98,    -1,
      29,    28,    70,    -1,    32,    83,    28,    68,    -1,    32,
      83,    28,    71,    -1,    31,    16,    46,   104,    28,    68,
      -1,    31,    16,    46,   104,    28,    71,    -1,    16,    -1,
      21,    -1,   105,    -1,   118,    -1,    47,    37,   106,    38,
      -1,    83,    41,    83,    41,    83,    -1,    83,    41,    83,
      -1,    83,    -1,    35,    28,    20,    18,    72,    19,    -1,
      34,    28,    20,    18,    72,    19,    -1,    45,    28,    20,
      18,    72,    19,    -1,    29,    28,    20,    18,    72,    19,
      -1,    34,    16,    28,    20,    18,    72,    19,    -1,    34,
      16,    44,    16,    28,    20,    18,    72,    19,    -1,   107,
     108,    -1,   107,   108,   110,    -1,   107,   111,    -1,   107,
     111,   108,    -1,   107,   111,   110,    -1,   107,   108,   109,
      -1,   107,   108,   110,   109,    -1,   107,   111,   109,    -1,
     107,   111,   108,   109,    -1,   107,   111,   110,   109,    -1,
      14,    37,   115,    38,    -1,    33,    37,   115,    38,    -1,
     115,     8,   115,    -1,   116,    -1,    23,    -1,    16,    -1,
     117,    -1,   117,    21,    -1,    21,    -1,    50,   119,    51,
      -1,   119,    41,    87,    -1,   119,    41,    87,    20,    -1,
     119,    41,    20,    87,    -1,    87,    -1,    20,    -1,    55,
      16,    28,   122,    -1,    55,    16,    37,   121,    38,    28,
     122,    -1,   121,    41,    16,    -1,    16,    -1,    20,    18,
      63,    19,    -1,    53,    16,    -1,    53,    16,   125,    -1,
      53,   125,    44,    16,    -1,    56,    16,   125,    53,    16,
      -1,    54,    16,    -1,   125,    54,    16,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,    34,    34,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    57,
      58,    59,    60,    61,    62,    63,    67,    69,    71,    73,
      76,    78,    80,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   125,   126,   127,   128,   129,
     130,   131,   132,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   173,   174,   177,   180,   181,
     184,   185,   186,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   206,   209,
     210,   213,   214,   217,   218,   219,   220,   221,   225,   226,
     227,   231,   232,   233,   236,   239,   240,   241,   245,   246,
     247,   250,   255,   256,   257,   261,   262,   263,   266,   268,
     269,   270,   273,   274,   275,   278,   281,   283,   287,   289,
     293,   294,   295,   296,   299,   302,   303,   304,   307,   310,
     313,   315,   317,   318,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   332,   335,   338,   339,   342,   343,
     344,   347,   348,   351,   353,   354,   355,   356,   357,   360,
     361,   363,   364,   367,   369,   370,   371,   374,   376,   377
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "STRING", "ASSIGN", "RETURN", "EQ",
  "PLUS", "MINUS", "MUL", "DIVIDE", "SEMICOLON", "EQUAL", "PRINT",
  "KEYWORD", "IDENTIFIER", "DEF", "INDENTAITON", "DENTAITON", "NEWLINE",
  "STRING_LITERAL", "DIGIT", "NUMBER", "DECIMAL", "LETTER", "ALPHANUM",
  "OPERATORS", "COLON", "ELSE", "IF", "FOR", "WHILE", "INPUT", "EXCEPT",
  "TRY", "ELIF", "LBRACKET", "RBRACKET", "TRUE", "FALSE", "COMMA",
  "GREATERTHAN", "LESSTHAN", "AS", "FINALLY", "IN", "RANGE", "BREAK",
  "CONTINUE", "SQUAREBL", "SQUAREBR", "PASS", "IMPORT", "DOT", "CLASS",
  "FROM", "OR", "AND", "'|'", "UMINUS", "$accept", "code", "mycode", "stm",
  "block", "ifblockforloops", "ifblock", "loopblock",
  "ifblockforloops_def", "ifblock_def", "loopblock_def", "statements",
  "ifstatementsforloops", "ifstatementsforloops_def", "ifstatements",
  "ifstatements_def", "loopstatements", "loopstatements_def",
  "simple_stmt_break", "return_stmt", "inreturn", "assignment",
  "expression", "function", "args", "args_", "arg", "ifforloops",
  "elifstatementforloops", "elsestatementforloops", "ifforloops_def",
  "elifstatementforloops_def", "elsestatementforloops_def", "if",
  "elifstatement", "elsestatement", "if_def", "elifstatement_def",
  "elsestatement_def", "whileloop", "whileloop_def", "for", "for_def",
  "list", "range", "forparams", "try", "except", "finally", "tryelse",
  "except_name", "tryrule", "output", "in", "txtn", "txtnt", "txtw",
  "listrule", "inlist", "class", "classargs", "classblock", "import",
  "from", "path", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short int yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   124,
     314
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    61,    62,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    64,
      64,    64,    64,    64,    64,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    75,    75,    75,    75,    75,
      75,    75,    75,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    79,    79,    80,    81,    81,
      82,    82,    82,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    84,    85,
      85,    86,    86,    87,    87,    87,    87,    87,    88,    88,
      88,    89,    89,    89,    90,    91,    91,    91,    92,    92,
      92,    93,    94,    94,    94,    95,    95,    95,    96,    97,
      97,    97,    98,    98,    98,    99,   100,   101,   102,   103,
     104,   104,   104,   104,   105,   106,   106,   106,   107,   108,
     109,   110,   111,   111,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   113,   114,   115,   115,   116,   116,
     116,   117,   117,   118,   119,   119,   119,   119,   119,   120,
     120,   121,   121,   122,   123,   123,   123,   124,   125,   125
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     1,     1,     1,     1,     1,     4,     4,     4,     4,
       4,     4,     4,     2,     3,     1,     2,     1,     2,     1,
       2,     1,     2,     3,     1,     2,     2,     1,     2,     1,
       2,     2,     1,     3,     2,     3,     1,     2,     2,     1,
       2,     1,     2,     2,     1,     1,     2,     1,     2,     1,
       2,     2,     1,     1,     2,     2,     3,     1,     2,     1,
       2,     2,     1,     3,     2,     1,     2,     1,     2,     1,
       2,     2,     1,     3,     2,     2,     3,     1,     2,     1,
       2,     1,     2,     2,     1,     1,     1,     2,     3,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     4,     4,
       3,     3,     3,     3,     2,     3,     2,     1,     7,     0,
       1,     1,     3,     1,     1,     1,     1,     1,     5,     5,
       4,     4,     5,     5,     3,     5,     5,     4,     4,     5,
       5,     3,     5,     5,     4,     4,     5,     5,     3,     5,
       5,     4,     4,     5,     5,     3,     4,     4,     6,     6,
       1,     1,     1,     1,     4,     5,     3,     1,     6,     6,
       6,     6,     7,     9,     2,     3,     2,     3,     3,     3,
       4,     3,     4,     4,     4,     4,     3,     1,     1,     1,
       1,     2,     1,     3,     3,     4,     4,     1,     1,     4,
       7,     3,     1,     4,     2,     3,     4,     5,     2,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       0,     0,     0,     0,    24,     0,     0,     0,     0,     0,
       0,    22,     0,     0,     0,     0,     2,    18,    25,    14,
      15,    12,    11,     0,    21,     0,     0,    23,    13,    16,
      17,     0,     0,     0,     0,   133,   135,   134,     0,   136,
     137,     0,     0,   127,     0,     0,     0,     0,   208,   207,
       0,   214,     0,     0,     0,     0,     1,     8,     3,     4,
       9,    10,     7,     5,     6,     0,   184,   186,    19,    20,
     199,   202,   198,     0,   197,   200,   110,   111,   112,   129,
     126,     0,   124,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   203,   215,
     218,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     189,   185,     0,   187,   191,   188,     0,   194,   201,     0,
     130,   131,   125,   113,   114,   116,   117,   115,     0,   154,
       0,   121,     0,   120,   123,   122,   170,   171,     0,     0,
     172,   173,     0,   166,   195,     0,     0,   204,   216,   219,
       0,   209,   212,     0,     0,     0,     0,     0,     0,     0,
     190,   192,   193,   196,     0,     0,     0,     0,     0,   152,
     153,   119,   118,     0,     0,     0,     0,     0,     0,     0,
      35,     0,     0,    41,    37,    39,   206,   205,     0,     0,
       0,   217,     0,     0,     0,     0,     0,     0,   132,    72,
       0,    65,    67,    69,     0,     0,   177,     0,   168,     0,
     105,   106,    89,     0,     0,    92,    85,    87,   107,   109,
       0,     0,     0,   178,    36,     0,    42,    38,    40,    33,
       0,     0,   211,     0,     0,     0,     0,     0,     0,   128,
      28,    71,    66,    68,    70,   158,     0,     0,   174,     0,
      29,    90,     0,    91,    86,    88,    84,     0,     0,     0,
       0,    34,   213,   210,     0,     0,   179,     0,     0,     0,
     155,   176,     0,    83,   108,     0,   161,     0,     0,   167,
     182,     0,   181,   180,     0,   157,   156,     0,     0,   140,
       0,     0,     0,   159,   160,     0,     0,     0,    26,   175,
       0,     0,     0,   138,   139,    82,     0,     0,    73,    77,
      79,     0,     0,   169,     0,   101,     0,     0,     0,   104,
      97,    99,   183,    52,     0,     0,    44,    47,    49,     0,
       0,    31,    81,     0,    74,    78,    80,    75,   165,     0,
       0,    32,   102,     0,     0,   103,    98,   100,    94,    95,
      27,    51,     0,    45,    48,    50,    46,   144,     0,    76,
     162,     0,    93,    96,    43,   141,   164,   163,     0,   147,
     143,   142,     0,     0,     0,   145,   146,    64,     0,     0,
       0,    56,    59,    61,     0,     0,    30,    63,     0,     0,
      57,    60,    62,    58,    54,   151,     0,    53,    55,   148,
     150,   149
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,    15,    16,   180,   239,   289,   129,   143,   369,   276,
     279,   181,   324,   378,   200,   306,   213,   316,   214,   182,
     218,    18,    42,    19,   119,   120,    43,   215,   303,   304,
     319,   375,   376,    20,   169,   170,   183,   293,   294,    21,
     184,    22,   185,   139,   140,   207,    23,    66,   110,   111,
      67,    24,    25,    26,    73,    74,    75,    27,    50,    28,
     153,   151,    29,    30,    53
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -318
static const short int yypact[] =
{
     878,    17,    82,   104,  -318,    11,   106,    11,    88,   108,
     211,  -318,     8,   124,   126,   144,   878,  -318,  -318,  -318,
    -318,  -318,  -318,   112,  -318,   141,   145,  -318,  -318,  -318,
    -318,   133,     5,   118,    11,  -318,  -318,  -318,    11,  -318,
    -318,    11,   317,  -318,   123,   323,   133,   154,  -318,  -318,
       2,   130,   161,    24,    65,   130,  -318,  -318,  -318,  -318,
    -318,  -318,  -318,  -318,  -318,    33,    78,    74,  -318,  -318,
    -318,  -318,  -318,    14,  -318,   159,   575,  -318,  -318,    95,
    -318,   374,  -318,    11,    11,    11,    11,    11,   166,   240,
     298,    11,    11,    25,   172,    27,   176,   255,  -318,   147,
    -318,   188,   191,   182,   194,   137,    86,   196,   197,   198,
    -318,   183,   205,   183,  -318,   183,   133,  -318,  -318,   203,
     201,  -318,  -318,   186,   186,  -318,  -318,   581,   229,    76,
      11,   228,    11,   228,   228,   228,  -318,  -318,   215,   220,
    -318,  -318,   235,  -318,  -318,   834,    95,   237,  -318,  -318,
     241,  -318,  -318,    -2,   239,   238,   246,   247,   249,   250,
    -318,  -318,  -318,  -318,   253,    95,   983,   259,    11,  -318,
    -318,   228,   228,    11,   172,   952,    95,    11,   258,    11,
    -318,   678,   263,  -318,  -318,  -318,  -318,  -318,   878,   260,
     273,  -318,   280,   274,   834,   286,   287,   288,  -318,  -318,
     975,  -318,  -318,  -318,   166,   380,   386,   272,  -318,    11,
    -318,  -318,  -318,   921,   291,  -318,  -318,  -318,   271,  -318,
     392,   269,   443,  -318,  -318,   300,  -318,  -318,  -318,  -318,
     871,   182,  -318,   834,   302,   706,   834,   834,   305,  -318,
    -318,  -318,  -318,  -318,  -318,  -318,   166,    11,  -318,   449,
    -318,  -318,   309,  -318,  -318,  -318,  -318,    95,   319,    25,
     320,  -318,  -318,  -318,   729,   324,  -318,   757,   764,   834,
      76,   455,   321,  -318,  -318,   325,   116,   290,   326,  -318,
    -318,   834,  -318,  -318,   792,  -318,  -318,    11,   328,   134,
     834,   322,    11,  -318,  -318,   320,   669,   799,  -318,   575,
     952,   327,    11,  -318,  -318,  -318,   827,   329,  -318,  -318,
    -318,   319,   506,  -318,    11,  -318,   615,   332,   333,  -318,
    -318,  -318,  -318,  -318,   928,   336,  -318,  -318,  -318,   321,
     512,  -318,  -318,   338,  -318,  -318,  -318,  -318,  -318,   319,
     518,  -318,  -318,   341,   342,  -318,  -318,  -318,  -318,  -318,
    -318,  -318,   343,  -318,  -318,  -318,  -318,  -318,   321,  -318,
     116,   344,  -318,  -318,  -318,   134,  -318,  -318,   349,   135,
    -318,  -318,   669,   340,    11,  -318,  -318,  -318,   638,   350,
     351,  -318,  -318,  -318,   344,   569,  -318,  -318,   356,   357,
    -318,  -318,  -318,  -318,  -318,  -318,   344,  -318,  -318,   135,
    -318,  -318
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -318,  -318,   181,     0,  -318,  -300,  -189,   173,  -317,  -292,
      84,  -177,  -318,  -318,  -318,  -318,  -318,  -318,  -183,  -169,
    -318,  -318,    -1,   -12,  -318,  -318,    -3,  -200,    21,    39,
    -298,     7,    10,   -13,   122,   128,   -85,    47,    50,   -15,
    -158,    -7,   -24,   152,  -318,  -318,  -318,   346,   -42,   347,
    -318,  -318,  -318,   383,   -35,  -318,  -318,   -30,  -318,   -11,
    -318,   187,    -8,    -6,    46
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const short int yytable[] =
{
      17,    60,    78,    59,    58,    62,    45,    49,    63,    61,
      64,    95,   225,   253,    34,   245,    57,   235,   345,   338,
      34,    35,   116,   227,    51,   114,    36,    35,    37,   357,
     252,    76,    36,    80,    37,   116,   189,    81,     8,   190,
      82,   136,    38,    97,    39,    40,   137,   360,    38,   106,
      39,    40,   117,    98,    31,    10,   264,   270,   365,   267,
     268,   107,    52,   141,    41,   144,   225,   395,   101,   160,
      41,   161,   138,   162,   381,    10,   121,   227,   102,   399,
     390,   163,   123,   124,   125,   126,   127,    32,   131,   133,
     134,   135,   284,   103,   147,   225,   226,    99,   225,   225,
     326,   105,   104,   108,   297,   167,   227,   108,   112,   227,
     227,    35,   168,   317,   155,   225,    36,   325,    37,   109,
      33,   307,    44,   109,   353,    46,   227,   318,   225,   171,
     156,   172,   309,   343,    39,    40,    47,   333,   320,   227,
      54,   352,    55,   186,    56,   291,    65,   344,   335,    70,
     226,   202,   292,   201,    71,    79,    72,   228,   346,   203,
     216,    68,   198,   301,   373,    69,   199,   205,   217,    93,
     302,   374,   206,   219,    96,   212,   220,   100,   222,   226,
     118,   224,   226,   226,    52,   243,   128,   242,    17,   379,
     154,   102,   142,   244,   145,   388,    85,    86,   254,   226,
     241,   102,   150,   380,   148,   308,   255,   149,   249,   389,
     152,   228,   226,   251,   382,    60,   157,    59,    58,    62,
     391,   334,    63,    61,    64,   158,   159,    35,   109,   141,
      57,    48,    36,   107,    37,   224,    83,    84,    85,    86,
     228,   164,   165,   228,   228,   130,   271,   166,   174,    34,
      39,    40,   173,   175,   274,   191,    35,   187,   192,   188,
     228,    36,   193,    37,   224,   194,   310,   224,   224,   195,
     196,    35,   321,   228,   221,   146,    36,    38,    37,    39,
      40,   197,   336,   229,   224,   327,   299,   204,   231,   232,
     305,   312,   347,   328,    39,    40,   315,   224,   233,    41,
     323,   330,   234,   132,   236,   237,   332,    34,   238,   354,
     248,   256,   257,   340,    35,   259,   342,   355,   295,    36,
     261,    37,   265,   269,   351,    83,    84,    85,    86,   273,
      87,    83,    84,    85,    86,    38,    87,    39,    40,   275,
     278,   288,   281,   290,   296,    88,   300,   208,   383,   337,
     311,    94,   348,   349,   392,   329,   356,    41,   359,    89,
      90,   362,   363,   364,   368,    89,    90,   372,   384,   230,
     393,   394,   377,   385,    91,    92,   397,   398,   387,   313,
      91,    92,    83,    84,    85,    86,   370,    87,    83,    84,
      85,    86,   285,    87,    83,    84,    85,    86,   286,    87,
      83,    84,    85,    86,   371,    87,   400,   366,   246,   401,
     367,   277,   122,   113,   115,    77,    89,    90,   263,     0,
     258,     0,    89,    90,     0,     0,     0,   247,    89,    90,
       0,    91,    92,     0,    89,    90,     0,    91,    92,     0,
       0,     0,     0,    91,    92,     0,     0,     0,     0,    91,
      92,    83,    84,    85,    86,     0,    87,    83,    84,    85,
      86,     0,    87,    83,    84,    85,    86,     0,    87,     0,
       0,   260,     0,     0,     0,     0,     0,   272,     0,     0,
       0,     0,     0,     0,     0,    89,    90,     0,     0,     0,
       0,    89,    90,     0,     0,     0,   287,    89,    90,     0,
      91,    92,     0,     0,     0,     0,    91,    92,     0,     0,
       0,     0,    91,    92,    83,    84,    85,    86,     0,    87,
      83,    84,    85,    86,     0,    87,    83,    84,    85,    86,
       0,    87,     0,     0,   339,     0,     0,     0,     0,     0,
     358,     0,     0,     0,     0,     0,   361,     0,    89,    90,
       0,     0,     0,     0,    89,    90,     0,     0,     0,     0,
      89,    90,     0,    91,    92,     0,     0,     0,     0,    91,
      92,     0,     0,     0,     0,    91,    92,    83,    84,    85,
      86,     0,    87,    83,    84,    85,    86,     0,    87,    83,
      84,    85,    86,     0,    -1,     0,     0,   396,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    89,    90,     0,     0,     0,     0,    89,    90,     0,
       0,   176,     0,    89,    90,     0,    91,    92,     0,     1,
       0,     2,    91,    92,   341,     4,     0,     0,    91,    92,
       0,     0,     0,     0,   176,   314,   178,   179,     8,     0,
       9,     0,     1,     0,     2,     0,     0,   386,     4,     0,
       0,     0,     0,   210,   211,    10,     0,    11,   314,   178,
     179,     8,     0,     9,     0,   176,     0,     0,     0,     0,
       0,     0,     0,     1,   176,     2,   210,   211,    10,     4,
      11,     0,     1,     0,     2,     0,     0,   223,     4,   314,
     178,   179,     8,     0,     9,     0,     0,     0,   177,   178,
     179,     8,   176,     9,     0,     0,     0,   210,   211,    10,
       1,    11,     2,     0,     0,   266,     4,     0,    10,     0,
      11,     0,     0,     0,     0,   176,   177,   178,   179,     8,
       0,     9,     0,     1,     0,     2,     0,     0,   280,     4,
       0,     0,     0,     0,     0,     0,    10,     0,    11,   177,
     178,   179,     8,   176,     9,     0,     0,     0,     0,     0,
     176,     1,     0,     2,     0,     0,   282,     4,     1,    10,
       2,    11,     0,   283,     4,     0,     0,   177,   178,   179,
       8,     0,     9,     0,   177,   178,   179,     8,   176,     9,
       0,     0,     0,     0,     0,   176,     1,    10,     2,    11,
       0,   298,     4,     1,    10,     2,    11,     0,   322,     4,
       0,     0,   177,   178,   179,     8,     0,     9,     0,   177,
     178,   179,     8,   176,     9,     0,     0,     0,     0,     0,
     176,     1,    10,     2,    11,     0,   331,     4,     1,    10,
       2,    11,     0,     0,     4,     0,     0,   177,   178,   179,
       8,     0,     9,     0,   177,   178,   179,     8,     0,     9,
       0,     0,     0,     0,     0,     0,     0,    10,     0,    11,
       0,     0,     0,     0,    10,     1,    11,     2,     3,     0,
     262,     4,     1,     0,     2,     3,     0,     0,     4,     0,
       0,     5,     6,     7,     8,     0,     9,     0,     5,     6,
       7,     8,     0,     9,     0,     0,     0,     0,     0,     0,
       0,    10,     0,    11,    12,     0,    13,    14,    10,     0,
      11,    12,     0,    13,    14,     1,     0,     2,     0,     0,
     250,     4,     1,     0,     2,     0,     0,   350,     4,     0,
       0,   209,     6,     7,     8,     0,     9,     0,   209,     6,
       7,     8,     0,     9,     0,     0,     1,     0,     2,   210,
     211,    10,     4,    11,     0,     0,   210,   211,    10,     0,
      11,     0,   209,     6,     7,     8,     0,     9,     0,     1,
       0,     2,     0,     0,   240,     4,     0,     1,     0,     2,
     210,   211,    10,     4,    11,     5,     6,     7,     8,     0,
       9,     0,     0,     5,     6,     7,     8,     0,     9,     0,
       0,     0,     0,     0,     0,    10,     0,    11,     0,     0,
       0,     0,     0,    10,     0,    11
};

static const short int yycheck[] =
{
       0,    16,    32,    16,    16,    16,     7,    10,    16,    16,
      16,    46,   181,   213,     9,   204,    16,   194,   316,   311,
       9,    16,     8,   181,    16,    67,    21,    16,    23,   329,
     213,    32,    21,    34,    23,     8,    38,    38,    33,    41,
      41,    16,    37,    41,    39,    40,    21,   339,    37,    16,
      39,    40,    38,    51,    37,    50,   233,   246,   358,   236,
     237,    28,    54,    93,    59,    38,   235,   384,    44,   111,
      59,   113,    47,   115,   372,    50,    79,   235,    54,   396,
     378,   116,    83,    84,    85,    86,    87,     5,    89,    90,
      91,    92,   269,    28,    97,   264,   181,    51,   267,   268,
     300,    55,    37,    29,   281,    29,   264,    29,    34,   267,
     268,    16,    36,   296,    28,   284,    21,   300,    23,    45,
      16,   290,    16,    45,   324,    37,   284,   296,   297,   130,
      44,   132,   290,   316,    39,    40,    28,   306,   296,   297,
      16,   324,    16,   146,     0,    29,    34,   316,   306,    16,
     235,   166,    36,   166,    21,    37,    23,   181,   316,   166,
     175,    20,   165,    29,    29,    20,   166,   168,   175,    46,
      36,    36,   173,   176,    20,   175,   177,    16,   179,   264,
      21,   181,   267,   268,    54,   200,    20,   200,   188,   372,
      53,    54,    20,   200,    18,   378,    10,    11,   213,   284,
     200,    54,    20,   372,    16,   290,   213,    16,   209,   378,
      16,   235,   297,   213,   372,   230,    20,   230,   230,   230,
     378,   306,   230,   230,   230,    28,    28,    16,    45,   259,
     230,    20,    21,    28,    23,   235,     8,     9,    10,    11,
     264,    38,    41,   267,   268,     5,   247,    18,    28,     9,
      39,    40,    37,    18,   257,    16,    16,    20,    20,    18,
     284,    21,    16,    23,   264,    18,   290,   267,   268,    20,
      20,    16,   296,   297,    16,    20,    21,    37,    23,    39,
      40,    28,   306,    20,   284,   300,   287,    28,    28,    16,
     290,   292,   316,   300,    39,    40,   296,   297,    18,    59,
     300,   302,    28,     5,    18,    18,   306,     9,    20,   324,
      38,    20,    41,   314,    16,    46,   316,   324,    28,    21,
      20,    23,    20,    18,   324,     8,     9,    10,    11,    20,
      13,     8,     9,    10,    11,    37,    13,    39,    40,    20,
      20,    20,    18,    18,    18,    28,    18,   174,   372,    20,
      28,    28,    20,    20,   378,    28,    20,    59,    20,    42,
      43,    20,    20,    20,    20,    42,    43,    18,    28,   188,
      20,    20,   372,   374,    57,    58,    20,    20,   378,   295,
      57,    58,     8,     9,    10,    11,   365,    13,     8,     9,
      10,    11,   270,    13,     8,     9,    10,    11,   270,    13,
       8,     9,    10,    11,   365,    13,   399,   360,    28,   399,
     360,   259,    38,    67,    67,    32,    42,    43,   231,    -1,
      28,    -1,    42,    43,    -1,    -1,    -1,    41,    42,    43,
      -1,    57,    58,    -1,    42,    43,    -1,    57,    58,    -1,
      -1,    -1,    -1,    57,    58,    -1,    -1,    -1,    -1,    57,
      58,     8,     9,    10,    11,    -1,    13,     8,     9,    10,
      11,    -1,    13,     8,     9,    10,    11,    -1,    13,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    41,    42,    43,    -1,
      57,    58,    -1,    -1,    -1,    -1,    57,    58,    -1,    -1,
      -1,    -1,    57,    58,     8,     9,    10,    11,    -1,    13,
       8,     9,    10,    11,    -1,    13,     8,     9,    10,    11,
      -1,    13,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    28,    -1,    42,    43,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      42,    43,    -1,    57,    58,    -1,    -1,    -1,    -1,    57,
      58,    -1,    -1,    -1,    -1,    57,    58,     8,     9,    10,
      11,    -1,    13,     8,     9,    10,    11,    -1,    13,     8,
       9,    10,    11,    -1,    13,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,     6,    -1,    42,    43,    -1,    57,    58,    -1,    14,
      -1,    16,    57,    58,    19,    20,    -1,    -1,    57,    58,
      -1,    -1,    -1,    -1,     6,    30,    31,    32,    33,    -1,
      35,    -1,    14,    -1,    16,    -1,    -1,    19,    20,    -1,
      -1,    -1,    -1,    48,    49,    50,    -1,    52,    30,    31,
      32,    33,    -1,    35,    -1,     6,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    14,     6,    16,    48,    49,    50,    20,
      52,    -1,    14,    -1,    16,    -1,    -1,    19,    20,    30,
      31,    32,    33,    -1,    35,    -1,    -1,    -1,    30,    31,
      32,    33,     6,    35,    -1,    -1,    -1,    48,    49,    50,
      14,    52,    16,    -1,    -1,    19,    20,    -1,    50,    -1,
      52,    -1,    -1,    -1,    -1,     6,    30,    31,    32,    33,
      -1,    35,    -1,    14,    -1,    16,    -1,    -1,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    52,    30,
      31,    32,    33,     6,    35,    -1,    -1,    -1,    -1,    -1,
       6,    14,    -1,    16,    -1,    -1,    19,    20,    14,    50,
      16,    52,    -1,    19,    20,    -1,    -1,    30,    31,    32,
      33,    -1,    35,    -1,    30,    31,    32,    33,     6,    35,
      -1,    -1,    -1,    -1,    -1,     6,    14,    50,    16,    52,
      -1,    19,    20,    14,    50,    16,    52,    -1,    19,    20,
      -1,    -1,    30,    31,    32,    33,    -1,    35,    -1,    30,
      31,    32,    33,     6,    35,    -1,    -1,    -1,    -1,    -1,
       6,    14,    50,    16,    52,    -1,    19,    20,    14,    50,
      16,    52,    -1,    -1,    20,    -1,    -1,    30,    31,    32,
      33,    -1,    35,    -1,    30,    31,    32,    33,    -1,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    52,
      -1,    -1,    -1,    -1,    50,    14,    52,    16,    17,    -1,
      19,    20,    14,    -1,    16,    17,    -1,    -1,    20,    -1,
      -1,    30,    31,    32,    33,    -1,    35,    -1,    30,    31,
      32,    33,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    52,    53,    -1,    55,    56,    50,    -1,
      52,    53,    -1,    55,    56,    14,    -1,    16,    -1,    -1,
      19,    20,    14,    -1,    16,    -1,    -1,    19,    20,    -1,
      -1,    30,    31,    32,    33,    -1,    35,    -1,    30,    31,
      32,    33,    -1,    35,    -1,    -1,    14,    -1,    16,    48,
      49,    50,    20,    52,    -1,    -1,    48,    49,    50,    -1,
      52,    -1,    30,    31,    32,    33,    -1,    35,    -1,    14,
      -1,    16,    -1,    -1,    19,    20,    -1,    14,    -1,    16,
      48,    49,    50,    20,    52,    30,    31,    32,    33,    -1,
      35,    -1,    -1,    30,    31,    32,    33,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    52
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,    14,    16,    17,    20,    30,    31,    32,    33,    35,
      50,    52,    53,    55,    56,    62,    63,    64,    82,    84,
      94,   100,   102,   107,   112,   113,   114,   118,   120,   123,
     124,    37,     5,    16,     9,    16,    21,    23,    37,    39,
      40,    59,    83,    87,    16,    83,    37,    28,    20,    87,
     119,    16,    54,   125,    16,    16,     0,    64,    84,    94,
     100,   102,   120,   123,   124,    34,   108,   111,    20,    20,
      16,    21,    23,   115,   116,   117,    83,   114,   118,    37,
      83,    83,    83,     8,     9,    10,    11,    13,    28,    42,
      43,    57,    58,    46,    28,   115,    20,    41,    51,   125,
      16,    44,    54,    28,    37,   125,    16,    28,    29,    45,
     109,   110,    34,   108,   109,   110,     8,    38,    21,    85,
      86,    87,    38,    83,    83,    83,    83,    83,    20,    67,
       5,    83,     5,    83,    83,    83,    16,    21,    47,   104,
     105,   118,    20,    68,    38,    18,    20,    87,    16,    16,
      20,   122,    16,   121,    53,    28,    44,    20,    28,    28,
     109,   109,   109,   115,    38,    41,    18,    29,    36,    95,
      96,    83,    83,    37,    28,    18,     6,    30,    31,    32,
      64,    72,    80,    97,   101,   103,    87,    20,    18,    38,
      41,    16,    20,    16,    18,    20,    20,    28,    87,    64,
      75,    94,   100,   102,    28,    83,    83,   106,    68,    30,
      48,    49,    64,    77,    79,    88,   100,   102,    81,    87,
      83,    16,    83,    19,    64,    80,    97,   101,   103,    20,
      63,    28,    16,    18,    28,    72,    18,    18,    20,    65,
      19,    64,    94,   100,   102,    67,    28,    41,    38,    83,
      19,    64,    79,    88,   100,   102,    20,    41,    28,    46,
      28,    20,    19,   122,    72,    20,    19,    72,    72,    18,
      67,    83,    28,    20,    87,    20,    70,   104,    20,    71,
      19,    18,    19,    19,    72,    95,    96,    41,    20,    66,
      18,    29,    36,    98,    99,    28,    18,    72,    19,    83,
      18,    29,    36,    89,    90,    64,    76,    80,    97,   101,
     103,    28,    83,    71,    30,    64,    78,    79,    80,    91,
     101,   103,    19,    64,    73,    79,    88,   100,   102,    28,
      83,    19,    64,    80,    97,   101,   103,    20,    70,    28,
      83,    19,    64,    79,    80,    91,   101,   103,    20,    20,
      19,    64,    79,    88,   100,   102,    20,    66,    28,    20,
      70,    28,    20,    20,    20,    66,    98,    99,    20,    69,
      89,    90,    18,    29,    36,    92,    93,    64,    74,    79,
      80,    91,   101,   103,    28,    83,    19,    64,    79,    80,
      91,   101,   103,    20,    20,    69,    28,    20,    20,    69,
      92,    93
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
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (0)


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (N)								\
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
    while (0)
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
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
} while (0)

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr,					\
                  Type, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short int *bottom, short int *top)
#else
static void
yy_stack_print (bottom, top)
    short int *bottom;
    short int *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu), ",
             yyrule - 1, yylno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname[yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname[yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
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
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
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
      size_t yyn = 0;
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

#endif /* YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);


# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
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
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

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
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
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
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()
    ;
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

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short int yyssa[YYINITDEPTH];
  short int *yyss = yyssa;
  short int *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

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
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short int *yyss1 = yyss;


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
	short int *yyss1 = yyss;
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

/* Do appropriate processing given the current state.  */
/* Read a look-ahead token if we need one and don't already have one.  */
/* yyresume: */

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

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
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
#line 34 "grammar.y"
    {
            printf("-- code successfully parsed --\n"); 
            YYACCEPT;
            ;}
    break;

  case 3:
#line 39 "grammar.y"
    { ;}
    break;

  case 4:
#line 40 "grammar.y"
    { ;}
    break;

  case 5:
#line 41 "grammar.y"
    { ;}
    break;

  case 6:
#line 42 "grammar.y"
    { ;}
    break;

  case 7:
#line 43 "grammar.y"
    {;}
    break;

  case 8:
#line 44 "grammar.y"
    {;}
    break;

  case 9:
#line 45 "grammar.y"
    { ;}
    break;

  case 10:
#line 46 "grammar.y"
    {;}
    break;

  case 11:
#line 47 "grammar.y"
    { ;}
    break;

  case 12:
#line 48 "grammar.y"
    {;}
    break;

  case 13:
#line 49 "grammar.y"
    {;}
    break;

  case 14:
#line 50 "grammar.y"
    { ;}
    break;

  case 15:
#line 51 "grammar.y"
    { ;}
    break;

  case 16:
#line 52 "grammar.y"
    { ;}
    break;

  case 17:
#line 53 "grammar.y"
    { ;}
    break;

  case 18:
#line 54 "grammar.y"
    { ;}
    break;

  case 19:
#line 57 "grammar.y"
    { ;}
    break;

  case 20:
#line 58 "grammar.y"
    { ;}
    break;

  case 21:
#line 59 "grammar.y"
    { ;}
    break;

  case 22:
#line 60 "grammar.y"
    { ;}
    break;

  case 23:
#line 61 "grammar.y"
    { ;}
    break;

  case 24:
#line 62 "grammar.y"
    { ;}
    break;

  case 25:
#line 63 "grammar.y"
    { ;}
    break;

  case 26:
#line 67 "grammar.y"
    {;}
    break;

  case 27:
#line 69 "grammar.y"
    {;}
    break;

  case 28:
#line 71 "grammar.y"
    {;}
    break;

  case 29:
#line 73 "grammar.y"
    {;}
    break;

  case 30:
#line 76 "grammar.y"
    {;}
    break;

  case 31:
#line 78 "grammar.y"
    {;}
    break;

  case 32:
#line 80 "grammar.y"
    {;}
    break;

  case 33:
#line 85 "grammar.y"
    {;}
    break;

  case 34:
#line 86 "grammar.y"
    {;}
    break;

  case 35:
#line 87 "grammar.y"
    { ;}
    break;

  case 36:
#line 88 "grammar.y"
    { ;}
    break;

  case 37:
#line 89 "grammar.y"
    { ;}
    break;

  case 38:
#line 90 "grammar.y"
    {;}
    break;

  case 39:
#line 91 "grammar.y"
    { ;}
    break;

  case 40:
#line 92 "grammar.y"
    {;}
    break;

  case 41:
#line 93 "grammar.y"
    { ;}
    break;

  case 42:
#line 94 "grammar.y"
    { ;}
    break;

  case 43:
#line 97 "grammar.y"
    {;}
    break;

  case 44:
#line 98 "grammar.y"
    {;}
    break;

  case 45:
#line 99 "grammar.y"
    {;}
    break;

  case 46:
#line 100 "grammar.y"
    {;}
    break;

  case 47:
#line 101 "grammar.y"
    { ;}
    break;

  case 48:
#line 102 "grammar.y"
    {;}
    break;

  case 49:
#line 103 "grammar.y"
    { ;}
    break;

  case 50:
#line 104 "grammar.y"
    {;}
    break;

  case 51:
#line 105 "grammar.y"
    { ;}
    break;

  case 52:
#line 106 "grammar.y"
    { ;}
    break;

  case 53:
#line 110 "grammar.y"
    {;}
    break;

  case 54:
#line 111 "grammar.y"
    {;}
    break;

  case 55:
#line 112 "grammar.y"
    {;}
    break;

  case 56:
#line 113 "grammar.y"
    {;}
    break;

  case 57:
#line 114 "grammar.y"
    {;}
    break;

  case 58:
#line 115 "grammar.y"
    {;}
    break;

  case 59:
#line 116 "grammar.y"
    { ;}
    break;

  case 60:
#line 117 "grammar.y"
    {;}
    break;

  case 61:
#line 118 "grammar.y"
    { ;}
    break;

  case 62:
#line 119 "grammar.y"
    {;}
    break;

  case 63:
#line 120 "grammar.y"
    { ;}
    break;

  case 64:
#line 121 "grammar.y"
    { ;}
    break;

  case 65:
#line 125 "grammar.y"
    {;}
    break;

  case 66:
#line 126 "grammar.y"
    {;}
    break;

  case 67:
#line 127 "grammar.y"
    { ;}
    break;

  case 68:
#line 128 "grammar.y"
    {;}
    break;

  case 69:
#line 129 "grammar.y"
    { ;}
    break;

  case 70:
#line 130 "grammar.y"
    {;}
    break;

  case 71:
#line 131 "grammar.y"
    { ;}
    break;

  case 72:
#line 132 "grammar.y"
    { ;}
    break;

  case 73:
#line 135 "grammar.y"
    {;}
    break;

  case 74:
#line 136 "grammar.y"
    {;}
    break;

  case 75:
#line 137 "grammar.y"
    {;}
    break;

  case 76:
#line 138 "grammar.y"
    {;}
    break;

  case 77:
#line 139 "grammar.y"
    { ;}
    break;

  case 78:
#line 140 "grammar.y"
    {;}
    break;

  case 79:
#line 141 "grammar.y"
    { ;}
    break;

  case 80:
#line 142 "grammar.y"
    {;}
    break;

  case 81:
#line 143 "grammar.y"
    { ;}
    break;

  case 82:
#line 144 "grammar.y"
    { ;}
    break;

  case 83:
#line 147 "grammar.y"
    {;}
    break;

  case 84:
#line 148 "grammar.y"
    {;}
    break;

  case 85:
#line 149 "grammar.y"
    { ;}
    break;

  case 86:
#line 150 "grammar.y"
    {;}
    break;

  case 87:
#line 151 "grammar.y"
    { ;}
    break;

  case 88:
#line 152 "grammar.y"
    {;}
    break;

  case 89:
#line 153 "grammar.y"
    { ;}
    break;

  case 90:
#line 154 "grammar.y"
    { ;}
    break;

  case 91:
#line 155 "grammar.y"
    { ;}
    break;

  case 92:
#line 156 "grammar.y"
    { ;}
    break;

  case 93:
#line 159 "grammar.y"
    {;}
    break;

  case 94:
#line 160 "grammar.y"
    {;}
    break;

  case 95:
#line 161 "grammar.y"
    {;}
    break;

  case 96:
#line 162 "grammar.y"
    {;}
    break;

  case 97:
#line 163 "grammar.y"
    { ;}
    break;

  case 98:
#line 164 "grammar.y"
    {;}
    break;

  case 99:
#line 165 "grammar.y"
    { ;}
    break;

  case 100:
#line 166 "grammar.y"
    {;}
    break;

  case 101:
#line 167 "grammar.y"
    { ;}
    break;

  case 102:
#line 168 "grammar.y"
    { ;}
    break;

  case 103:
#line 169 "grammar.y"
    { ;}
    break;

  case 104:
#line 170 "grammar.y"
    { ;}
    break;

  case 105:
#line 173 "grammar.y"
    {;}
    break;

  case 106:
#line 174 "grammar.y"
    {;}
    break;

  case 107:
#line 177 "grammar.y"
    { ;}
    break;

  case 110:
#line 184 "grammar.y"
    {;}
    break;

  case 111:
#line 185 "grammar.y"
    {;}
    break;

  case 112:
#line 186 "grammar.y"
    {;}
    break;

  case 113:
#line 189 "grammar.y"
    { ;}
    break;

  case 114:
#line 190 "grammar.y"
    { ;}
    break;

  case 115:
#line 191 "grammar.y"
    { ;}
    break;

  case 116:
#line 192 "grammar.y"
    { ;}
    break;

  case 117:
#line 193 "grammar.y"
    { ;}
    break;

  case 118:
#line 194 "grammar.y"
    { ;}
    break;

  case 119:
#line 195 "grammar.y"
    { ;}
    break;

  case 120:
#line 196 "grammar.y"
    { ;}
    break;

  case 121:
#line 197 "grammar.y"
    { ;}
    break;

  case 122:
#line 198 "grammar.y"
    { ;}
    break;

  case 123:
#line 199 "grammar.y"
    { ;}
    break;

  case 124:
#line 200 "grammar.y"
    {;}
    break;

  case 125:
#line 201 "grammar.y"
    { ;}
    break;

  case 126:
#line 202 "grammar.y"
    { ;}
    break;

  case 127:
#line 203 "grammar.y"
    { ;}
    break;

  case 128:
#line 206 "grammar.y"
    {
            ;}
    break;

  case 129:
#line 209 "grammar.y"
    { ;}
    break;

  case 130:
#line 210 "grammar.y"
    { ;}
    break;

  case 131:
#line 213 "grammar.y"
    { ;}
    break;

  case 132:
#line 214 "grammar.y"
    { ;}
    break;

  case 133:
#line 217 "grammar.y"
    { ;}
    break;

  case 134:
#line 218 "grammar.y"
    { ;}
    break;

  case 135:
#line 219 "grammar.y"
    { ;}
    break;

  case 136:
#line 220 "grammar.y"
    { ;}
    break;

  case 137:
#line 221 "grammar.y"
    { ;}
    break;

  case 138:
#line 225 "grammar.y"
    { ;}
    break;

  case 139:
#line 226 "grammar.y"
    { ;}
    break;

  case 140:
#line 227 "grammar.y"
    { ;}
    break;

  case 144:
#line 236 "grammar.y"
    {;}
    break;

  case 145:
#line 239 "grammar.y"
    { ;}
    break;

  case 146:
#line 240 "grammar.y"
    { ;}
    break;

  case 147:
#line 241 "grammar.y"
    { ;}
    break;

  case 151:
#line 250 "grammar.y"
    {;}
    break;

  case 152:
#line 255 "grammar.y"
    { ;}
    break;

  case 153:
#line 256 "grammar.y"
    { ;}
    break;

  case 154:
#line 257 "grammar.y"
    { ;}
    break;

  case 158:
#line 266 "grammar.y"
    {;}
    break;

  case 159:
#line 268 "grammar.y"
    { ;}
    break;

  case 160:
#line 269 "grammar.y"
    { ;}
    break;

  case 161:
#line 270 "grammar.y"
    { ;}
    break;

  case 165:
#line 278 "grammar.y"
    {;}
    break;

  case 166:
#line 281 "grammar.y"
    {;}
    break;

  case 167:
#line 283 "grammar.y"
    {;}
    break;

  case 168:
#line 287 "grammar.y"
    {;}
    break;

  case 169:
#line 289 "grammar.y"
    {;}
    break;

  case 170:
#line 293 "grammar.y"
    {;}
    break;

  case 171:
#line 294 "grammar.y"
    {;}
    break;

  case 172:
#line 295 "grammar.y"
    {;}
    break;

  case 173:
#line 296 "grammar.y"
    { ;}
    break;

  case 175:
#line 302 "grammar.y"
    {;}
    break;

  case 176:
#line 303 "grammar.y"
    {;}
    break;

  case 177:
#line 304 "grammar.y"
    {;}
    break;

  case 178:
#line 307 "grammar.y"
    {;}
    break;

  case 179:
#line 310 "grammar.y"
    {;}
    break;

  case 180:
#line 313 "grammar.y"
    {;}
    break;

  case 181:
#line 315 "grammar.y"
    {;}
    break;

  case 182:
#line 317 "grammar.y"
    {;}
    break;

  case 183:
#line 318 "grammar.y"
    {;}
    break;

  case 184:
#line 320 "grammar.y"
    {;}
    break;

  case 185:
#line 321 "grammar.y"
    {;}
    break;

  case 186:
#line 322 "grammar.y"
    {;}
    break;

  case 187:
#line 323 "grammar.y"
    {;}
    break;

  case 188:
#line 324 "grammar.y"
    {;}
    break;

  case 189:
#line 325 "grammar.y"
    {;}
    break;

  case 190:
#line 326 "grammar.y"
    {;}
    break;

  case 191:
#line 327 "grammar.y"
    {;}
    break;

  case 192:
#line 328 "grammar.y"
    {;}
    break;

  case 193:
#line 329 "grammar.y"
    {;}
    break;

  case 194:
#line 332 "grammar.y"
    {
            ;}
    break;

  case 195:
#line 335 "grammar.y"
    {
            ;}
    break;

  case 196:
#line 338 "grammar.y"
    { ;}
    break;

  case 197:
#line 339 "grammar.y"
    { ;}
    break;

  case 198:
#line 342 "grammar.y"
    { ;}
    break;

  case 199:
#line 343 "grammar.y"
    { ;}
    break;

  case 200:
#line 344 "grammar.y"
    { ;}
    break;

  case 201:
#line 347 "grammar.y"
    { ;}
    break;

  case 202:
#line 348 "grammar.y"
    { ;}
    break;

  case 203:
#line 351 "grammar.y"
    { ;}
    break;

  case 204:
#line 353 "grammar.y"
    { ;}
    break;

  case 205:
#line 354 "grammar.y"
    { ;}
    break;

  case 206:
#line 355 "grammar.y"
    { ;}
    break;

  case 207:
#line 356 "grammar.y"
    {;}
    break;

  case 208:
#line 357 "grammar.y"
    {;}
    break;

  case 209:
#line 360 "grammar.y"
    {;}
    break;

  case 210:
#line 361 "grammar.y"
    { ;}
    break;

  case 211:
#line 363 "grammar.y"
    {;}
    break;

  case 212:
#line 364 "grammar.y"
    {;}
    break;

  case 213:
#line 367 "grammar.y"
    {;}
    break;

  case 214:
#line 369 "grammar.y"
    {;}
    break;

  case 215:
#line 370 "grammar.y"
    { ;}
    break;

  case 216:
#line 371 "grammar.y"
    { ;}
    break;

  case 218:
#line 376 "grammar.y"
    {;}
    break;

  case 219:
#line 377 "grammar.y"
    {;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 2749 "grammar.tab.c"

  yyvsp -= yylen;
  yyssp -= yylen;


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
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  int yytype = YYTRANSLATE (yychar);
	  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
	  YYSIZE_T yysize = yysize0;
	  YYSIZE_T yysize1;
	  int yysize_overflow = 0;
	  char *yymsg = 0;
#	  define YYERROR_VERBOSE_ARGS_MAXIMUM 5
	  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
	  int yyx;

#if 0
	  /* This is so xgettext sees the translatable formats that are
	     constructed on the fly.  */
	  YY_("syntax error, unexpected %s");
	  YY_("syntax error, unexpected %s, expecting %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
#endif
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
	  int yychecklim = YYLAST - yyn;
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
		yysize_overflow |= yysize1 < yysize;
		yysize = yysize1;
		yyfmt = yystpcpy (yyfmt, yyprefix);
		yyprefix = yyor;
	      }

	  yyf = YY_(yyformat);
	  yysize1 = yysize + yystrlen (yyf);
	  yysize_overflow |= yysize1 < yysize;
	  yysize = yysize1;

	  if (!yysize_overflow && yysize <= YYSTACK_ALLOC_MAXIMUM)
	    yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg)
	    {
	      /* Avoid sprintf, as that infringes on the user's name space.
		 Don't have undefined behavior even if the translation
		 produced a string with the wrong number of "%s"s.  */
	      char *yyp = yymsg;
	      int yyi = 0;
	      while ((*yyp = *yyf))
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
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    {
	      yyerror (YY_("syntax error"));
	      goto yyexhaustedlab;
	    }
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror (YY_("syntax error"));
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
	  yydestruct ("Error: discarding", yytoken, &yylval);
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
  if (0)
     goto yyerrorlab;

yyvsp -= yylen;
  yyssp -= yylen;
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


      yydestruct ("Error: popping", yystos[yystate], yyvsp);
      YYPOPSTACK;
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token. */
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
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK;
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 380 "grammar.y"




void main(int argc, char **argv)
{
 /*success("This is a valid python expression");*/
     if (argc > 1){
        for(int i=0;i<argc;i++)
            printf("value of argv[%d] = %s\n\n",i,argv[i]);
            yyin=fopen(argv[1],"r");
    }
        else
        yyin=stdin;
     yyparse();
}

/* int yyerror(const char* s) {
//     fprintf(stderr, "Error: %s\n", s);
//     return 1;
// }*/

void yyerror(const char *msg)
    {
          printf(" %s \n", msg);
    }
