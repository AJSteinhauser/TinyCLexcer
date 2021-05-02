/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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
/* Line 1529 of yacc.c.  */
#line 129 "parser.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

