/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    IDENTIFIER = 258,
    STRING = 259,
    INTEGER = 260,
    CHARACTER = 261,
    REAL = 262,
    BREAK = 263,
    CASE = 264,
    CHAR = 265,
    DEFAULT = 266,
    ELSE = 267,
    FLOAT = 268,
    FOR = 269,
    IF = 270,
    INT = 271,
    RETURN = 272,
    SWITCH = 273,
    VOID = 274,
    WHILE = 275,
    ERROR = 276,
    ASGNOP = 277,
    ADDORIGIN = 278,
    SUBORIGIN = 279,
    MULORIGIN = 280,
    DIVORIGIN = 281,
    MODORIGIN = 282,
    OR = 283,
    AND = 284,
    RIGHTBIG = 285,
    LEFTBIG = 286,
    RIGHTEQBIG = 287,
    LEFTEQBIG = 288,
    EQUAL = 289,
    NEQUAL = 290,
    ADDOP = 291,
    SUBOP = 292,
    MULOP = 293,
    DIVOP = 294,
    MODOP = 295,
    INCRE = 296,
    DECRE = 297
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define STRING 259
#define INTEGER 260
#define CHARACTER 261
#define REAL 262
#define BREAK 263
#define CASE 264
#define CHAR 265
#define DEFAULT 266
#define ELSE 267
#define FLOAT 268
#define FOR 269
#define IF 270
#define INT 271
#define RETURN 272
#define SWITCH 273
#define VOID 274
#define WHILE 275
#define ERROR 276
#define ASGNOP 277
#define ADDORIGIN 278
#define SUBORIGIN 279
#define MULORIGIN 280
#define DIVORIGIN 281
#define MODORIGIN 282
#define OR 283
#define AND 284
#define RIGHTBIG 285
#define LEFTBIG 286
#define RIGHTEQBIG 287
#define LEFTEQBIG 288
#define EQUAL 289
#define NEQUAL 290
#define ADDOP 291
#define SUBOP 292
#define MULOP 293
#define DIVOP 294
#define MODOP 295
#define INCRE 296
#define DECRE 297

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 7 "bar.y" /* yacc.c:1909  */

	int iVal;
	float rVal;
	char* sVal;

#line 144 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
