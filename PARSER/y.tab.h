/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
    INT = 258,
    CHAR = 259,
    FLOAT = 260,
    DOUBLE = 261,
    STRUCT = 262,
    UNION = 263,
    RETURN = 264,
    MAIN = 265,
    VOID = 266,
    WHILE = 267,
    DO = 268,
    identifier = 269,
    integer_constant = 270,
    string_constant = 271,
    float_constant = 272,
    character_constant = 273,
    leftshift_assignment_operator = 274,
    rightshift_assignment_operator = 275,
    XOR_assignment_operator = 276,
    OR_assignment_operator = 277,
    AND_assignment_operator = 278,
    modulo_assignment_operator = 279,
    multiplication_assignment_operator = 280,
    division_assignment_operator = 281,
    addition_assignment_operator = 282,
    subtraction_assignment_operator = 283,
    assignment_operator = 284,
    OR_operator = 285,
    AND_operator = 286,
    pipe_operator = 287,
    caret_operator = 288,
    amp_operator = 289,
    equality_operator = 290,
    inequality_operator = 291,
    lessthan_assignment_operator = 292,
    lessthan_operator = 293,
    greaterthan_assignment_operator = 294,
    greaterthan_operator = 295,
    leftshift_operator = 296,
    rightshift_operator = 297,
    add_operator = 298,
    subtract_operator = 299,
    multiplication_operator = 300,
    division_operator = 301,
    modulo_operator = 302,
    SIZEOF = 303,
    tilde_operator = 304,
    exclamation_operator = 305,
    increment_operator = 306,
    decrement_operator = 307
  };
#endif
/* Tokens.  */
#define INT 258
#define CHAR 259
#define FLOAT 260
#define DOUBLE 261
#define STRUCT 262
#define UNION 263
#define RETURN 264
#define MAIN 265
#define VOID 266
#define WHILE 267
#define DO 268
#define identifier 269
#define integer_constant 270
#define string_constant 271
#define float_constant 272
#define character_constant 273
#define leftshift_assignment_operator 274
#define rightshift_assignment_operator 275
#define XOR_assignment_operator 276
#define OR_assignment_operator 277
#define AND_assignment_operator 278
#define modulo_assignment_operator 279
#define multiplication_assignment_operator 280
#define division_assignment_operator 281
#define addition_assignment_operator 282
#define subtraction_assignment_operator 283
#define assignment_operator 284
#define OR_operator 285
#define AND_operator 286
#define pipe_operator 287
#define caret_operator 288
#define amp_operator 289
#define equality_operator 290
#define inequality_operator 291
#define lessthan_assignment_operator 292
#define lessthan_operator 293
#define greaterthan_assignment_operator 294
#define greaterthan_operator 295
#define leftshift_operator 296
#define rightshift_operator 297
#define add_operator 298
#define subtract_operator 299
#define multiplication_operator 300
#define division_operator 301
#define modulo_operator 302
#define SIZEOF 303
#define tilde_operator 304
#define exclamation_operator 305
#define increment_operator 306
#define decrement_operator 307

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
