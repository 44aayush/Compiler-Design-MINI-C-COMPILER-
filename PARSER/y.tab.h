/* A Bison parser, made by GNU Bison 3.7.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    AUTO = 258,                    /* AUTO  */
    BREAK = 259,                   /* BREAK  */
    CASE = 260,                    /* CASE  */
    CHAR = 261,                    /* CHAR  */
    CONST = 262,                   /* CONST  */
    CONTINUE = 263,                /* CONTINUE  */
    DEFAULT = 264,                 /* DEFAULT  */
    DO = 265,                      /* DO  */
    DOUBLE = 266,                  /* DOUBLE  */
    ENUM = 267,                    /* ENUM  */
    EXTERN = 268,                  /* EXTERN  */
    FLOAT = 269,                   /* FLOAT  */
    FOR = 270,                     /* FOR  */
    GOTO = 271,                    /* GOTO  */
    INT = 272,                     /* INT  */
    LONG = 273,                    /* LONG  */
    REGISTER = 274,                /* REGISTER  */
    RETURN = 275,                  /* RETURN  */
    SHORT = 276,                   /* SHORT  */
    SIGNED = 277,                  /* SIGNED  */
    SIZEOF = 278,                  /* SIZEOF  */
    STATIC = 279,                  /* STATIC  */
    STRUCT = 280,                  /* STRUCT  */
    SWITCH = 281,                  /* SWITCH  */
    TYPEDEF = 282,                 /* TYPEDEF  */
    UNION = 283,                   /* UNION  */
    UNSIGNED = 284,                /* UNSIGNED  */
    VOID = 285,                    /* VOID  */
    VOLATILE = 286,                /* VOLATILE  */
    WHILE = 287,                   /* WHILE  */
    IDENTIFIER = 288,              /* IDENTIFIER  */
    CONSTANT = 289,                /* CONSTANT  */
    STRING_LITERAL = 290,          /* STRING_LITERAL  */
    ELLIPSIS = 291,                /* ELLIPSIS  */
    PTR_OP = 292,                  /* PTR_OP  */
    INC_OP = 293,                  /* INC_OP  */
    DEC_OP = 294,                  /* DEC_OP  */
    LEFT_OP = 295,                 /* LEFT_OP  */
    RIGHT_OP = 296,                /* RIGHT_OP  */
    LE_OP = 297,                   /* LE_OP  */
    GE_OP = 298,                   /* GE_OP  */
    EQ_OP = 299,                   /* EQ_OP  */
    NE_OP = 300,                   /* NE_OP  */
    AND_OP = 301,                  /* AND_OP  */
    OR_OP = 302,                   /* OR_OP  */
    MUL_ASSIGN = 303,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 304,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 305,              /* MOD_ASSIGN  */
    ADD_ASSIGN = 306,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 307,              /* SUB_ASSIGN  */
    LEFT_ASSIGN = 308,             /* LEFT_ASSIGN  */
    RIGHT_ASSIGN = 309,            /* RIGHT_ASSIGN  */
    AND_ASSIGN = 310,              /* AND_ASSIGN  */
    XOR_ASSIGN = 311,              /* XOR_ASSIGN  */
    OR_ASSIGN = 312,               /* OR_ASSIGN  */
    TYPE_NAME = 313,               /* TYPE_NAME  */
    LOWER_THAN_ELSE = 314,         /* LOWER_THAN_ELSE  */
    ELSE = 315                     /* ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define AUTO 258
#define BREAK 259
#define CASE 260
#define CHAR 261
#define CONST 262
#define CONTINUE 263
#define DEFAULT 264
#define DO 265
#define DOUBLE 266
#define ENUM 267
#define EXTERN 268
#define FLOAT 269
#define FOR 270
#define GOTO 271
#define INT 272
#define LONG 273
#define REGISTER 274
#define RETURN 275
#define SHORT 276
#define SIGNED 277
#define SIZEOF 278
#define STATIC 279
#define STRUCT 280
#define SWITCH 281
#define TYPEDEF 282
#define UNION 283
#define UNSIGNED 284
#define VOID 285
#define VOLATILE 286
#define WHILE 287
#define IDENTIFIER 288
#define CONSTANT 289
#define STRING_LITERAL 290
#define ELLIPSIS 291
#define PTR_OP 292
#define INC_OP 293
#define DEC_OP 294
#define LEFT_OP 295
#define RIGHT_OP 296
#define LE_OP 297
#define GE_OP 298
#define EQ_OP 299
#define NE_OP 300
#define AND_OP 301
#define OR_OP 302
#define MUL_ASSIGN 303
#define DIV_ASSIGN 304
#define MOD_ASSIGN 305
#define ADD_ASSIGN 306
#define SUB_ASSIGN 307
#define LEFT_ASSIGN 308
#define RIGHT_ASSIGN 309
#define AND_ASSIGN 310
#define XOR_ASSIGN 311
#define OR_ASSIGN 312
#define TYPE_NAME 313
#define LOWER_THAN_ELSE 314
#define ELSE 315

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
