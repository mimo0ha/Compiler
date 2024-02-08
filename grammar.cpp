/* A Bison parser, made by GNU Bison 3.0.4.  */

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */

#line 67 "grammar.cpp" /* yacc.c:339  */

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
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
   by #include "grammar.hpp".  */
#ifndef YY_YY_GRAMMAR_HPP_INCLUDED
# define YY_YY_GRAMMAR_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "grammar.y" /* yacc.c:355  */

      #include "python_ast_node.hpp"
      #include <iostream>
      #include <string>

#line 103 "grammar.cpp" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 6 "grammar.y" /* yacc.c:355  */

    AstNode* astNode;
        IdentifierNode* idNode;
    int d;

#line 181 "grammar.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GRAMMAR_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 11 "grammar.y" /* yacc.c:358  */

      extern int yylex();
      extern int yyparse();
      extern FILE *yyin;
      void yyerror(const char *);
      AstNode* root = NULL;
      int n_nodes = 0;
      int id=1;

#line 205 "grammar.cpp" /* yacc.c:358  */

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

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
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
#define YYFINAL  57
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   885

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  70
/* YYNRULES -- Number of rules.  */
#define YYNRULES  243
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  429

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   314

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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    46,    46,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    74,
      75,    76,    77,    78,    79,    80,    84,    86,    88,    90,
      93,    95,    97,   102,   108,   109,   115,   116,   123,   124,
     131,   132,   139,   142,   143,   150,   151,   158,   165,   166,
     173,   174,   175,   183,   184,   189,   190,   197,   198,   205,
     213,   214,   221,   222,   223,   231,   238,   239,   246,   247,
     254,   255,   256,   263,   270,   271,   277,   278,   285,   286,
     293,   294,   295,   302,   303,   309,   316,   317,   324,   325,
     330,   331,   332,   341,   342,   349,   354,   355,   362,   363,
     369,   370,   375,   376,   377,   386,   397,   411,   423,   437,
     438,   445,   458,   471,   487,   495,   503,   511,   519,   527,
     535,   543,   551,   559,   567,   575,   582,   589,   596,   601,
     607,   613,   619,   627,   638,   639,   642,   647,   650,   655,
     661,   667,   673,   682,   694,   705,   719,   730,   741,   754,
     765,   776,   787,   800,   810,   821,   834,   848,   859,   870,
     883,   893,   904,   917,   927,   938,   949,   961,   971,   982,
     995,  1006,  1020,  1033,  1042,  1051,  1064,  1076,  1087,  1088,
    1091,  1104,  1105,  1114,  1125,  1136,  1146,  1156,  1166,  1184,
    1194,  1205,  1215,  1226,  1237,  1248,  1260,  1271,  1283,  1298,
    1311,  1312,  1313,  1320,  1325,  1331,  1340,  1351,  1352,  1353,
    1359,  1364,  1370,  1381,  1392,  1393,  1394,  1395,  1402,  1405,
    1413,  1423,  1424,  1432,  1443,  1444,  1445,  1446,  1452,  1453,
    1454,  1455,  1462,  1470,  1477,  1478,  1486,  1493,  1503,  1515,
    1534,  1552,  1559,  1562
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
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
  "simple_stmt_break", "pass_simple_stmt", "return_stmt", "inreturn",
  "assignment", "expression", "function", "args", "args_", "arg",
  "ifforloops", "elifstatementforloops", "elsestatementforloops",
  "ifforloops_def", "elifstatementforloops_def",
  "elsestatementforloops_def", "if", "elifstatement", "elsestatement",
  "if_def", "elifstatement_def", "elsestatement_def", "whileloop",
  "whileloop_def", "whileargs", "for", "for_def", "list", "range",
  "forparams", "try", "except", "finally", "tryelse", "except_name",
  "tryrule", "output", "txtn", "txtnt", "in", "txtn1", "txtnt1",
  "listrule", "inlist", "class", "classargs", "classblock", "mycodeclass",
  "import", "from", "path", "importarg", YY_NULL
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   124,
     314
};
# endif

#define YYPACT_NINF -383

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-383)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     689,    -7,    38,    24,  -383,   414,    44,   414,    37,    49,
     233,  -383,    77,    89,    77,   114,   689,  -383,    98,   104,
    -383,  -383,  -383,  -383,   110,  -383,   130,   132,   152,  -383,
    -383,  -383,   105,   248,   123,   414,  -383,  -383,  -383,   414,
    -383,  -383,   414,   371,   147,   128,   158,   143,   176,  -383,
     371,    56,  -383,     2,  -383,    10,    76,  -383,  -383,  -383,
    -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,     5,    -3,
       3,  -383,  -383,  -383,  -383,  -383,  -383,   146,  -383,   371,
    -383,  -383,   140,  -383,   328,  -383,   414,   414,   414,   414,
     414,    50,    83,   414,   414,   180,     7,   181,  -383,  -383,
    -383,   268,  -383,   189,   367,  -383,  -383,    77,    77,   188,
     140,    77,   191,    47,   184,   192,  -383,   164,   193,   164,
    -383,   164,   105,  -383,  -383,  -383,  -383,  -383,  -383,  -383,
     179,   190,  -383,  -383,   160,   160,  -383,  -383,   407,   414,
     216,   414,   216,   216,   216,   204,    36,  -383,  -383,   195,
     205,  -383,  -383,   217,  -383,   143,  -383,  -383,   680,   414,
     354,   214,  -383,   218,  -383,  -383,    -2,   223,   220,   228,
      77,   238,   239,  -383,  -383,  -383,  -383,   232,   140,   216,
     216,   833,   237,   414,  -383,  -383,   414,   181,   802,  -383,
     140,   414,   245,   414,  -383,   524,   246,  -383,  -383,  -383,
     371,  -383,  -383,   744,   249,   140,  -383,   680,   260,   251,
     262,   264,   247,  -383,  -383,   825,  -383,  -383,  -383,   180,
     258,   371,   108,  -383,   414,  -383,  -383,  -383,   771,   275,
    -383,  -383,  -383,   259,  -383,   271,   255,   274,  -383,  -383,
     283,  -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,
     717,  -383,  -383,   188,  -383,   547,   680,   284,   680,   680,
     287,  -383,  -383,  -383,  -383,  -383,  -383,  -383,   180,  -383,
     414,   280,  -383,  -383,   289,  -383,  -383,  -383,  -383,   140,
     290,     7,   291,  -383,  -383,  -383,  -383,  -383,  -383,  -383,
    -383,  -383,  -383,  -383,   575,   294,   582,   610,   680,    36,
     371,   295,  -383,  -383,   298,    65,   292,   299,  -383,  -383,
     680,  -383,  -383,   617,  -383,  -383,   301,   119,   680,   293,
     414,  -383,  -383,   291,   487,   645,  -383,   802,   302,   414,
    -383,  -383,  -383,   652,   306,  -383,  -383,  -383,   290,   312,
    -383,   414,  -383,   427,   314,   322,  -383,  -383,  -383,  -383,
    -383,   779,   324,  -383,  -383,  -383,   295,   317,  -383,  -383,
     327,  -383,  -383,  -383,  -383,  -383,   290,   326,  -383,  -383,
     330,   336,  -383,  -383,  -383,  -383,  -383,  -383,  -383,   337,
    -383,  -383,  -383,  -383,  -383,   295,  -383,    65,   338,  -383,
    -383,  -383,   119,  -383,  -383,   343,   170,  -383,  -383,   487,
     341,   414,  -383,  -383,  -383,   464,   352,   353,  -383,  -383,
    -383,   338,   347,  -383,  -383,   357,   369,  -383,  -383,  -383,
    -383,  -383,  -383,   338,  -383,  -383,   170,  -383,  -383
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,    24,     0,     0,     0,     0,     0,
       0,   107,     0,     0,     0,     0,     2,     8,     0,     0,
      14,    16,    13,    12,     0,    21,     0,     0,     0,     6,
      17,    18,     0,     0,     0,     0,   128,   130,   129,     0,
     131,   132,     0,   173,     0,     0,     0,     0,     0,   218,
     217,     0,   243,     0,   241,     0,     0,     1,     9,    15,
       3,    10,    11,     7,     4,     5,    22,    25,     0,   189,
     191,    19,    20,    23,   203,   205,   204,     0,   202,   111,
     112,   113,   134,   127,     0,   125,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   210,   212,
     211,     0,   209,     0,     0,   213,   238,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   194,   190,     0,   192,
     196,   193,     0,   199,   201,   138,   140,   139,   141,   142,
       0,   135,   136,   126,   114,   115,   117,   118,   116,     0,
     122,     0,   121,   124,   123,     0,   159,   176,   177,     0,
       0,   178,   179,     0,   171,     0,   206,   208,     0,     0,
     214,     0,   242,     0,   219,   222,     0,     0,     0,     0,
       0,     0,     0,   195,   197,   198,   200,     0,     0,   120,
     119,     0,     0,     0,   157,   158,     0,     0,     0,   207,
       0,     0,     0,     0,    35,     0,     0,    41,    37,    39,
     216,   215,   239,     0,     0,     0,   240,     0,     0,     0,
       0,     0,     0,   137,    72,     0,    65,    67,    69,     0,
       0,   182,     0,   174,     0,   105,   106,    89,     0,     0,
      92,    85,    87,   108,   110,     0,     0,     0,   183,    36,
       0,    42,    38,    40,    33,   227,   233,   235,   232,   231,
       0,   236,   237,     0,   221,     0,     0,     0,     0,     0,
       0,   133,    28,    71,    66,    68,    70,   163,     0,   180,
       0,     0,    29,    90,     0,    91,    86,    88,    84,     0,
       0,     0,     0,    34,   223,   228,   234,   224,   229,   230,
     225,   226,   220,   184,     0,     0,     0,     0,     0,   160,
     181,     0,    83,   109,     0,   166,     0,     0,   172,   187,
       0,   186,   185,     0,   162,   161,     0,   145,     0,     0,
       0,   164,   165,     0,     0,     0,    26,     0,     0,     0,
     143,   144,    82,     0,     0,    73,    77,    79,     0,     0,
     175,     0,   101,     0,     0,     0,   104,    97,    99,   188,
      52,     0,     0,    44,    47,    49,     0,     0,    31,    81,
       0,    74,    78,    80,    75,   170,     0,     0,    32,   102,
       0,     0,   103,    98,   100,    94,    95,    27,    51,     0,
      45,    48,    50,    46,   149,     0,    76,   167,     0,    93,
      96,    43,   146,   169,   168,     0,   152,   148,   147,     0,
       0,     0,   150,   151,    64,     0,     0,     0,    56,    59,
      61,     0,     0,    30,    63,     0,     0,    57,    60,    62,
      58,    54,   156,     0,    53,    55,   153,   155,   154
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -383,  -383,  -383,     0,  -383,  -341,  -200,   206,  -382,  -314,
      68,  -195,  -383,  -383,  -383,  -383,  -383,  -383,  -208,  -383,
    -186,  -383,  -383,    -8,   -11,  -383,  -383,   -65,  -210,     6,
       8,  -329,   -34,   -32,   -13,   102,   103,  -160,    16,    21,
      -5,   -50,    -6,     1,    35,   129,  -383,  -383,  -383,   339,
     -19,   349,  -383,  -383,  -383,  -383,   -64,   388,  -383,   -93,
     -29,  -383,   406,  -383,   171,  -383,   -10,    -9,   411,   -58
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    15,    16,   194,   261,   317,   146,   154,   396,   305,
     308,   195,   351,   405,   215,   333,   228,   343,   229,    18,
     196,   233,    19,    43,    20,   130,   131,   132,   230,   330,
     331,   346,   402,   403,    21,   184,   185,   197,   321,   322,
      22,   198,    44,    23,   199,   150,   151,   222,    24,    69,
     116,   117,    70,    25,    26,    77,    78,    27,   101,   102,
      28,    51,    29,   166,   164,   250,    30,    31,    53,    54
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      17,    46,    50,    60,    81,    59,    64,    65,   157,   240,
     113,    61,   255,   124,   372,   384,    58,    62,   275,   267,
     274,    52,   106,   147,   365,    79,   114,    83,   148,   422,
      32,    84,   114,   112,    85,   241,   204,   118,   109,   205,
      34,   426,   115,    33,   392,   165,   107,   110,   115,   161,
     162,   120,   387,   167,   149,   139,   108,    10,   176,    35,
      45,   294,   189,   296,   297,   182,    36,   152,   299,   240,
     408,    37,   183,    38,    47,   169,   417,    48,   134,   135,
     136,   137,   138,   140,   142,   143,   144,    39,   141,    40,
      41,   170,    35,    52,   319,   241,   160,   104,   173,    36,
     174,   320,   175,   313,    37,    55,    38,   105,   240,    42,
     240,   240,   209,   213,    57,   325,   344,   353,    66,   352,
      39,    74,    40,    41,    67,   234,    75,   240,    76,   111,
     108,   179,   334,   180,   241,   370,   241,   241,   345,   240,
     254,   380,    42,   379,    68,   242,   269,   360,   328,   270,
      71,   200,    72,   241,   122,   329,   125,   371,   335,    98,
      82,   126,    74,   127,    99,   241,   100,    75,   216,    76,
      88,    89,    73,   361,    96,    95,   217,   220,   221,   128,
     129,   214,   218,   231,   123,   235,    97,   237,   227,   232,
     247,   406,   246,   251,   252,   239,   103,   415,   248,   400,
     145,   153,   264,   245,   249,   242,   401,   158,   163,   115,
     265,   168,   171,   407,   303,   263,   266,   177,   271,   416,
     172,   112,   181,   276,    86,    87,    88,    89,   273,   277,
     243,   178,   186,   187,   202,   188,   203,   287,   207,   286,
     290,   291,    35,   206,   242,   288,   242,   242,   208,    36,
     285,   289,   152,    49,    37,   239,    38,    35,   210,   211,
     212,   236,   300,   242,    36,   219,   244,   260,   336,    37,
      39,    38,    40,    41,   347,   242,   155,   253,   256,   257,
     258,     8,   259,   362,    98,    39,   268,    40,    41,    99,
     243,   100,    42,   373,   239,   278,   239,   239,    10,   280,
     279,   281,   282,   283,   295,   298,   156,    42,   301,   302,
     304,   307,   310,   239,   339,   316,   318,   324,   332,   327,
     323,   338,   354,   357,   342,   239,   364,   350,   355,   243,
     356,   243,   243,   359,   375,   367,    86,    87,    88,    89,
     366,    90,   376,   369,   383,   385,   381,   386,   243,   409,
     389,   378,   382,   337,   388,   418,   390,   391,   395,   348,
     243,   399,    86,    87,    88,    89,   133,    90,   363,   411,
      91,    92,   420,   421,   201,   423,    35,   424,   374,    86,
      87,    88,    89,    36,    90,    93,    94,   159,    37,   425,
      38,   340,   427,   223,   428,   412,    91,    92,   397,   404,
     398,   314,   315,   393,    39,   414,    40,    41,   394,   119,
     306,    93,    94,    91,    92,    86,    87,    88,    89,   121,
      -1,    80,    63,    35,   292,    56,    42,     0,    93,    94,
      36,     0,     0,   190,   410,    37,     0,    38,     0,     0,
     419,     1,     0,     2,     0,     0,   368,     4,     0,    91,
      92,    39,     0,    40,    41,     0,     0,   341,   192,   193,
       8,     0,     9,     0,    93,    94,     0,     0,     0,     0,
     190,     0,     0,    42,     0,   225,   226,    10,     1,    11,
       2,     0,     0,   413,     4,     0,     0,     0,     0,     0,
       0,     0,     0,   190,   341,   192,   193,     8,     0,     9,
       0,     1,     0,     2,     0,     0,     0,     4,     0,     0,
       0,     0,   225,   226,    10,     0,    11,   341,   192,   193,
       8,     0,     9,     0,     0,     0,     0,     0,     0,     0,
     190,     0,     0,     0,     0,   225,   226,    10,     1,    11,
       2,     0,     0,   238,     4,     0,     0,     0,     0,     0,
       0,     0,     0,   190,   191,   192,   193,     8,     0,     9,
       0,     1,     0,     2,     0,     0,   293,     4,     0,     0,
       0,     0,     0,     0,    10,     0,    11,   191,   192,   193,
       8,   190,     9,     0,     0,     0,     0,     0,   190,     1,
       0,     2,     0,     0,   309,     4,     1,    10,     2,    11,
       0,   311,     4,     0,     0,   191,   192,   193,     8,     0,
       9,     0,   191,   192,   193,     8,   190,     9,     0,     0,
       0,     0,     0,   190,     1,    10,     2,    11,     0,   312,
       4,     1,    10,     2,    11,     0,   326,     4,     0,     0,
     191,   192,   193,     8,     0,     9,     0,   191,   192,   193,
       8,   190,     9,     0,     0,     0,     0,     0,   190,     1,
      10,     2,    11,     0,   349,     4,     1,    10,     2,    11,
       0,   358,     4,     0,     0,   191,   192,   193,     8,     0,
       9,     0,   191,   192,   193,     8,   190,     9,     0,     0,
       0,     0,     0,     0,     1,    10,     2,    11,     0,     0,
       4,     0,    10,     1,    11,     2,     3,     0,     0,     4,
     191,   192,   193,     8,     0,     9,     0,     0,     0,     5,
       6,     7,     8,     0,     9,     0,     0,     0,     0,     0,
      10,     1,    11,     2,     3,     0,   284,     4,     0,    10,
       0,    11,    12,     0,    13,    14,     0,     5,     6,     7,
       8,     0,     9,     0,     0,     0,     0,     0,     1,     0,
       2,     3,     0,     0,     4,     0,     0,    10,     0,    11,
      12,     0,     0,    14,     5,     6,     7,     8,     0,     9,
       0,     0,     0,     0,     0,     1,     0,     2,     0,     0,
     272,     4,     0,     1,    10,     2,    11,    12,   377,     4,
      14,   224,     6,     7,     8,     0,     9,     0,     0,   224,
       6,     7,     8,     0,     9,     0,     1,     0,     2,   225,
     226,    10,     4,    11,     0,     0,     0,   225,   226,    10,
       0,    11,   224,     6,     7,     8,     0,     9,     0,     1,
       0,     2,     0,     0,   262,     4,     0,     1,     0,     2,
     225,   226,    10,     4,    11,     5,     6,     7,     8,     0,
       9,     0,     0,     5,     6,     7,     8,     0,     9,     0,
       0,     0,     0,     0,     0,    10,     0,    11,     0,     0,
       0,     0,     0,    10,     0,    11
};

static const yytype_int16 yycheck[] =
{
       0,     7,    10,    16,    33,    16,    16,    16,   101,   195,
      68,    16,   207,    77,   343,   356,    16,    16,   228,   219,
     228,    16,    20,    16,   338,    33,    29,    35,    21,   411,
      37,    39,    29,    28,    42,   195,    38,    34,    28,    41,
      16,   423,    45,     5,   385,   110,    44,    37,    45,   107,
     108,    70,   366,   111,    47,     5,    54,    50,   122,     9,
      16,   256,   155,   258,   259,    29,    16,    96,   268,   255,
     399,    21,    36,    23,    37,    28,   405,    28,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    37,     5,    39,
      40,    44,     9,    16,    29,   255,   104,    41,   117,    16,
     119,    36,   121,   298,    21,    16,    23,    51,   294,    59,
     296,   297,   170,   178,     0,   310,   324,   327,    20,   327,
      37,    16,    39,    40,    20,   190,    21,   313,    23,    53,
      54,   139,   318,   141,   294,   343,   296,   297,   324,   325,
     205,   351,    59,   351,    34,   195,    38,   333,    29,    41,
      20,   159,    20,   313,     8,    36,    16,   343,   318,    16,
      37,    21,    16,    23,    21,   325,    23,    21,   181,    23,
      10,    11,    20,   333,    46,    28,   181,   183,   186,    39,
      40,   181,   181,   188,    38,   191,    28,   193,   188,   188,
     203,   399,   203,   203,   203,   195,    20,   405,   203,    29,
      20,    20,   215,   203,   203,   255,    36,    18,    20,    45,
     215,    20,    28,   399,   279,   215,   215,    38,   224,   405,
      28,    28,    18,   228,     8,     9,    10,    11,   228,   228,
     195,    41,    37,    28,    20,    18,    18,   250,    18,   250,
     250,   250,     9,    20,   294,   250,   296,   297,    20,    16,
     250,   250,   281,    20,    21,   255,    23,     9,    20,    20,
      28,    16,   270,   313,    16,    28,    20,    20,   318,    21,
      37,    23,    39,    40,   324,   325,     8,    28,    18,    28,
      18,    33,    18,   333,    16,    37,    28,    39,    40,    21,
     255,    23,    59,   343,   294,    20,   296,   297,    50,    28,
      41,    46,    28,    20,    20,    18,    38,    59,    28,    20,
      20,    20,    18,   313,   320,    20,    18,    18,   318,    18,
      28,    28,   327,   329,   324,   325,    20,   327,   327,   294,
      28,   296,   297,   333,    20,   341,     8,     9,    10,    11,
      28,    13,    20,   343,    20,    28,   351,    20,   313,   399,
      20,   351,   351,   318,    28,   405,    20,    20,    20,   324,
     325,    18,     8,     9,    10,    11,    38,    13,   333,    28,
      42,    43,    20,    20,    20,    28,     9,    20,   343,     8,
       9,    10,    11,    16,    13,    57,    58,    20,    21,    20,
      23,   323,   426,   187,   426,   401,    42,    43,   392,   399,
     392,   299,   299,   387,    37,   405,    39,    40,   387,    70,
     281,    57,    58,    42,    43,     8,     9,    10,    11,    70,
      13,    33,    16,     9,   253,    14,    59,    -1,    57,    58,
      16,    -1,    -1,     6,   399,    21,    -1,    23,    -1,    -1,
     405,    14,    -1,    16,    -1,    -1,    19,    20,    -1,    42,
      43,    37,    -1,    39,    40,    -1,    -1,    30,    31,    32,
      33,    -1,    35,    -1,    57,    58,    -1,    -1,    -1,    -1,
       6,    -1,    -1,    59,    -1,    48,    49,    50,    14,    52,
      16,    -1,    -1,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     6,    30,    31,    32,    33,    -1,    35,
      -1,    14,    -1,    16,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    48,    49,    50,    -1,    52,    30,    31,    32,
      33,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       6,    -1,    -1,    -1,    -1,    48,    49,    50,    14,    52,
      16,    -1,    -1,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     6,    30,    31,    32,    33,    -1,    35,
      -1,    14,    -1,    16,    -1,    -1,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    52,    30,    31,    32,
      33,     6,    35,    -1,    -1,    -1,    -1,    -1,     6,    14,
      -1,    16,    -1,    -1,    19,    20,    14,    50,    16,    52,
      -1,    19,    20,    -1,    -1,    30,    31,    32,    33,    -1,
      35,    -1,    30,    31,    32,    33,     6,    35,    -1,    -1,
      -1,    -1,    -1,     6,    14,    50,    16,    52,    -1,    19,
      20,    14,    50,    16,    52,    -1,    19,    20,    -1,    -1,
      30,    31,    32,    33,    -1,    35,    -1,    30,    31,    32,
      33,     6,    35,    -1,    -1,    -1,    -1,    -1,     6,    14,
      50,    16,    52,    -1,    19,    20,    14,    50,    16,    52,
      -1,    19,    20,    -1,    -1,    30,    31,    32,    33,    -1,
      35,    -1,    30,    31,    32,    33,     6,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    14,    50,    16,    52,    -1,    -1,
      20,    -1,    50,    14,    52,    16,    17,    -1,    -1,    20,
      30,    31,    32,    33,    -1,    35,    -1,    -1,    -1,    30,
      31,    32,    33,    -1,    35,    -1,    -1,    -1,    -1,    -1,
      50,    14,    52,    16,    17,    -1,    19,    20,    -1,    50,
      -1,    52,    53,    -1,    55,    56,    -1,    30,    31,    32,
      33,    -1,    35,    -1,    -1,    -1,    -1,    -1,    14,    -1,
      16,    17,    -1,    -1,    20,    -1,    -1,    50,    -1,    52,
      53,    -1,    -1,    56,    30,    31,    32,    33,    -1,    35,
      -1,    -1,    -1,    -1,    -1,    14,    -1,    16,    -1,    -1,
      19,    20,    -1,    14,    50,    16,    52,    53,    19,    20,
      56,    30,    31,    32,    33,    -1,    35,    -1,    -1,    30,
      31,    32,    33,    -1,    35,    -1,    14,    -1,    16,    48,
      49,    50,    20,    52,    -1,    -1,    -1,    48,    49,    50,
      -1,    52,    30,    31,    32,    33,    -1,    35,    -1,    14,
      -1,    16,    -1,    -1,    19,    20,    -1,    14,    -1,    16,
      48,    49,    50,    20,    52,    30,    31,    32,    33,    -1,
      35,    -1,    -1,    30,    31,    32,    33,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    52
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    14,    16,    17,    20,    30,    31,    32,    33,    35,
      50,    52,    53,    55,    56,    62,    63,    64,    80,    83,
      85,    95,   101,   104,   109,   114,   115,   118,   121,   123,
     127,   128,    37,     5,    16,     9,    16,    21,    23,    37,
      39,    40,    59,    84,   103,    16,   103,    37,    28,    20,
      84,   122,    16,   129,   130,    16,   129,     0,    64,    85,
      95,   101,   104,   123,   127,   128,    20,    20,    34,   110,
     113,    20,    20,    20,    16,    21,    23,   116,   117,    84,
     118,   121,    37,    84,    84,    84,     8,     9,    10,    11,
      13,    42,    43,    57,    58,    28,    46,    28,    16,    21,
      23,   119,   120,    20,    41,    51,    20,    44,    54,    28,
      37,    53,    28,   130,    29,    45,   111,   112,    34,   110,
     111,   112,     8,    38,   117,    16,    21,    23,    39,    40,
      86,    87,    88,    38,    84,    84,    84,    84,    84,     5,
      84,     5,    84,    84,    84,    20,    67,    16,    21,    47,
     106,   107,   121,    20,    68,     8,    38,   120,    18,    20,
      84,   130,   130,    20,   125,    88,   124,   130,    20,    28,
      44,    28,    28,   111,   111,   111,   117,    38,    41,    84,
      84,    18,    29,    36,    96,    97,    37,    28,    18,   120,
       6,    30,    31,    32,    64,    72,    81,    98,   102,   105,
      84,    20,    20,    18,    38,    41,    20,    18,    20,   130,
      20,    20,    28,    88,    64,    75,    95,   101,   104,    28,
     103,    84,   108,    68,    30,    48,    49,    64,    77,    79,
      89,   101,   104,    82,    88,   103,    16,   103,    19,    64,
      81,    98,   102,   105,    20,    64,    85,    95,   101,   104,
     126,   127,   128,    28,    88,    72,    18,    28,    18,    18,
      20,    65,    19,    64,    95,   101,   104,    67,    28,    38,
      41,   103,    19,    64,    79,    89,   101,   104,    20,    41,
      28,    46,    28,    20,    19,    64,    85,    95,   101,   104,
     127,   128,   125,    19,    72,    20,    72,    72,    18,    67,
      84,    28,    20,    88,    20,    70,   106,    20,    71,    19,
      18,    19,    19,    72,    96,    97,    20,    66,    18,    29,
      36,    99,   100,    28,    18,    72,    19,    18,    29,    36,
      90,    91,    64,    76,    81,    98,   102,   105,    28,   103,
      71,    30,    64,    78,    79,    81,    92,   102,   105,    19,
      64,    73,    79,    89,   101,   104,    28,   103,    19,    64,
      81,    98,   102,   105,    20,    70,    28,   103,    19,    64,
      79,    81,    92,   102,   105,    20,    20,    19,    64,    79,
      89,   101,   104,    20,    66,    28,    20,    70,    28,    20,
      20,    20,    66,    99,   100,    20,    69,    90,    91,    18,
      29,    36,    93,    94,    64,    74,    79,    81,    92,   102,
     105,    28,   103,    19,    64,    79,    81,    92,   102,   105,
      20,    20,    69,    28,    20,    20,    69,    93,    94
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
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
      78,    78,    78,    78,    78,    79,    79,    80,    81,    82,
      82,    83,    83,    83,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    85,    86,    86,    87,    87,    88,    88,
      88,    88,    88,    89,    89,    89,    90,    90,    90,    91,
      92,    92,    92,    93,    93,    93,    94,    95,    95,    95,
      96,    96,    96,    97,    98,    98,    98,    99,    99,    99,
     100,   101,   102,   103,   104,   105,   106,   106,   106,   106,
     107,   108,   108,   109,   110,   111,   112,   113,   113,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   115,
     116,   116,   116,   117,   117,   117,   118,   119,   119,   119,
     120,   120,   120,   121,   122,   122,   122,   122,   122,   123,
     123,   124,   124,   125,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   127,   127,
     128,   129,   129,   130
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     1,     2,     1,     2,
       2,     2,     1,     1,     1,     2,     1,     1,     1,     2,
       2,     1,     2,     2,     1,     2,     4,     4,     4,     4,
       4,     4,     4,     2,     3,     1,     2,     1,     2,     1,
       2,     1,     2,     3,     1,     2,     2,     1,     2,     1,
       2,     2,     1,     3,     2,     3,     1,     2,     2,     1,
       2,     1,     2,     2,     1,     1,     2,     1,     2,     1,
       2,     2,     1,     1,     2,     2,     3,     1,     2,     1,
       2,     2,     1,     3,     2,     1,     2,     1,     2,     1,
       2,     2,     1,     3,     2,     2,     3,     1,     2,     1,
       2,     1,     2,     2,     1,     1,     1,     1,     2,     3,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     4,
       4,     3,     3,     3,     3,     2,     3,     2,     1,     1,
       1,     1,     1,     7,     0,     1,     1,     3,     1,     1,
       1,     1,     1,     5,     5,     4,     4,     5,     5,     3,
       5,     5,     4,     4,     5,     5,     3,     5,     5,     4,
       4,     5,     5,     3,     5,     5,     4,     4,     5,     5,
       3,     4,     4,     1,     6,     6,     1,     1,     1,     1,
       4,     3,     1,     6,     6,     6,     6,     7,     9,     2,
       3,     2,     3,     3,     3,     4,     3,     4,     4,     4,
       3,     2,     1,     1,     1,     1,     4,     3,     2,     1,
       1,     1,     1,     3,     3,     4,     4,     1,     1,     4,
       7,     3,     1,     4,     2,     2,     2,     1,     2,     2,
       2,     1,     1,     1,     2,     1,     1,     1,     3,     5,
       5,     1,     3,     1
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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
#line 46 "grammar.y" /* yacc.c:1646  */
    { 
      std::string name = "code" + std::to_string(n_nodes);
      ++n_nodes;
      (yyval.astNode) = new Code("startCode");
      (yyval.astNode)->add((yyvsp[0].astNode));
      root = (yyval.astNode);
               YYACCEPT;
}
#line 1678 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 56 "grammar.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode);}
#line 1684 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 57 "grammar.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode);}
#line 1690 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 58 "grammar.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode);}
#line 1696 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 59 "grammar.y" /* yacc.c:1646  */
    { (yyval.astNode) = new MYCode("CodeStatements "); (yyval.astNode)->add((yyvsp[0].astNode));   }
#line 1702 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 60 "grammar.y" /* yacc.c:1646  */
    {(yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode);}
#line 1708 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 61 "grammar.y" /* yacc.c:1646  */
    {  (yyval.astNode) = new MYCode("CodeStatements "); (yyval.astNode)->add((yyvsp[0].astNode));  }
#line 1714 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 62 "grammar.y" /* yacc.c:1646  */
    {(yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode); }
#line 1720 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 63 "grammar.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode); }
#line 1726 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 64 "grammar.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode); }
#line 1732 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 65 "grammar.y" /* yacc.c:1646  */
    { (yyval.astNode) = new MYCode("CodeStatements "); (yyval.astNode)->add((yyvsp[0].astNode));  }
#line 1738 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 66 "grammar.y" /* yacc.c:1646  */
    {(yyval.astNode) = new MYCode("CodeStatements"); (yyval.astNode)->add((yyvsp[0].astNode));}
#line 1744 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 67 "grammar.y" /* yacc.c:1646  */
    {(yyval.astNode) = new MYCode("CodeStatements"); (yyval.astNode)->add((yyvsp[0].astNode));  }
#line 1750 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 68 "grammar.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode);}
#line 1756 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 69 "grammar.y" /* yacc.c:1646  */
    { (yyval.astNode) = new MYCode("CodeStatements"); (yyval.astNode)->add((yyvsp[0].astNode));}
#line 1762 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 70 "grammar.y" /* yacc.c:1646  */
    {(yyval.astNode) = new MYCode("CodeStatements"); (yyval.astNode)->add((yyvsp[0].astNode)); }
#line 1768 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 71 "grammar.y" /* yacc.c:1646  */
    {(yyval.astNode) = new MYCode("CodeStatements"); (yyval.astNode)->add((yyvsp[0].astNode)); }
#line 1774 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 74 "grammar.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode); }
#line 1780 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 75 "grammar.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode); }
#line 1786 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 76 "grammar.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 1792 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 77 "grammar.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode);}
#line 1798 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 78 "grammar.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode); }
#line 1804 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 79 "grammar.y" /* yacc.c:1646  */
    { }
#line 1810 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 80 "grammar.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[-1].astNode); }
#line 1816 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 84 "grammar.y" /* yacc.c:1646  */
    {(yyval.astNode) = (yyvsp[-1].astNode);  }
#line 1822 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 86 "grammar.y" /* yacc.c:1646  */
    {(yyval.astNode) = (yyvsp[-1].astNode);}
#line 1828 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 88 "grammar.y" /* yacc.c:1646  */
    {(yyval.astNode) = (yyvsp[-1].astNode);}
#line 1834 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 90 "grammar.y" /* yacc.c:1646  */
    {(yyval.astNode) = (yyvsp[-1].astNode);}
#line 1840 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 93 "grammar.y" /* yacc.c:1646  */
    {(yyval.astNode) = (yyvsp[-1].astNode);}
#line 1846 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 95 "grammar.y" /* yacc.c:1646  */
    {(yyval.astNode) = (yyvsp[-1].astNode);}
#line 1852 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 97 "grammar.y" /* yacc.c:1646  */
    {(yyval.astNode) = (yyvsp[-1].astNode);}
#line 1858 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 102 "grammar.y" /* yacc.c:1646  */
    {  
          id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          (yyval.astNode) = new StatementsNode(text); (yyval.astNode)->add((yyvsp[-1].astNode)); }
#line 1869 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 108 "grammar.y" /* yacc.c:1646  */
    { (yyvsp[-2].astNode)->add((yyvsp[-1].astNode)); (yyval.astNode) = (yyvsp[-2].astNode); }
#line 1875 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 109 "grammar.y" /* yacc.c:1646  */
    { 
           id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          (yyval.astNode) = new StatementsNode(text); (yyval.astNode)->add((yyvsp[0].astNode)); }
#line 1886 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 115 "grammar.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode); }
#line 1892 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 116 "grammar.y" /* yacc.c:1646  */
    {
           id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          (yyval.astNode) = new StatementsNode(text); (yyval.astNode)->add((yyvsp[0].astNode));
           }
#line 1904 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 123 "grammar.y" /* yacc.c:1646  */
    {(yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode);}
#line 1910 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 124 "grammar.y" /* yacc.c:1646  */
    {
          id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          (yyval.astNode) = new StatementsNode(text); (yyval.astNode)->add((yyvsp[0].astNode));
           }
#line 1922 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 131 "grammar.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode); }
#line 1928 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 132 "grammar.y" /* yacc.c:1646  */
    { 
            id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          (yyval.astNode) = new StatementsNode(text); (yyval.astNode)->add((yyvsp[0].astNode));
          }
#line 1940 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 139 "grammar.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode);}
#line 1946 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 142 "grammar.y" /* yacc.c:1646  */
    {(yyvsp[-2].astNode)->add((yyvsp[-1].astNode)); (yyval.astNode) = (yyvsp[-2].astNode);}
#line 1952 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 143 "grammar.y" /* yacc.c:1646  */
    {
           id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          (yyval.astNode) = new StatementsNode(text); (yyval.astNode)->add((yyvsp[0].astNode));
          }
#line 1964 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 150 "grammar.y" /* yacc.c:1646  */
    {(yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode);}
#line 1970 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 151 "grammar.y" /* yacc.c:1646  */
    {
          id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          (yyval.astNode) = new StatementsNode(text); (yyval.astNode)->add((yyvsp[-1].astNode));
          }
#line 1982 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 158 "grammar.y" /* yacc.c:1646  */
    { 
           id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          (yyval.astNode) = new StatementsNode(text); (yyval.astNode)->add((yyvsp[0].astNode));
          }
#line 1994 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 165 "grammar.y" /* yacc.c:1646  */
    {(yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode);}
#line 2000 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 166 "grammar.y" /* yacc.c:1646  */
    {
         id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          (yyval.astNode) = new StatementsNode(text); (yyval.astNode)->add((yyvsp[0].astNode));
           }
#line 2012 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 173 "grammar.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode);}
#line 2018 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 174 "grammar.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode);}
#line 2024 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 175 "grammar.y" /* yacc.c:1646  */
    { id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          (yyval.astNode) = new StatementsNode(text); (yyval.astNode)->add((yyvsp[0].astNode));  }
#line 2034 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 183 "grammar.y" /* yacc.c:1646  */
    {(yyvsp[-2].astNode)->add((yyvsp[-1].astNode)); (yyval.astNode) = (yyvsp[-2].astNode);}
#line 2040 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 184 "grammar.y" /* yacc.c:1646  */
    {id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          (yyval.astNode) = new StatementsNode(text); (yyval.astNode)->add((yyvsp[-1].astNode)); }
#line 2050 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 189 "grammar.y" /* yacc.c:1646  */
    {(yyvsp[-2].astNode)->add((yyvsp[-1].astNode)); (yyval.astNode) = (yyvsp[-2].astNode);}
#line 2056 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 190 "grammar.y" /* yacc.c:1646  */
    {
           id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          (yyval.astNode) = new StatementsNode(text); (yyval.astNode)->add((yyvsp[0].astNode));  
          }
#line 2068 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 197 "grammar.y" /* yacc.c:1646  */
    {(yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode);}
#line 2074 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 198 "grammar.y" /* yacc.c:1646  */
    {
          id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          (yyval.astNode) = new StatementsNode(text); (yyval.astNode)->add((yyvsp[-1].astNode));
          }
#line 2086 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 205 "grammar.y" /* yacc.c:1646  */
    { 
          id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          (yyval.astNode) = new StatementsNode(text); (yyval.astNode)->add((yyvsp[0].astNode));  

          }
#line 2099 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 213 "grammar.y" /* yacc.c:1646  */
    {(yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode);}
#line 2105 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 214 "grammar.y" /* yacc.c:1646  */
    {
            id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          (yyval.astNode) = new StatementsNode(text); (yyval.astNode)->add((yyvsp[0].astNode)); 
           }
#line 2117 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 221 "grammar.y" /* yacc.c:1646  */
    {(yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2123 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 222 "grammar.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2129 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 223 "grammar.y" /* yacc.c:1646  */
    { id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          (yyval.astNode) = new StatementsNode(text); (yyval.astNode)->add((yyvsp[0].astNode));  }
#line 2139 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 231 "grammar.y" /* yacc.c:1646  */
    {
            id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          (yyval.astNode) = new StatementsNode(text); (yyval.astNode)->add((yyvsp[0].astNode));
          }
#line 2151 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 238 "grammar.y" /* yacc.c:1646  */
    {(yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode);}
#line 2157 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 239 "grammar.y" /* yacc.c:1646  */
    { 
           id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          (yyval.astNode) = new StatementsNode(text); (yyval.astNode)->add((yyvsp[0].astNode));
          }
#line 2169 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 246 "grammar.y" /* yacc.c:1646  */
    {(yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode);}
#line 2175 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 247 "grammar.y" /* yacc.c:1646  */
    {
            id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          (yyval.astNode) = new StatementsNode(text); (yyval.astNode)->add((yyvsp[0].astNode));
           }
#line 2187 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 254 "grammar.y" /* yacc.c:1646  */
    {(yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode);}
#line 2193 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 255 "grammar.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode);}
#line 2199 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 256 "grammar.y" /* yacc.c:1646  */
    {id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          (yyval.astNode) = new StatementsNode(text); (yyval.astNode)->add((yyvsp[0].astNode));   }
#line 2209 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 263 "grammar.y" /* yacc.c:1646  */
    {
          id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          (yyval.astNode) = new StatementsNode(text); (yyval.astNode)->add((yyvsp[0].astNode));
          }
#line 2221 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 270 "grammar.y" /* yacc.c:1646  */
    {(yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode);}
#line 2227 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 271 "grammar.y" /* yacc.c:1646  */
    {
          id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          (yyval.astNode) = new StatementsNode(text); (yyval.astNode)->add((yyvsp[-1].astNode));  }
#line 2238 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 277 "grammar.y" /* yacc.c:1646  */
    { (yyvsp[-2].astNode)->add((yyvsp[-1].astNode)); (yyval.astNode) = (yyvsp[-2].astNode); }
#line 2244 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 278 "grammar.y" /* yacc.c:1646  */
    { 
           id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          (yyval.astNode) = new StatementsNode(text); (yyval.astNode)->add((yyvsp[0].astNode));
          }
#line 2256 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 285 "grammar.y" /* yacc.c:1646  */
    {(yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode);}
#line 2262 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 286 "grammar.y" /* yacc.c:1646  */
    {
            id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          (yyval.astNode) = new StatementsNode(text); (yyval.astNode)->add((yyvsp[0].astNode)); 
           }
#line 2274 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 293 "grammar.y" /* yacc.c:1646  */
    {(yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode);}
#line 2280 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 294 "grammar.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode);}
#line 2286 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 295 "grammar.y" /* yacc.c:1646  */
    {id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          (yyval.astNode) = new StatementsNode(text); (yyval.astNode)->add((yyvsp[0].astNode)); }
#line 2296 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 302 "grammar.y" /* yacc.c:1646  */
    {(yyvsp[-2].astNode)->add((yyvsp[-1].astNode)); (yyval.astNode) = (yyvsp[-2].astNode);}
#line 2302 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 303 "grammar.y" /* yacc.c:1646  */
    {
               id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          (yyval.astNode) = new StatementsNode(text); (yyval.astNode)->add((yyvsp[-1].astNode));}
#line 2313 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 309 "grammar.y" /* yacc.c:1646  */
    { 
                id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          (yyval.astNode) = new StatementsNode(text); (yyval.astNode)->add((yyvsp[0].astNode));
               }
#line 2325 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 316 "grammar.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2331 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 317 "grammar.y" /* yacc.c:1646  */
    { 
                id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          (yyval.astNode) = new StatementsNode(text); (yyval.astNode)->add((yyvsp[0].astNode));
               }
#line 2343 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 324 "grammar.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2349 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 325 "grammar.y" /* yacc.c:1646  */
    {id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          (yyval.astNode) = new StatementsNode(text); (yyval.astNode)->add((yyvsp[0].astNode));  }
#line 2359 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 330 "grammar.y" /* yacc.c:1646  */
    {(yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2365 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 331 "grammar.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode);}
#line 2371 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 332 "grammar.y" /* yacc.c:1646  */
    { 
               id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          (yyval.astNode) = new StatementsNode(text); (yyval.astNode)->add((yyvsp[0].astNode));
          }
#line 2383 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 341 "grammar.y" /* yacc.c:1646  */
    {(yyvsp[-2].astNode)->add((yyvsp[-1].astNode)); (yyval.astNode) = (yyvsp[-2].astNode);}
#line 2389 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 342 "grammar.y" /* yacc.c:1646  */
    {
               id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          (yyval.astNode) = new StatementsNode(text); (yyval.astNode)->add((yyvsp[-1].astNode));
               }
#line 2401 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 349 "grammar.y" /* yacc.c:1646  */
    {id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          (yyval.astNode) = new StatementsNode(text); (yyval.astNode)->add((yyvsp[-1].astNode));  }
#line 2411 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 354 "grammar.y" /* yacc.c:1646  */
    {(yyvsp[-2].astNode)->add((yyvsp[-1].astNode)); (yyval.astNode) = (yyvsp[-2].astNode);}
#line 2417 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 355 "grammar.y" /* yacc.c:1646  */
    {
                 id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          (yyval.astNode) = new StatementsNode(text); (yyval.astNode)->add((yyvsp[0].astNode));
                }
#line 2429 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 362 "grammar.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2435 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 363 "grammar.y" /* yacc.c:1646  */
    { 
               id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          (yyval.astNode) = new StatementsNode(text); (yyval.astNode)->add((yyvsp[0].astNode)); }
#line 2446 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 369 "grammar.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode);}
#line 2452 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 370 "grammar.y" /* yacc.c:1646  */
    { id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          (yyval.astNode) = new StatementsNode(text); (yyval.astNode)->add((yyvsp[0].astNode));  }
#line 2462 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 375 "grammar.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode); }
#line 2468 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 376 "grammar.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode);}
#line 2474 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 377 "grammar.y" /* yacc.c:1646  */
    { 
               id = id + 1 ;
          std::string text = "Statements";
         text += std::to_string(id);

          (yyval.astNode) = new StatementsNode(text); (yyval.astNode)->add((yyvsp[0].astNode));
          }
#line 2486 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 386 "grammar.y" /* yacc.c:1646  */
    {
    id = id + 1 ;
       std::string text = "breakStatements";
     text += std::to_string(id);

    (yyval.astNode) = new BreakStatementNode(text); 
    std::string nname = "break" + std::to_string(n_nodes);
    ++n_nodes;
    (yyvsp[0].astNode)->name=nname;
    (yyval.astNode)->add((yyvsp[0].astNode));
}
#line 2502 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 397 "grammar.y" /* yacc.c:1646  */
    {
       id = id + 1 ;
       std::string text = "CONTINUEStatements";
     text += std::to_string(id);

    (yyval.astNode) = new CONTINUEStatementNode(text); 
    std::string nname = "CONTINUE" + std::to_string(n_nodes);
    ++n_nodes;
    (yyvsp[0].astNode)->name=nname;
    (yyval.astNode)->add((yyvsp[0].astNode));

  }
#line 2519 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 411 "grammar.y" /* yacc.c:1646  */
    {
    id = id + 1 ;
       std::string text = "PASSStatements";
     text += std::to_string(id);

    (yyval.astNode) = new PassStatementNode(text); 
    std::string nname = "PASS" + std::to_string(n_nodes);
    ++n_nodes;
    (yyvsp[0].astNode)->name=nname;
    (yyval.astNode)->add((yyvsp[0].astNode));
}
#line 2535 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 423 "grammar.y" /* yacc.c:1646  */
    { 
    id = id + 1 ;
       std::string text = "ReturnStatements";
     text += std::to_string(id);

    (yyval.astNode) = new ReturnStatementNode(text); 
    std::string nname = "retur" + std::to_string(n_nodes);
    ++n_nodes;
    (yyvsp[-1].astNode)->name=nname;
    (yyval.astNode)->add((yyvsp[-1].astNode));
    (yyval.astNode)->add((yyvsp[0].astNode));
 }
#line 2552 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 437 "grammar.y" /* yacc.c:1646  */
    { (yyvsp[-2].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-2].astNode);  }
#line 2558 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 438 "grammar.y" /* yacc.c:1646  */
    { 
       id = id + 1 ;
       std::string text = "Argsreturn";
     text += std::to_string(id);
         (yyval.astNode) = new Args(text); (yyval.astNode)->add((yyvsp[0].astNode)); }
#line 2568 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 445 "grammar.y" /* yacc.c:1646  */
    {
    id = id + 1 ;
     std::string text = "assign";
     text += std::to_string(id);

      std::string nname = "iden" + std::to_string(n_nodes);
      ++n_nodes;
      (yyvsp[-2].astNode)->name=nname;
      (yyval.astNode) = new assignmentStatement(text);
      (yyval.astNode)->add((yyvsp[-2].astNode));
      (yyval.astNode)->add((yyvsp[0].astNode));

  }
#line 2586 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 458 "grammar.y" /* yacc.c:1646  */
    {
  id = id + 1 ;
     std::string text = "assign2";
     text += std::to_string(id);

     std::string nname = "iden" + std::to_string(n_nodes);
      ++n_nodes;
      (yyvsp[-2].astNode)->name=nname;
      (yyval.astNode) = new assignmentStatement(text);
      (yyval.astNode)->add((yyvsp[-2].astNode));
      (yyval.astNode)->add((yyvsp[0].astNode));
   
  }
#line 2604 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 471 "grammar.y" /* yacc.c:1646  */
    {
    id = id + 1 ;
     std::string text = "assign3";
     text += std::to_string(id);

     std::string nname = "iden" + std::to_string(n_nodes);
      ++n_nodes;
      (yyvsp[-2].astNode)->name=nname;
      (yyval.astNode) = new assignmentStatement(text);
      (yyval.astNode)->add((yyvsp[-2].astNode));
      (yyval.astNode)->add((yyvsp[0].astNode));

  }
#line 2622 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 487 "grammar.y" /* yacc.c:1646  */
    {
    id = id + 1 ;
     std::string text = "exp";
     text += std::to_string(id);
(yyval.astNode) = new PlusExpressionNode(text);
(yyval.astNode)->add((yyvsp[-2].astNode));
(yyval.astNode)->add((yyvsp[0].astNode));
}
#line 2635 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 495 "grammar.y" /* yacc.c:1646  */
    {
     id = id + 1 ;
     std::string text = "exp";
     text += std::to_string(id);
(yyval.astNode) = new MinusExpressionNode(text);
(yyval.astNode)->add((yyvsp[-2].astNode));
(yyval.astNode)->add((yyvsp[0].astNode));
    }
#line 2648 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 503 "grammar.y" /* yacc.c:1646  */
    {
     id = id + 1 ;
     std::string text = "exp";
     text += std::to_string(id);
(yyval.astNode) = new EqualExpressionNode(text);
(yyval.astNode)->add((yyvsp[-2].astNode));
(yyval.astNode)->add((yyvsp[0].astNode));
     }
#line 2661 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 511 "grammar.y" /* yacc.c:1646  */
    {
       id = id + 1 ;
     std::string text = "exp";
     text += std::to_string(id);
(yyval.astNode) = new MulExpressionNode(text);
(yyval.astNode)->add((yyvsp[-2].astNode));
(yyval.astNode)->add((yyvsp[0].astNode));
     }
#line 2674 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 519 "grammar.y" /* yacc.c:1646  */
    {
     id = id + 1 ;
     std::string text = "exp";
     text += std::to_string(id);
(yyval.astNode) = new DivideExpressionNode(text);
(yyval.astNode)->add((yyvsp[-2].astNode));
(yyval.astNode)->add((yyvsp[0].astNode)); 
     }
#line 2687 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 527 "grammar.y" /* yacc.c:1646  */
    {
    id = id + 1 ;
     std::string text = "exp";
     text += std::to_string(id);
(yyval.astNode) = new LessthanAssignExpressionNode(text);
(yyval.astNode)->add((yyvsp[-3].astNode));
(yyval.astNode)->add((yyvsp[0].astNode)); 
     }
#line 2700 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 535 "grammar.y" /* yacc.c:1646  */
    { 
      id = id + 1 ;
     std::string text = "exp";
     text += std::to_string(id);
(yyval.astNode) = new GreaterthanAssignExpressionNode(text);
(yyval.astNode)->add((yyvsp[-3].astNode));
(yyval.astNode)->add((yyvsp[0].astNode)); 
    }
#line 2713 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 543 "grammar.y" /* yacc.c:1646  */
    { 
      id = id + 1 ;
     std::string text = "exp";
     text += std::to_string(id);
(yyval.astNode) = new LessthanExpressionNode(text);
(yyval.astNode)->add((yyvsp[-2].astNode));
(yyval.astNode)->add((yyvsp[0].astNode)); 
    }
#line 2726 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 551 "grammar.y" /* yacc.c:1646  */
    { 
      id = id + 1 ;
     std::string text = "exp";
     text += std::to_string(id);
(yyval.astNode) = new GreaterthanExpressionNode(text);
(yyval.astNode)->add((yyvsp[-2].astNode));
(yyval.astNode)->add((yyvsp[0].astNode));
    }
#line 2739 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 559 "grammar.y" /* yacc.c:1646  */
    {
      id = id + 1 ;
     std::string text = "exp";
     text += std::to_string(id);
(yyval.astNode) = new AndExpressionNode(text);
(yyval.astNode)->add((yyvsp[-2].astNode));
(yyval.astNode)->add((yyvsp[0].astNode)); 
     }
#line 2752 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 567 "grammar.y" /* yacc.c:1646  */
    { 
       id = id + 1 ;
     std::string text = "exp";
     text += std::to_string(id);
(yyval.astNode) = new OrExpressionNode(text);
(yyval.astNode)->add((yyvsp[-2].astNode));
(yyval.astNode)->add((yyvsp[0].astNode));
    }
#line 2765 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 575 "grammar.y" /* yacc.c:1646  */
    {
      id = id + 1 ;
     std::string text = "exp";
     text += std::to_string(id);
(yyval.astNode) = new UminusExpressionNode(text);
(yyval.astNode)->add((yyvsp[0].astNode));
    }
#line 2777 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 582 "grammar.y" /* yacc.c:1646  */
    { 
    id = id + 1 ;
     std::string text = "exp";
     text += std::to_string(id);
(yyval.astNode) = new LbracketExpressionRbracketNode(text);
(yyval.astNode)->add((yyvsp[-1].astNode));
    }
#line 2789 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 589 "grammar.y" /* yacc.c:1646  */
    { 
    id = id + 1 ;
     std::string text = "exp";
     text += std::to_string(id);
(yyval.astNode) = new MinusExpressionUminusNode(text);
(yyval.astNode)->add((yyvsp[0].astNode));
    }
#line 2801 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 596 "grammar.y" /* yacc.c:1646  */
    {         
        std::string nname = "idenq" + std::to_string(n_nodes);
        ++n_nodes;
        (yyvsp[0].astNode)->name=nname;
        (yyval.astNode) = (yyvsp[0].astNode);  }
#line 2811 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 601 "grammar.y" /* yacc.c:1646  */
    {
        std::string nname = "idenb" + std::to_string(n_nodes);
        ++n_nodes;
        (yyvsp[0].astNode)->name=nname;
        (yyval.astNode) = (yyvsp[0].astNode);
       }
#line 2822 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 607 "grammar.y" /* yacc.c:1646  */
    { 
        std::string nname = "idenc" + std::to_string(n_nodes);
        ++n_nodes;
        (yyvsp[0].astNode)->name=nname;
        (yyval.astNode) = (yyvsp[0].astNode);
      }
#line 2833 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 613 "grammar.y" /* yacc.c:1646  */
    {
        std::string nname = "idend" + std::to_string(n_nodes);
        ++n_nodes;
        (yyvsp[0].astNode)->name=nname;
        (yyval.astNode) = (yyvsp[0].astNode);
       }
#line 2844 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 619 "grammar.y" /* yacc.c:1646  */
    { 
        std::string nname = "idene" + std::to_string(n_nodes);
        ++n_nodes;
        (yyvsp[0].astNode)->name=nname;
        (yyval.astNode) = (yyvsp[0].astNode);
      }
#line 2855 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 627 "grammar.y" /* yacc.c:1646  */
    {

      std::string name = "func" + std::to_string(n_nodes);
      ++n_nodes;
      IdentifierNode* idFunc = dynamic_cast<IdentifierNode*>((yyvsp[-5].astNode));
      (yyval.astNode) = new FunctionNode(idFunc->value);
      (yyval.astNode)->add((yyvsp[-3].astNode));
      (yyval.astNode)->add((yyvsp[0].astNode));

            }
#line 2870 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 638 "grammar.y" /* yacc.c:1646  */
    { (yyval.astNode) = NULL;}
#line 2876 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 639 "grammar.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 2882 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 642 "grammar.y" /* yacc.c:1646  */
    { 
    id = id + 1 ;
     std::string text = "Args";
     text += std::to_string(id);
      (yyval.astNode) = new Args(text); (yyval.astNode)->add((yyvsp[0].astNode));}
#line 2892 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 647 "grammar.y" /* yacc.c:1646  */
    { (yyvsp[-2].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-2].astNode);  }
#line 2898 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 650 "grammar.y" /* yacc.c:1646  */
    {         
        std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        (yyvsp[0].astNode)->name=nname;
        (yyval.astNode) = (yyvsp[0].astNode);  }
#line 2908 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 655 "grammar.y" /* yacc.c:1646  */
    {
        std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        (yyvsp[0].astNode)->name=nname;
        (yyval.astNode) = (yyvsp[0].astNode);
       }
#line 2919 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 661 "grammar.y" /* yacc.c:1646  */
    { 
        std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        (yyvsp[0].astNode)->name=nname;
        (yyval.astNode) = (yyvsp[0].astNode);
      }
#line 2930 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 667 "grammar.y" /* yacc.c:1646  */
    {
        std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        (yyvsp[0].astNode)->name=nname;
        (yyval.astNode) = (yyvsp[0].astNode);
       }
#line 2941 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 673 "grammar.y" /* yacc.c:1646  */
    { 
        std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        (yyvsp[0].astNode)->name=nname;
        (yyval.astNode) = (yyvsp[0].astNode);
      }
#line 2952 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 682 "grammar.y" /* yacc.c:1646  */
    {
              id = id + 1 ;
       std::string text = "if_loops";
     text += std::to_string(id);
     std::string name = "if_loops_stm" + std::to_string(n_nodes);
      ++n_nodes;
      (yyval.astNode) = new IfNode(text);
      (yyval.astNode)->add((yyvsp[-3].astNode));
      (yyval.astNode)->add((yyvsp[-1].astNode));
      (yyval.astNode)->add((yyvsp[0].astNode));
   
            }
#line 2969 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 694 "grammar.y" /* yacc.c:1646  */
    { 
                id = id + 1 ;
       std::string text = "if_loops2";
     text += std::to_string(id);
     std::string name = "if_loops2_stm" + std::to_string(n_nodes);
      ++n_nodes;
      (yyval.astNode) = new IfNode(text);
      (yyval.astNode)->add((yyvsp[-3].astNode));
      (yyval.astNode)->add((yyvsp[-1].astNode));
      (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 2985 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 705 "grammar.y" /* yacc.c:1646  */
    {
            id = id + 1 ;
       std::string text = "if_loops3";
     text += std::to_string(id);
     std::string name = "if_loops3_stm" + std::to_string(n_nodes);
      ++n_nodes;
      (yyval.astNode) = new IfNode(text);
      (yyval.astNode)->add((yyvsp[-2].astNode));
      (yyval.astNode)->add((yyvsp[0].astNode));

             }
#line 3001 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 719 "grammar.y" /* yacc.c:1646  */
    {
                   id = id + 1 ;
              std::string text = "elif_loops";
             text += std::to_string(id);
            std::string name = "elif_loops_stm" + std::to_string(n_nodes);
      ++n_nodes;
      (yyval.astNode) = new ElIfNode(text);
      (yyval.astNode)->add((yyvsp[-2].astNode));
      (yyval.astNode)->add((yyvsp[0].astNode));

                }
#line 3017 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 730 "grammar.y" /* yacc.c:1646  */
    {
              id = id + 1 ;
              std::string text = "elif_loops2";
             text += std::to_string(id);
            std::string name = "elif_loops2_stm" + std::to_string(n_nodes);
      ++n_nodes;
      (yyval.astNode) = new ElIfNode(text);
      (yyval.astNode)->add((yyvsp[-3].astNode));
      (yyval.astNode)->add((yyvsp[-1].astNode));
      (yyval.astNode)->add((yyvsp[0].astNode));
              }
#line 3033 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 741 "grammar.y" /* yacc.c:1646  */
    {
              id = id + 1 ;
              std::string text = "elif_loops3";
             text += std::to_string(id);
            std::string name = "elif_loops3_stm" + std::to_string(n_nodes);
      ++n_nodes;
      (yyval.astNode) = new ElIfNode(text);
      (yyval.astNode)->add((yyvsp[-3].astNode));
      (yyval.astNode)->add((yyvsp[-1].astNode));
      (yyval.astNode)->add((yyvsp[0].astNode));
              }
#line 3049 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 754 "grammar.y" /* yacc.c:1646  */
    {
                          id = id + 1 ;
              std::string text = "else_loops";
             text += std::to_string(id);
            std::string name = "else_loops_stm" + std::to_string(n_nodes);
      ++n_nodes;
      (yyval.astNode) = new ElseNode(text);
      (yyval.astNode)->add((yyvsp[0].astNode));
                           }
#line 3063 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 765 "grammar.y" /* yacc.c:1646  */
    { 
              id = id + 1 ;
       std::string text = "if_loops_def";
     text += std::to_string(id);
     std::string name = "if_loops_def_stm" + std::to_string(n_nodes);
      ++n_nodes;
      (yyval.astNode) = new IfNode(text);
      (yyval.astNode)->add((yyvsp[-3].astNode));
      (yyval.astNode)->add((yyvsp[-1].astNode));
      (yyval.astNode)->add((yyvsp[0].astNode));
              }
#line 3079 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 776 "grammar.y" /* yacc.c:1646  */
    {
            id = id + 1 ;
       std::string text = "if_loops_def2";
     text += std::to_string(id);
     std::string name = "if_loops_def2_stm" + std::to_string(n_nodes);
      ++n_nodes;
      (yyval.astNode) = new IfNode(text);
      (yyval.astNode)->add((yyvsp[-3].astNode));
      (yyval.astNode)->add((yyvsp[-1].astNode));
      (yyval.astNode)->add((yyvsp[0].astNode));
             }
#line 3095 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 787 "grammar.y" /* yacc.c:1646  */
    { 
          id = id + 1 ;
       std::string text = "if_loops_def3";
     text += std::to_string(id);
     std::string name = "if_loops_def3_stm" + std::to_string(n_nodes);
      ++n_nodes;
      (yyval.astNode) = new IfNode(text);
      (yyval.astNode)->add((yyvsp[-2].astNode));
      (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 3110 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 800 "grammar.y" /* yacc.c:1646  */
    {
                   id = id + 1 ;
       std::string text = "elif_loops_def";
     text += std::to_string(id);
     std::string name = "elif_loops_def_stm" + std::to_string(n_nodes);
      ++n_nodes;
      (yyval.astNode) = new ElIfNode(text);
      (yyval.astNode)->add((yyvsp[-2].astNode));
      (yyval.astNode)->add((yyvsp[0].astNode));
              }
#line 3125 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 810 "grammar.y" /* yacc.c:1646  */
    {
              id = id + 1 ;
       std::string text = "elif_loops_def2";
     text += std::to_string(id);
     std::string name = "elif_loops_def2_stm" + std::to_string(n_nodes);
      ++n_nodes;
      (yyval.astNode) = new ElIfNode(text);
      (yyval.astNode)->add((yyvsp[-3].astNode));
      (yyval.astNode)->add((yyvsp[-1].astNode));
      (yyval.astNode)->add((yyvsp[0].astNode));
              }
#line 3141 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 821 "grammar.y" /* yacc.c:1646  */
    {
              id = id + 1 ;
       std::string text = "elif_loops_def3";
     text += std::to_string(id);
     std::string name = "elif_loops_def3_stm" + std::to_string(n_nodes);
      ++n_nodes;
      (yyval.astNode) = new ElIfNode(text);
      (yyval.astNode)->add((yyvsp[-3].astNode));
      (yyval.astNode)->add((yyvsp[-1].astNode));
      (yyval.astNode)->add((yyvsp[0].astNode));
              }
#line 3157 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 834 "grammar.y" /* yacc.c:1646  */
    {
    id = id + 1 ;
       std::string text = "else_loops_def";
     text += std::to_string(id);
     std::string name = "else_loops_def_stm" + std::to_string(n_nodes);
      ++n_nodes;
      (yyval.astNode) = new ElseNode(text);
      (yyval.astNode)->add((yyvsp[0].astNode));

}
#line 3172 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 848 "grammar.y" /* yacc.c:1646  */
    { 
             id = id + 1 ;
       std::string text = "ifcode";
     text += std::to_string(id);
     std::string name = "ifcode_stm" + std::to_string(n_nodes);
      ++n_nodes;
      (yyval.astNode) = new IfNode(text);
      (yyval.astNode)->add((yyvsp[-3].astNode));
      (yyval.astNode)->add((yyvsp[-1].astNode));
      (yyval.astNode)->add((yyvsp[0].astNode));
}
#line 3188 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 859 "grammar.y" /* yacc.c:1646  */
    {
         id = id + 1 ;
       std::string text = "ifcode2";
     text += std::to_string(id);
     std::string name = "ifcode2_stm" + std::to_string(n_nodes);
      ++n_nodes;
      (yyval.astNode) = new IfNode(text);
      (yyval.astNode)->add((yyvsp[-3].astNode));
      (yyval.astNode)->add((yyvsp[-1].astNode));
      (yyval.astNode)->add((yyvsp[0].astNode));
    }
#line 3204 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 870 "grammar.y" /* yacc.c:1646  */
    { 
       id = id + 1 ;
       std::string text = "ifcode3";
     text += std::to_string(id);
     std::string name = "ifcode3_stm" + std::to_string(n_nodes);
      ++n_nodes;
      (yyval.astNode) = new IfNode(text);
      (yyval.astNode)->add((yyvsp[-2].astNode));
      (yyval.astNode)->add((yyvsp[0].astNode));
   }
#line 3219 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 883 "grammar.y" /* yacc.c:1646  */
    {
               id = id + 1 ;
       std::string text = "elifcode";
     text += std::to_string(id);
     std::string name = "elifcode_stm" + std::to_string(n_nodes);
      ++n_nodes;
      (yyval.astNode) = new ElIfNode(text);
      (yyval.astNode)->add((yyvsp[-2].astNode));
      (yyval.astNode)->add((yyvsp[0].astNode));
               }
#line 3234 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 893 "grammar.y" /* yacc.c:1646  */
    {
              id = id + 1 ;
       std::string text = "elifcode2";
     text += std::to_string(id);
     std::string name = "elifcode2_stm" + std::to_string(n_nodes);
      ++n_nodes;
      (yyval.astNode) = new ElIfNode(text);
      (yyval.astNode)->add((yyvsp[-3].astNode));
      (yyval.astNode)->add((yyvsp[-1].astNode));
      (yyval.astNode)->add((yyvsp[0].astNode));
              }
#line 3250 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 904 "grammar.y" /* yacc.c:1646  */
    {
               id = id + 1 ;
       std::string text = "elifcode3";
     text += std::to_string(id);
     std::string name = "elifcode3_stm" + std::to_string(n_nodes);
      ++n_nodes;
      (yyval.astNode) = new ElIfNode(text);
      (yyval.astNode)->add((yyvsp[-3].astNode));
      (yyval.astNode)->add((yyvsp[-1].astNode));
      (yyval.astNode)->add((yyvsp[0].astNode));
              }
#line 3266 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 917 "grammar.y" /* yacc.c:1646  */
    {
               id = id + 1 ;
       std::string text = "elsecode";
     text += std::to_string(id);
     std::string name = "elsecode_stm" + std::to_string(n_nodes);
      ++n_nodes;
      (yyval.astNode) = new ElseNode(text);
      (yyval.astNode)->add((yyvsp[0].astNode));
}
#line 3280 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 927 "grammar.y" /* yacc.c:1646  */
    {
           id = id + 1 ;
       std::string text = "ifdef";
     text += std::to_string(id);
     std::string name = "ifdef_stm" + std::to_string(n_nodes);
      ++n_nodes;
      (yyval.astNode) = new IfNode(text);
      (yyval.astNode)->add((yyvsp[-3].astNode));
      (yyval.astNode)->add((yyvsp[-1].astNode));
      (yyval.astNode)->add((yyvsp[0].astNode));
  }
#line 3296 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 938 "grammar.y" /* yacc.c:1646  */
    {
          id = id + 1 ;
       std::string text = "ifdef2";
     text += std::to_string(id);
     std::string name = "ifdef2_stm" + std::to_string(n_nodes);
      ++n_nodes;
      (yyval.astNode) = new IfNode(text);
      (yyval.astNode)->add((yyvsp[-3].astNode));
      (yyval.astNode)->add((yyvsp[-1].astNode));
      (yyval.astNode)->add((yyvsp[0].astNode));
    }
#line 3312 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 949 "grammar.y" /* yacc.c:1646  */
    {
         id = id + 1 ;
       std::string text = "ifdef3";
     text += std::to_string(id);
     std::string name = "ifdef3_stm" + std::to_string(n_nodes);
      ++n_nodes;
      (yyval.astNode) = new IfNode(text);
      (yyval.astNode)->add((yyvsp[-2].astNode));
      (yyval.astNode)->add((yyvsp[0].astNode));
    }
#line 3327 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 961 "grammar.y" /* yacc.c:1646  */
    {
               id = id + 1 ;
       std::string text = "elifdef";
     text += std::to_string(id);
     std::string name = "elifdef_stm" + std::to_string(n_nodes);
      ++n_nodes;
      (yyval.astNode) = new ElIfNode(text);
      (yyval.astNode)->add((yyvsp[-2].astNode));
      (yyval.astNode)->add((yyvsp[0].astNode));
              }
#line 3342 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 971 "grammar.y" /* yacc.c:1646  */
    {
               id = id + 1 ;
       std::string text = "elifdef2";
     text += std::to_string(id);
     std::string name = "elifdef2_stm" + std::to_string(n_nodes);
      ++n_nodes;
      (yyval.astNode) = new ElIfNode(text);
      (yyval.astNode)->add((yyvsp[-3].astNode));
      (yyval.astNode)->add((yyvsp[-1].astNode));
      (yyval.astNode)->add((yyvsp[0].astNode));
              }
#line 3358 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 982 "grammar.y" /* yacc.c:1646  */
    {
              id = id + 1 ;
       std::string text = "elifdef3";
     text += std::to_string(id);
     std::string name = "elifdef3_stm" + std::to_string(n_nodes);
      ++n_nodes;
      (yyval.astNode) = new ElIfNode(text);
      (yyval.astNode)->add((yyvsp[-3].astNode));
      (yyval.astNode)->add((yyvsp[-1].astNode));
      (yyval.astNode)->add((yyvsp[0].astNode));
              }
#line 3374 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 995 "grammar.y" /* yacc.c:1646  */
    {
    id = id + 1 ;
       std::string text = "elsedef";
     text += std::to_string(id);
     std::string name = "elsedef_stm" + std::to_string(n_nodes);
      ++n_nodes;
      (yyval.astNode) = new ElseNode(text);
      (yyval.astNode)->add((yyvsp[0].astNode));
}
#line 3388 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 1006 "grammar.y" /* yacc.c:1646  */
    {
         id = id + 1 ;
     std::string text = "whileloop";
     text += std::to_string(id);

      std::string name = "while" + std::to_string(n_nodes);
      ++n_nodes;

      (yyval.astNode) = new WhileNode(text);

      (yyval.astNode)->add((yyvsp[-2].astNode));
      (yyval.astNode)->add((yyvsp[0].astNode));
          }
#line 3406 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 1020 "grammar.y" /* yacc.c:1646  */
    {
        id = id + 1 ;
     std::string text = "whileloopdef";
     text += std::to_string(id);

      std::string name = "whiledef" + std::to_string(n_nodes);
      ++n_nodes;

      (yyval.astNode) = new WhileNode(text);
      (yyval.astNode)->add((yyvsp[-2].astNode));
      (yyval.astNode)->add((yyvsp[0].astNode));
          }
#line 3423 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 1033 "grammar.y" /* yacc.c:1646  */
    {
    id = id + 1 ;
     std::string text = "While_Args";
     text += std::to_string(id);
      (yyval.astNode) = new Args(text); 
      (yyval.astNode)->add((yyvsp[0].astNode));
}
#line 3435 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 1042 "grammar.y" /* yacc.c:1646  */
    {
    std::string name = "for" + std::to_string(n_nodes);
      ++n_nodes;
      IdentifierNode* forindix = dynamic_cast<IdentifierNode*>((yyvsp[-4].astNode));
      (yyval.astNode) = new ForNode(forindix->value);
      (yyval.astNode)->add((yyvsp[-2].astNode));
      (yyval.astNode)->add((yyvsp[0].astNode));
}
#line 3448 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 1051 "grammar.y" /* yacc.c:1646  */
    {

     std::string name = "for_def" + std::to_string(n_nodes);
      ++n_nodes;
      IdentifierNode* for_defindix = dynamic_cast<IdentifierNode*>((yyvsp[-4].astNode));
      (yyval.astNode) = new ForNode(for_defindix->value);
      (yyval.astNode)->add((yyvsp[-2].astNode));
      (yyval.astNode)->add((yyvsp[0].astNode));
    
     }
#line 3463 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 1064 "grammar.y" /* yacc.c:1646  */
    {
     id = id + 1 ;
     std::string text = "list_Args";
     text += std::to_string(id);
      (yyval.astNode) = new Args(text); 

      std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        (yyvsp[0].astNode)->name=nname;
        (yyval.astNode) = (yyvsp[0].astNode);
    
    }
#line 3480 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 1076 "grammar.y" /* yacc.c:1646  */
    {
    id = id + 1 ;
     std::string text = "list_Args";
     text += std::to_string(id);
      (yyval.astNode) = new Args(text); 
      
      std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        (yyvsp[0].astNode)->name=nname;
        (yyval.astNode) = (yyvsp[0].astNode);
    }
#line 3496 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 1087 "grammar.y" /* yacc.c:1646  */
    { (yyval.astNode) = (yyvsp[0].astNode); }
#line 3502 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 1088 "grammar.y" /* yacc.c:1646  */
    {}
#line 3508 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 1091 "grammar.y" /* yacc.c:1646  */
    {
        id = id + 1 ;
       std::string text = "RangeStatements";
     text += std::to_string(id);

    (yyval.astNode) = new RangetatementNode(text); 
    std::string nname = "range" + std::to_string(n_nodes);
    ++n_nodes;
    (yyvsp[-3].astNode)->name=nname;
    (yyval.astNode)->add((yyvsp[-3].astNode));
    (yyval.astNode)->add((yyvsp[-1].astNode));
}
#line 3525 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 1104 "grammar.y" /* yacc.c:1646  */
    {(yyvsp[-2].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-2].astNode);  }
#line 3531 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 1105 "grammar.y" /* yacc.c:1646  */
    {
         id = id + 1 ;
       std::string text = "ArgsRange";
     text += std::to_string(id);
         (yyval.astNode) = new Args(text); (yyval.astNode)->add((yyvsp[0].astNode));
         }
#line 3542 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 1114 "grammar.y" /* yacc.c:1646  */
    {
      id = id + 1 ;
       std::string text = "tryEx";
     text += std::to_string(id);
     std::string name = "try_stm" + std::to_string(n_nodes);
      ++n_nodes;
      (yyval.astNode) = new TryNode(text);
      (yyval.astNode)->add((yyvsp[-1].astNode));
    }
#line 3556 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 1125 "grammar.y" /* yacc.c:1646  */
    {
          id = id + 1 ;
       std::string text = "except";
     text += std::to_string(id);
     std::string name = "except_stm" + std::to_string(n_nodes);
      ++n_nodes;
      (yyval.astNode) = new ExceptNode(text);
      (yyval.astNode)->add((yyvsp[-1].astNode));
}
#line 3570 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 1136 "grammar.y" /* yacc.c:1646  */
    {
         id = id + 1 ;
       std::string text = "finallytry";
     text += std::to_string(id);
     std::string name = "finally_stm" + std::to_string(n_nodes);
      ++n_nodes;
      (yyval.astNode) = new FinallyNode(text);
      (yyval.astNode)->add((yyvsp[-1].astNode));
}
#line 3584 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 1146 "grammar.y" /* yacc.c:1646  */
    {
          id = id + 1 ;
       std::string text = "elsetry";
     text += std::to_string(id);
     std::string name = "elsetry_stm" + std::to_string(n_nodes);
      ++n_nodes;
      (yyval.astNode) = new ElseTryNode(text);
      (yyval.astNode)->add((yyvsp[-1].astNode));
}
#line 3598 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 1156 "grammar.y" /* yacc.c:1646  */
    {
              id = id + 1 ;
       std::string text = "except_name1";
     text += std::to_string(id);
     std::string name = "except_name1_stm" + std::to_string(n_nodes);
      ++n_nodes;
      (yyval.astNode) = new ExceptNode(text);
      (yyval.astNode)->add((yyvsp[-5].astNode));
      (yyval.astNode)->add((yyvsp[-2].astNode));
            }
#line 3613 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 1166 "grammar.y" /* yacc.c:1646  */
    {
            id = id + 1 ;
       std::string text = "except_name2";
     text += std::to_string(id);
     std::string name = "except_name2_stm" + std::to_string(n_nodes);
      ++n_nodes;
      (yyval.astNode) = new ExceptNode(text);
      (yyval.astNode)->add((yyvsp[-7].astNode));
      std::string asexceptname = "asinexcept" + std::to_string(n_nodes);
    ++n_nodes;
    (yyvsp[-6].astNode)->name=asexceptname;
    (yyval.astNode)->add((yyvsp[-6].astNode));
    (yyval.astNode)->add((yyvsp[-5].astNode));

      (yyval.astNode)->add((yyvsp[-1].astNode));

            }
#line 3635 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 1184 "grammar.y" /* yacc.c:1646  */
    {
             id = id + 1 ;
           std::string text = "TryStatment";
          text += std::to_string(id);
          std::string name = "TryStatment_stm" + std::to_string(n_nodes);
          ++n_nodes;
          (yyval.astNode) = new TryStatmentNode(text);
          (yyval.astNode)->add((yyvsp[-1].astNode));
          (yyval.astNode)->add((yyvsp[0].astNode));
              }
#line 3650 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 1194 "grammar.y" /* yacc.c:1646  */
    {
             id = id + 1 ;
           std::string text = "TryStatment1";
          text += std::to_string(id);
          std::string name = "TryStatment1_stm" + std::to_string(n_nodes);
          ++n_nodes;
          (yyval.astNode) = new TryStatmentNode(text);
          (yyval.astNode)->add((yyvsp[-2].astNode));
          (yyval.astNode)->add((yyvsp[-1].astNode));
          (yyval.astNode)->add((yyvsp[0].astNode));
              }
#line 3666 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 1205 "grammar.y" /* yacc.c:1646  */
    {
              id = id + 1 ;
           std::string text = "TryStatment2";
          text += std::to_string(id);
          std::string name = "TryStatment2_stm" + std::to_string(n_nodes);
          ++n_nodes;
          (yyval.astNode) = new TryStatmentNode(text);
          (yyval.astNode)->add((yyvsp[-1].astNode));
          (yyval.astNode)->add((yyvsp[0].astNode));
              }
#line 3681 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 1215 "grammar.y" /* yacc.c:1646  */
    {
              id = id + 1 ;
           std::string text = "TryStatment3";
          text += std::to_string(id);
          std::string name = "TryStatment3_stm" + std::to_string(n_nodes);
          ++n_nodes;
          (yyval.astNode) = new TryStatmentNode(text);
          (yyval.astNode)->add((yyvsp[-2].astNode));
          (yyval.astNode)->add((yyvsp[-1].astNode));
          (yyval.astNode)->add((yyvsp[0].astNode));
              }
#line 3697 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 1226 "grammar.y" /* yacc.c:1646  */
    {
              id = id + 1 ;
           std::string text = "TryStatment4";
          text += std::to_string(id);
          std::string name = "TryStatment4_stm" + std::to_string(n_nodes);
          ++n_nodes;
          (yyval.astNode) = new TryStatmentNode(text);
          (yyval.astNode)->add((yyvsp[-2].astNode));
          (yyval.astNode)->add((yyvsp[-1].astNode));
          (yyval.astNode)->add((yyvsp[0].astNode));
              }
#line 3713 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 1237 "grammar.y" /* yacc.c:1646  */
    {
              id = id + 1 ;
           std::string text = "TryStatment5";
          text += std::to_string(id);
          std::string name = "TryStatment5_stm" + std::to_string(n_nodes);
          ++n_nodes;
          (yyval.astNode) = new TryStatmentNode(text);
          (yyval.astNode)->add((yyvsp[-2].astNode));
          (yyval.astNode)->add((yyvsp[-1].astNode));
          (yyval.astNode)->add((yyvsp[0].astNode));
              }
#line 3729 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 1248 "grammar.y" /* yacc.c:1646  */
    {
              id = id + 1 ;
           std::string text = "TryStatment6";
          text += std::to_string(id);
          std::string name = "TryStatment6_stm" + std::to_string(n_nodes);
          ++n_nodes;
          (yyval.astNode) = new TryStatmentNode(text);
          (yyval.astNode)->add((yyvsp[-3].astNode));
          (yyval.astNode)->add((yyvsp[-2].astNode));
          (yyval.astNode)->add((yyvsp[-1].astNode));
          (yyval.astNode)->add((yyvsp[0].astNode));
              }
#line 3746 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 1260 "grammar.y" /* yacc.c:1646  */
    {
              id = id + 1 ;
           std::string text = "TryStatment7";
          text += std::to_string(id);
          std::string name = "TryStatment7_stm" + std::to_string(n_nodes);
          ++n_nodes;
          (yyval.astNode) = new TryStatmentNode(text);
          (yyval.astNode)->add((yyvsp[-2].astNode));
          (yyval.astNode)->add((yyvsp[-1].astNode));
          (yyval.astNode)->add((yyvsp[0].astNode));
              }
#line 3762 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 1271 "grammar.y" /* yacc.c:1646  */
    {
              id = id + 1 ;
           std::string text = "TryStatment8";
          text += std::to_string(id);
          std::string name = "TryStatment8_stm" + std::to_string(n_nodes);
          ++n_nodes;
          (yyval.astNode) = new TryStatmentNode(text);
          (yyval.astNode)->add((yyvsp[-3].astNode));
          (yyval.astNode)->add((yyvsp[-2].astNode));
          (yyval.astNode)->add((yyvsp[-1].astNode));
          (yyval.astNode)->add((yyvsp[0].astNode));
              }
#line 3779 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1283 "grammar.y" /* yacc.c:1646  */
    {
              id = id + 1 ;
           std::string text = "TryStatment9";
          text += std::to_string(id);
          std::string name = "TryStatment9_stm" + std::to_string(n_nodes);
          ++n_nodes;
          (yyval.astNode) = new TryStatmentNode(text);
          (yyval.astNode)->add((yyvsp[-3].astNode));
          (yyval.astNode)->add((yyvsp[-2].astNode));
          (yyval.astNode)->add((yyvsp[-1].astNode));
          (yyval.astNode)->add((yyvsp[0].astNode));
              }
#line 3796 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1298 "grammar.y" /* yacc.c:1646  */
    {
id = id + 1 ;
std::string text = "PrintStatements";
text += std::to_string(id);

std::string name = "print" + std::to_string(n_nodes);
      ++n_nodes;
      (yyval.astNode) = new PrintStatementNode(text);
    (yyval.astNode)->add((yyvsp[-1].astNode));


            }
#line 3813 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1311 "grammar.y" /* yacc.c:1646  */
    { (yyvsp[-2].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-2].astNode);  }
#line 3819 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1312 "grammar.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode);  }
#line 3825 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1313 "grammar.y" /* yacc.c:1646  */
    { 
     id = id + 1 ;
     std::string text = "print_args";
     text += std::to_string(id);
     (yyval.astNode) = new Args(text); (yyval.astNode)->add((yyvsp[0].astNode)); }
#line 3835 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1320 "grammar.y" /* yacc.c:1646  */
    {         
        std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        (yyvsp[0].astNode)->name=nname;
        (yyval.astNode) = (yyvsp[0].astNode);  }
#line 3845 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1325 "grammar.y" /* yacc.c:1646  */
    {
        std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        (yyvsp[0].astNode)->name=nname;
        (yyval.astNode) = (yyvsp[0].astNode);
       }
#line 3856 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1331 "grammar.y" /* yacc.c:1646  */
    {
    std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        (yyvsp[0].astNode)->name=nname;
        (yyval.astNode) = (yyvsp[0].astNode);
    }
#line 3867 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1340 "grammar.y" /* yacc.c:1646  */
    {
     id = id + 1 ;
     std::string text = "InputStatements";
     text += std::to_string(id);

      std::string name = "Input" + std::to_string(n_nodes);
      ++n_nodes;
      (yyval.astNode) = new InputStatementNode(text);
    (yyval.astNode)->add((yyvsp[-1].astNode));
            }
#line 3882 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1351 "grammar.y" /* yacc.c:1646  */
    { (yyvsp[-2].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-2].astNode);  }
#line 3888 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1352 "grammar.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode);  }
#line 3894 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1353 "grammar.y" /* yacc.c:1646  */
    { id = id + 1 ;
     std::string text = "input_args";
     text += std::to_string(id);
     (yyval.astNode) = new Args(text); (yyval.astNode)->add((yyvsp[0].astNode)); }
#line 3903 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1359 "grammar.y" /* yacc.c:1646  */
    {         
        std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        (yyvsp[0].astNode)->name=nname;
        (yyval.astNode) = (yyvsp[0].astNode);  }
#line 3913 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1364 "grammar.y" /* yacc.c:1646  */
    {
        std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        (yyvsp[0].astNode)->name=nname;
        (yyval.astNode) = (yyvsp[0].astNode);
       }
#line 3924 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1370 "grammar.y" /* yacc.c:1646  */
    {
    std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        (yyvsp[0].astNode)->name=nname;
        (yyval.astNode) = (yyvsp[0].astNode);
    }
#line 3935 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1381 "grammar.y" /* yacc.c:1646  */
    {

    id = id + 1 ;
    std::string text = "listnode";
    text += std::to_string(id);

    (yyval.astNode) = new ListNode(text); 
    
    (yyval.astNode)->add((yyvsp[-1].astNode));
         }
#line 3950 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1392 "grammar.y" /* yacc.c:1646  */
    { (yyvsp[-2].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-2].astNode); }
#line 3956 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1393 "grammar.y" /* yacc.c:1646  */
    { (yyvsp[-3].astNode)->add((yyvsp[-1].astNode)); (yyval.astNode) = (yyvsp[-3].astNode);}
#line 3962 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1394 "grammar.y" /* yacc.c:1646  */
    { (yyvsp[-3].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-3].astNode); }
#line 3968 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1395 "grammar.y" /* yacc.c:1646  */
    {
      id = id + 1 ;
     std::string text = "Argsforlist";
     text += std::to_string(id);
      (yyval.astNode) = new Args(text); (yyval.astNode)->add((yyvsp[0].astNode));

      }
#line 3980 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1402 "grammar.y" /* yacc.c:1646  */
    {}
#line 3986 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1405 "grammar.y" /* yacc.c:1646  */
    {

     std::string name = "class1" + std::to_string(n_nodes);
      ++n_nodes;
      IdentifierNode* class_indix = dynamic_cast<IdentifierNode*>((yyvsp[-2].astNode));
      (yyval.astNode) = new ClassNode(class_indix->value);
      (yyval.astNode)->add((yyvsp[0].astNode));
       }
#line 3999 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1413 "grammar.y" /* yacc.c:1646  */
    {

     std::string name = "class2" + std::to_string(n_nodes);
      ++n_nodes;
      IdentifierNode* class_indix2 = dynamic_cast<IdentifierNode*>((yyvsp[-5].astNode));
      (yyval.astNode) = new ClassNode(class_indix2->value);
      (yyval.astNode)->add((yyvsp[-3].astNode));
      (yyval.astNode)->add((yyvsp[0].astNode));
       }
#line 4013 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1423 "grammar.y" /* yacc.c:1646  */
    { (yyvsp[-2].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-2].astNode); }
#line 4019 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1424 "grammar.y" /* yacc.c:1646  */
    {
           id = id + 1 ;
     std::string text = "Argsforclass";
     text += std::to_string(id);
      (yyval.astNode) = new Args(text); (yyval.astNode)->add((yyvsp[0].astNode));
          }
#line 4030 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1432 "grammar.y" /* yacc.c:1646  */
    {
      id = id + 1 ;
     std::string text = "classcodehere";
     text += std::to_string(id);

     std::string name = "code" + std::to_string(n_nodes);
     ++n_nodes;
      (yyval.astNode) = new Code(text);
      (yyval.astNode)->add((yyvsp[-1].astNode));
       }
#line 4045 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1443 "grammar.y" /* yacc.c:1646  */
    {  (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode); }
#line 4051 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1444 "grammar.y" /* yacc.c:1646  */
    {  (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode); }
#line 4057 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1445 "grammar.y" /* yacc.c:1646  */
    {  (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode); }
#line 4063 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1446 "grammar.y" /* yacc.c:1646  */
    { 
       id = id + 1 ;
     std::string text = "MYCodeClassStatements";
     text += std::to_string(id);
         
        (yyval.astNode) = new MYCodeClass(text); (yyval.astNode)->add((yyvsp[0].astNode));  }
#line 4074 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1452 "grammar.y" /* yacc.c:1646  */
    {(yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode); }
#line 4080 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1453 "grammar.y" /* yacc.c:1646  */
    {  (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode); }
#line 4086 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1454 "grammar.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode); }
#line 4092 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1455 "grammar.y" /* yacc.c:1646  */
    { 
       id = id + 1 ;
     std::string text = "MYCodeClassStatements";
     text += std::to_string(id);
         
        (yyval.astNode) = new MYCodeClass(text); (yyval.astNode)->add((yyvsp[0].astNode));
         }
#line 4104 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1462 "grammar.y" /* yacc.c:1646  */
    {
    id = id + 1 ;
     std::string text = "MYCodeClassStatements";
     text += std::to_string(id);
         
        (yyval.astNode) = new MYCodeClass(text); (yyval.astNode)->add((yyvsp[0].astNode));

       }
#line 4117 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1470 "grammar.y" /* yacc.c:1646  */
    {
        id = id + 1 ;
     std::string text = "MYCodeClassStatements";
     text += std::to_string(id);
         
        (yyval.astNode) = new MYCodeClass(text); (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 4129 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1477 "grammar.y" /* yacc.c:1646  */
    { (yyvsp[-1].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-1].astNode);}
#line 4135 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1478 "grammar.y" /* yacc.c:1646  */
    {
        id = id + 1 ;
     std::string text = "MYCodeClassStatements";
     text += std::to_string(id);
         
        (yyval.astNode) = new MYCodeClass(text); (yyval.astNode)->add((yyvsp[0].astNode));

        }
#line 4148 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1486 "grammar.y" /* yacc.c:1646  */
    {
      id = id + 1 ;
     std::string text = "MYCodeClassStatements";
     text += std::to_string(id);
         
        (yyval.astNode) = new MYCodeClass(text); (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 4160 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1493 "grammar.y" /* yacc.c:1646  */
    { 
       id = id + 1 ;
     std::string text = "MYCodeClassStatements";
     text += std::to_string(id);
         
        (yyval.astNode) = new MYCodeClass(text); (yyval.astNode)->add((yyvsp[0].astNode));
       }
#line 4172 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1503 "grammar.y" /* yacc.c:1646  */
    { 
       id = id + 1 ;
       std::string text = "ImportStatements";
     text += std::to_string(id);

    (yyval.astNode) = new ImportStatementNode(text); 
    std::string nname = "import2" + std::to_string(n_nodes);
    ++n_nodes;
    (yyvsp[-2].astNode)->name=nname;
    (yyval.astNode)->add((yyvsp[-2].astNode));
    (yyval.astNode)->add((yyvsp[-1].astNode));
       }
#line 4189 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1515 "grammar.y" /* yacc.c:1646  */
    {
      id = id + 1 ;
    std::string text = "ImportStatements";
     text += std::to_string(id);

    (yyval.astNode) = new ImportStatementNode(text); 
    std::string nname = "import3" + std::to_string(n_nodes);
    ++n_nodes;
    (yyvsp[-4].astNode)->name=nname;
    (yyval.astNode)->add((yyvsp[-4].astNode));
    (yyval.astNode)->add((yyvsp[-3].astNode));
    std::string asname = "as" + std::to_string(n_nodes);
    ++n_nodes;
    (yyvsp[-2].astNode)->name=asname;
    (yyval.astNode)->add((yyvsp[-2].astNode));
    (yyval.astNode)->add((yyvsp[-1].astNode));
        }
#line 4211 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1534 "grammar.y" /* yacc.c:1646  */
    {
    id = id + 1 ;
    std::string text = "FromStatements";
     text += std::to_string(id);

    (yyval.astNode) = new FromStatementNode(text); 
    std::string nname = "from" + std::to_string(n_nodes);
    ++n_nodes;
    (yyvsp[-4].astNode)->name=nname;
    (yyval.astNode)->add((yyvsp[-4].astNode));
    (yyval.astNode)->add((yyvsp[-3].astNode));
    std::string importname = "importname" + std::to_string(n_nodes);
    ++n_nodes;
    (yyvsp[-2].astNode)->name=importname;
    (yyval.astNode)->add((yyvsp[-2].astNode));
    (yyval.astNode)->add((yyvsp[-1].astNode));
}
#line 4233 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1552 "grammar.y" /* yacc.c:1646  */
    {
       id = id + 1 ;
       std::string text = "Argsimport";
     text += std::to_string(id);
         (yyval.astNode) = new Args(text); (yyval.astNode)->add((yyvsp[0].astNode));
    
}
#line 4245 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1559 "grammar.y" /* yacc.c:1646  */
    {(yyvsp[-2].astNode)->add((yyvsp[0].astNode)); (yyval.astNode) = (yyvsp[-2].astNode);}
#line 4251 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1562 "grammar.y" /* yacc.c:1646  */
    {
    id = id + 1 ;
     std::string text = "import_Args";
     text += std::to_string(id);
      (yyval.astNode) = new Args(text); 

      std::string nname = "iden" + std::to_string(n_nodes);
        ++n_nodes;
        (yyvsp[0].astNode)->name=nname;
        (yyval.astNode) = (yyvsp[0].astNode);
}
#line 4267 "grammar.cpp" /* yacc.c:1646  */
    break;


#line 4271 "grammar.cpp" /* yacc.c:1646  */
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
#line 1574 "grammar.y" /* yacc.c:1906  */




int main(int argc, char **argv)
{
 /*success("This is a valid python expression");
 expression : NUMBER  { }
            ;
                : expression '+' expression     { }
    | expression '-' expression     { }
    | expression '*' expression     { }
    | expression '/' expression     { }*/
     if (argc > 1){
        for(int i=0;i<argc;i++)
            // printf("value of argv[%d] = %s\n\n",i,argv[i]);
            yyin=fopen(argv[1],"r");
      }
      else
        yyin=stdin;
      
      yyparse();

      // AST is constructed, you can print it now
      if (root != NULL) {
            AST ast(root);
            ast.Print();
      }
      return 0;
}


void yyerror(const char* s) {
    std::cerr << "Parser error: " << s << std::endl;
}
