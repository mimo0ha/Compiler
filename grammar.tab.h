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




#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;



