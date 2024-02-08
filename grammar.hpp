/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 1 "grammar.y" /* yacc.c:1909  */

      #include "python_ast_node.hpp"
      #include <iostream>
      #include <string>

#line 50 "grammar.hpp" /* yacc.c:1909  */

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
#line 6 "grammar.y" /* yacc.c:1909  */

    AstNode* astNode;
        IdentifierNode* idNode;
    int d;

#line 128 "grammar.hpp" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_GRAMMAR_HPP_INCLUDED  */
