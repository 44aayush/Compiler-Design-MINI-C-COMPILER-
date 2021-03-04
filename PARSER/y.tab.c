/* A Bison parser, made by GNU Bison 3.7.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "syntaxChecker.y"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "y.tab.h"
struct tokenList
{
	char *token,type[20],line[100];
	struct tokenList *next;
};
typedef struct tokenList tokenList;

extern FILE *yyin;
extern int lineCount;
extern char *tablePtr;
extern int nestedCommentCount;
extern int commentFlag;

tokenList *symbolPtr = NULL;
tokenList *constantPtr = NULL;
tokenList *parsedPtr=NULL;

char *sourceCode=NULL;
int errorFlag=0;
void makeList(char *,char,int);

#line 98 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_AUTO = 3,                       /* AUTO  */
  YYSYMBOL_BREAK = 4,                      /* BREAK  */
  YYSYMBOL_CASE = 5,                       /* CASE  */
  YYSYMBOL_CHAR = 6,                       /* CHAR  */
  YYSYMBOL_CONST = 7,                      /* CONST  */
  YYSYMBOL_CONTINUE = 8,                   /* CONTINUE  */
  YYSYMBOL_DEFAULT = 9,                    /* DEFAULT  */
  YYSYMBOL_DO = 10,                        /* DO  */
  YYSYMBOL_DOUBLE = 11,                    /* DOUBLE  */
  YYSYMBOL_ENUM = 12,                      /* ENUM  */
  YYSYMBOL_EXTERN = 13,                    /* EXTERN  */
  YYSYMBOL_FLOAT = 14,                     /* FLOAT  */
  YYSYMBOL_FOR = 15,                       /* FOR  */
  YYSYMBOL_GOTO = 16,                      /* GOTO  */
  YYSYMBOL_INT = 17,                       /* INT  */
  YYSYMBOL_LONG = 18,                      /* LONG  */
  YYSYMBOL_REGISTER = 19,                  /* REGISTER  */
  YYSYMBOL_RETURN = 20,                    /* RETURN  */
  YYSYMBOL_SHORT = 21,                     /* SHORT  */
  YYSYMBOL_SIGNED = 22,                    /* SIGNED  */
  YYSYMBOL_SIZEOF = 23,                    /* SIZEOF  */
  YYSYMBOL_STATIC = 24,                    /* STATIC  */
  YYSYMBOL_STRUCT = 25,                    /* STRUCT  */
  YYSYMBOL_SWITCH = 26,                    /* SWITCH  */
  YYSYMBOL_TYPEDEF = 27,                   /* TYPEDEF  */
  YYSYMBOL_UNION = 28,                     /* UNION  */
  YYSYMBOL_UNSIGNED = 29,                  /* UNSIGNED  */
  YYSYMBOL_VOID = 30,                      /* VOID  */
  YYSYMBOL_VOLATILE = 31,                  /* VOLATILE  */
  YYSYMBOL_WHILE = 32,                     /* WHILE  */
  YYSYMBOL_IDENTIFIER = 33,                /* IDENTIFIER  */
  YYSYMBOL_CONSTANT = 34,                  /* CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 35,            /* STRING_LITERAL  */
  YYSYMBOL_ELLIPSIS = 36,                  /* ELLIPSIS  */
  YYSYMBOL_PTR_OP = 37,                    /* PTR_OP  */
  YYSYMBOL_INC_OP = 38,                    /* INC_OP  */
  YYSYMBOL_DEC_OP = 39,                    /* DEC_OP  */
  YYSYMBOL_LEFT_OP = 40,                   /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 41,                  /* RIGHT_OP  */
  YYSYMBOL_LE_OP = 42,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 43,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 44,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 45,                     /* NE_OP  */
  YYSYMBOL_AND_OP = 46,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 47,                     /* OR_OP  */
  YYSYMBOL_MUL_ASSIGN = 48,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 49,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 50,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 51,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 52,                /* SUB_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 53,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 54,              /* RIGHT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 55,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 56,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 57,                 /* OR_ASSIGN  */
  YYSYMBOL_TYPE_NAME = 58,                 /* TYPE_NAME  */
  YYSYMBOL_LOWER_THAN_ELSE = 59,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_ELSE = 60,                      /* ELSE  */
  YYSYMBOL_61_ = 61,                       /* '('  */
  YYSYMBOL_62_ = 62,                       /* ')'  */
  YYSYMBOL_63_ = 63,                       /* '['  */
  YYSYMBOL_64_ = 64,                       /* ']'  */
  YYSYMBOL_65_ = 65,                       /* '.'  */
  YYSYMBOL_66_ = 66,                       /* ','  */
  YYSYMBOL_67_ = 67,                       /* '&'  */
  YYSYMBOL_68_ = 68,                       /* '*'  */
  YYSYMBOL_69_ = 69,                       /* '+'  */
  YYSYMBOL_70_ = 70,                       /* '-'  */
  YYSYMBOL_71_ = 71,                       /* '~'  */
  YYSYMBOL_72_ = 72,                       /* '!'  */
  YYSYMBOL_73_ = 73,                       /* '/'  */
  YYSYMBOL_74_ = 74,                       /* '%'  */
  YYSYMBOL_75_ = 75,                       /* '<'  */
  YYSYMBOL_76_ = 76,                       /* '>'  */
  YYSYMBOL_77_ = 77,                       /* '^'  */
  YYSYMBOL_78_ = 78,                       /* '|'  */
  YYSYMBOL_79_ = 79,                       /* '?'  */
  YYSYMBOL_80_ = 80,                       /* ':'  */
  YYSYMBOL_81_ = 81,                       /* '='  */
  YYSYMBOL_82_ = 82,                       /* ';'  */
  YYSYMBOL_83_ = 83,                       /* '{'  */
  YYSYMBOL_84_ = 84,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 85,                  /* $accept  */
  YYSYMBOL_primary_expression = 86,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 87,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 88,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 89,          /* unary_expression  */
  YYSYMBOL_90_1 = 90,                      /* $@1  */
  YYSYMBOL_unary_operator = 91,            /* unary_operator  */
  YYSYMBOL_cast_expression = 92,           /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 93, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 94,       /* additive_expression  */
  YYSYMBOL_shift_expression = 95,          /* shift_expression  */
  YYSYMBOL_relational_expression = 96,     /* relational_expression  */
  YYSYMBOL_equality_expression = 97,       /* equality_expression  */
  YYSYMBOL_and_expression = 98,            /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 99,   /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 100,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 101,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 102,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 103,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 104,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 105,      /* assignment_operator  */
  YYSYMBOL_expression = 106,               /* expression  */
  YYSYMBOL_constant_expression = 107,      /* constant_expression  */
  YYSYMBOL_declaration = 108,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 109,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 110,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 111,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 112,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 113,           /* type_specifier  */
  YYSYMBOL_struct_or_union_specifier = 114, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 115,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 116,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 117,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 118, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 119,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 120,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 121,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 122,          /* enumerator_list  */
  YYSYMBOL_enumerator = 123,               /* enumerator  */
  YYSYMBOL_type_qualifier = 124,           /* type_qualifier  */
  YYSYMBOL_declarator = 125,               /* declarator  */
  YYSYMBOL_direct_declarator = 126,        /* direct_declarator  */
  YYSYMBOL_pointer = 127,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 128,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 129,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 130,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 131,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 132,          /* identifier_list  */
  YYSYMBOL_type_name = 133,                /* type_name  */
  YYSYMBOL_abstract_declarator = 134,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 135, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 136,              /* initializer  */
  YYSYMBOL_initializer_list = 137,         /* initializer_list  */
  YYSYMBOL_statement = 138,                /* statement  */
  YYSYMBOL_labeled_statement = 139,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 140,       /* compound_statement  */
  YYSYMBOL_declaration_list = 141,         /* declaration_list  */
  YYSYMBOL_statement_list = 142,           /* statement_list  */
  YYSYMBOL_expression_statement = 143,     /* expression_statement  */
  YYSYMBOL_selection_statement = 144,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 145,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 146,           /* jump_statement  */
  YYSYMBOL_translation_unit = 147,         /* translation_unit  */
  YYSYMBOL_external_declaration = 148,     /* external_declaration  */
  YYSYMBOL_function_definition = 149       /* function_definition  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  61
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1404

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  85
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  209
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  335

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   315


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    72,     2,     2,     2,    74,    67,     2,
      61,    62,    68,    69,    66,    70,    65,    73,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    80,    82,
      75,    81,    76,    79,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    63,     2,    64,    77,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    83,    78,    84,    71,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    54,    54,    55,    56,    57,    61,    62,    63,    64,
      65,    66,    67,    68,    72,    73,    77,    78,    79,    80,
      81,    82,    82,    87,    88,    89,    90,    91,    92,    96,
      97,   101,   102,   103,   104,   108,   109,   110,   114,   115,
     116,   120,   121,   122,   123,   124,   128,   129,   130,   134,
     135,   139,   140,   144,   145,   149,   150,   154,   155,   159,
     160,   164,   165,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   183,   184,   188,   192,   193,   197,
     198,   199,   200,   201,   202,   206,   207,   211,   212,   216,
     217,   218,   219,   220,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   239,   240,   241,   245,
     246,   250,   251,   255,   259,   260,   261,   262,   266,   267,
     271,   272,   273,   277,   278,   279,   283,   284,   288,   289,
     293,   294,   298,   299,   303,   304,   305,   306,   307,   308,
     309,   313,   314,   315,   316,   320,   321,   326,   327,   331,
     332,   336,   337,   338,   342,   343,   347,   348,   352,   353,
     354,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     370,   371,   372,   376,   377,   381,   382,   383,   384,   385,
     386,   390,   391,   392,   396,   397,   398,   399,   403,   404,
     408,   409,   413,   414,   418,   423,   425,   431,   432,   433,
     434,   435,   439,   440,   444,   445,   449,   450,   451,   452
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "AUTO", "BREAK",
  "CASE", "CHAR", "CONST", "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ENUM",
  "EXTERN", "FLOAT", "FOR", "GOTO", "INT", "LONG", "REGISTER", "RETURN",
  "SHORT", "SIGNED", "SIZEOF", "STATIC", "STRUCT", "SWITCH", "TYPEDEF",
  "UNION", "UNSIGNED", "VOID", "VOLATILE", "WHILE", "IDENTIFIER",
  "CONSTANT", "STRING_LITERAL", "ELLIPSIS", "PTR_OP", "INC_OP", "DEC_OP",
  "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP",
  "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN",
  "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN",
  "OR_ASSIGN", "TYPE_NAME", "LOWER_THAN_ELSE", "ELSE", "'('", "')'", "'['",
  "']'", "'.'", "','", "'&'", "'*'", "'+'", "'-'", "'~'", "'!'", "'/'",
  "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "'='", "';'", "'{'",
  "'}'", "$accept", "primary_expression", "postfix_expression",
  "argument_expression_list", "unary_expression", "$@1", "unary_operator",
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
  "type_qualifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "statement", "labeled_statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,    40,    41,    91,    93,    46,    44,    38,    42,    43,
      45,   126,    33,    47,    37,    60,    62,    94,   124,    63,
      58,    61,    59,   123,   125
};
#endif

#define YYPACT_NINF (-176)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     921,  -176,  -176,  -176,  -176,   -22,  -176,  -176,  -176,  -176,
    -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,
    -176,  -176,     8,    12,  -176,   -11,  1164,  1164,  -176,   -19,
    -176,  1164,   559,   -48,    34,   697,  -176,  -176,   -55,    -8,
      11,  -176,  -176,    12,  -176,    83,  -176,   527,  -176,  -176,
      61,   780,  -176,   282,  -176,   -11,  -176,   559,  1015,  1173,
     -48,  -176,  -176,    -8,    99,    13,  -176,  -176,  -176,  -176,
       8,  -176,   942,  -176,   559,   780,   780,   623,  -176,    98,
     780,   107,  1279,   114,   146,   589,    60,  1060,  1292,   168,
     177,   154,  -176,  -176,  1332,  1332,   745,  -176,  -176,  -176,
    -176,  -176,  -176,  -176,  -176,  -176,    97,   155,  1279,  -176,
     119,   105,   143,    72,   202,   149,   166,   172,   210,   -27,
    -176,  -176,    85,  -176,  -176,  -176,   364,   433,  -176,  -176,
    -176,  -176,   181,  -176,  -176,  -176,  -176,    48,   201,   199,
    -176,    46,  -176,  -176,  -176,  -176,   203,    26,  1279,    -8,
    -176,  -176,   942,  -176,  -176,  -176,   662,  -176,  -176,  -176,
    1279,    95,  -176,   186,  -176,  -176,   188,  -176,   589,   237,
     189,  -176,   103,   745,  -176,  1279,  1279,   589,  1279,  -176,
    -176,    88,   118,   208,   239,  -176,  -176,  1186,  1279,   240,
    -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,
    -176,  1279,  -176,  1279,  1279,  1279,  1279,  1279,  1279,  1279,
    1279,  1279,  1279,  1279,  1279,  1279,  1279,  1279,  1279,  1279,
    1279,  1279,  1279,  -176,  -176,   453,  -176,  -176,   815,  1226,
    -176,     9,  -176,   136,  -176,  1132,  -176,   242,  -176,  -176,
    -176,  -176,  -176,    33,  -176,  -176,    98,  -176,  1279,   589,
    -176,   215,  -176,  -176,   216,   129,   132,  -176,  -176,   868,
     164,  -176,  1279,  -176,  -176,   151,  -176,   173,  -176,  -176,
    -176,  -176,  -176,   119,   119,   105,   105,   143,   143,   143,
     143,    72,    72,   202,   149,   166,   172,   210,    20,  -176,
    -176,  -176,   217,   218,  -176,   213,   136,  1057,  1239,  -176,
    -176,  -176,   924,  -176,  -176,  -176,  -176,  1279,  -176,   589,
     589,  -176,  -176,  1279,  -176,  1279,  -176,  -176,  -176,  -176,
     219,  -176,   220,  -176,  -176,   153,  -176,  -176,  -176,  -176,
    -176,  -176,  -176,   200,  -176
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    92,    95,   130,   100,     0,    90,    99,    97,    98,
      93,    96,   101,    91,   109,    89,   110,   102,    94,   131,
     134,   105,     0,   141,   205,     0,    79,    81,   103,     0,
     104,    83,     0,   133,     0,     0,   202,   204,   125,     0,
       0,   145,   143,   142,    77,     0,    85,    87,    80,    82,
     108,     0,    84,     0,   188,     0,   209,     0,     0,     0,
     132,     1,   203,     0,   128,     0,   126,   135,   146,   144,
       0,    78,     0,   207,     0,     0,   115,     0,   111,     0,
     117,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     3,     4,     0,     0,     0,    23,    24,    25,
      26,    27,    28,   192,   184,     6,    16,    29,     0,    31,
      35,    38,    41,    46,    49,    51,    53,    55,    57,    59,
      61,    74,     0,   190,   175,   176,     0,     0,   177,   178,
     179,   180,    87,   189,   208,   154,   140,   153,     0,   147,
     149,     0,     2,   137,    29,    76,     0,     0,     0,     0,
     123,    86,     0,   170,    88,   206,     0,   114,   107,   112,
       0,     0,   118,   120,   116,   199,     0,   198,     0,     0,
       0,   200,     0,     0,    20,     0,     0,     0,     0,    17,
      18,     0,   156,     0,     0,    12,    13,     0,     0,     0,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      63,     0,    19,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   193,   186,     0,   185,   191,     0,     0,
     151,   158,   152,   159,   138,     0,   139,     0,   136,   124,
     129,   127,   173,     0,   106,   121,     0,   113,     0,     0,
     183,     0,   197,   201,     0,     0,     0,   181,     5,     0,
     158,   157,     0,    11,     8,     0,    14,     0,    10,    62,
      32,    33,    34,    36,    37,    39,    40,    44,    45,    42,
      43,    47,    48,    50,    52,    54,    56,    58,     0,    75,
     187,   166,     0,     0,   162,     0,   160,     0,     0,   148,
     150,   155,     0,   171,   119,   122,   182,     0,    21,     0,
       0,    30,     9,     0,     7,     0,   167,   161,   163,   168,
       0,   164,     0,   172,   174,     0,    22,   194,   195,    15,
      60,   169,   165,     0,   196
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -176,  -176,  -176,  -176,   -49,  -176,  -176,   -98,    42,    43,
      10,    40,    67,   101,   104,   100,   106,  -176,   -58,   -69,
    -176,   -33,   -66,    30,     0,  -176,   253,  -176,   -43,  -176,
    -176,   249,   -65,   -36,  -176,    79,  -176,   264,   179,    45,
      -4,   -29,   -14,  -176,   -56,  -176,    94,  -176,   157,  -120,
    -175,  -145,  -176,   -79,  -176,    27,     2,   205,  -176,  -176,
    -176,  -176,  -176,   297,  -176
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   105,   106,   265,   144,   326,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     201,   122,   146,    54,    55,    45,    46,    26,    27,    28,
      29,    77,    78,    79,   161,   162,    30,    65,    66,    31,
      32,    33,    34,    43,   292,   139,   140,   141,   183,   293,
     233,   154,   243,   123,   124,   125,    57,   127,   128,   129,
     130,   131,    35,    36,    37
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      25,   145,   138,   153,   107,    60,   169,   242,    76,    42,
     202,    38,   159,    58,    50,    59,   166,   232,    40,     3,
     220,    47,    20,   107,   145,    64,    48,    49,    63,    69,
      24,    52,    76,    76,    76,    25,   107,    76,   107,   174,
     157,    20,    20,    19,   164,   179,   180,   107,   227,    74,
      22,   132,   221,    76,   172,   126,   296,    23,   137,    56,
     182,    39,   261,   181,    51,    24,   132,    20,    41,    22,
     228,    44,   229,    67,    73,   163,    23,   107,   107,   149,
      23,    20,   240,   153,   134,   296,   222,   133,    68,   250,
     145,   159,   149,   170,   245,    22,    80,   150,   257,   302,
     315,   155,   145,   107,   133,   270,   271,   272,   236,   228,
     239,   229,   237,    76,   210,   211,    23,   303,   266,   107,
      80,    80,    80,   231,   107,    80,   107,   107,   107,   107,
      76,    20,   269,   230,   184,   185,   186,   182,   107,   107,
     181,    80,   255,   256,    75,   181,   227,   212,   213,    70,
     258,   222,   107,   289,   222,   267,   133,   324,   187,    22,
     188,   246,   189,   295,   311,    71,    23,   223,   260,   222,
     306,   145,   107,   107,   206,   207,   107,   247,   160,   259,
     148,   229,   305,   208,   209,   253,    23,   203,   288,   165,
     145,   309,   204,   205,   310,   222,   167,   297,   222,   298,
     107,    80,    60,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   312,   231,   333,   216,   313,    80,   222,
     277,   278,   279,   280,    40,   259,   168,   229,   137,   175,
     327,   328,   322,   153,   177,   137,   200,   314,   176,   222,
     145,   320,   163,   217,   329,   260,   214,   215,   273,   274,
     218,   275,   276,   107,   281,   282,   219,   330,   107,   137,
     107,   107,    72,   234,   107,   235,   248,   238,   249,   251,
     262,   252,   263,   268,   325,   301,   307,   318,   308,   316,
     317,   331,   334,   283,   332,     1,    81,    82,     2,     3,
      83,    84,    85,     4,     5,     6,     7,   137,    86,     8,
       9,    10,    87,    11,    12,    88,    13,    14,    89,    15,
      16,    17,    18,    19,    90,    91,    92,    93,   284,   286,
      94,    95,   285,   151,   156,   304,   287,   147,   241,   300,
     254,   225,    62,     0,     0,     0,     0,     0,     0,     0,
      21,     0,     0,    96,     0,     0,     0,     0,     0,    97,
      98,    99,   100,   101,   102,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   103,    53,   104,     1,    81,    82,
       2,     3,    83,    84,    85,     4,     5,     6,     7,     0,
      86,     8,     9,    10,    87,    11,    12,    88,    13,    14,
      89,    15,    16,    17,    18,    19,    90,    91,    92,    93,
       0,     0,    94,    95,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    21,     0,     0,    96,     0,     0,     0,     0,
       0,    97,    98,    99,   100,   101,   102,    81,    82,     0,
       0,    83,    84,    85,     0,     0,   103,    53,   224,    86,
       0,     0,     0,    87,     0,     0,    88,    81,    82,    89,
       0,    83,    84,    85,     0,    90,    91,    92,    93,    86,
       0,    94,    95,    87,     0,     0,    88,     0,     0,    89,
       0,     0,     0,     0,     0,    90,    91,    92,    93,     0,
       0,    94,    95,     0,    96,     0,     0,     0,     0,     0,
      97,    98,    99,   100,   101,   102,     0,     0,     0,     0,
       0,     0,     0,     0,    96,   103,    53,   226,     0,     0,
      97,    98,    99,   100,   101,   102,     0,     0,     0,     0,
       1,     0,     0,     2,     3,   103,    53,   290,     4,     5,
       6,     7,     0,     0,     8,     9,    10,     0,    11,    12,
       0,    13,    14,     0,    15,    16,    17,    18,    19,     0,
       0,     0,     1,     0,     0,     2,     3,     0,     0,     0,
       4,     5,     6,     7,     0,     0,     8,     9,    10,     0,
      11,    12,     0,    13,    14,    21,    15,    16,    17,    18,
      19,     0,     0,    81,    82,     0,     0,    83,    84,    85,
       0,     0,     0,     0,     0,    86,     0,     0,    72,    87,
      53,     0,    88,     0,     0,    89,     0,    21,     0,     0,
       0,    90,    91,    92,    93,     0,     0,    94,    95,     2,
       3,     0,     0,     0,     4,     5,     0,     7,     0,     0,
       8,     9,    53,     0,    11,    12,     0,     0,    14,     0,
      96,    16,    17,    18,    19,     0,    97,    98,    99,   100,
     101,   102,     0,     0,     0,     0,     0,     0,     2,     3,
       0,   103,    53,     4,     5,     0,     7,     0,     0,     8,
       9,    21,     0,    11,    12,     0,     0,    14,     0,     0,
      16,    17,    18,    19,     0,     0,     0,    61,     0,     0,
       1,     0,     0,     2,     3,     0,     0,   158,     4,     5,
       6,     7,     0,     0,     8,     9,    10,     0,    11,    12,
      21,    13,    14,     0,    15,    16,    17,    18,    19,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   244,     0,     0,     0,
       0,     2,     3,     0,     0,    21,     4,     5,    22,     7,
       0,     0,     8,     9,     0,    23,    11,    12,    88,     0,
      14,     0,     0,    16,    17,    18,    19,     0,   142,    92,
      93,     0,     0,    94,    95,     0,     2,     3,     0,     0,
       0,     4,     5,     0,     7,     0,     0,     8,     9,     0,
       0,    11,    12,    21,     0,    14,    96,     0,    16,    17,
      18,    19,    97,    98,    99,   100,   101,   102,     1,     0,
       0,     2,     3,     0,     0,     0,     4,     5,     6,     7,
       0,     0,     8,     9,    10,     0,    11,    12,    21,    13,
      14,     0,    15,    16,    17,    18,    19,     0,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     0,    21,     2,     3,   228,   291,   229,     4,
       5,     6,     7,    23,     0,     8,     9,    10,     0,    11,
      12,     0,    13,    14,     0,    15,    16,    17,    18,    19,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     0,    21,     2,     3,   259,
     291,   229,     4,     5,     6,     7,    23,     0,     8,     9,
      10,     0,    11,    12,     0,    13,    14,    88,    15,    16,
      17,    18,    19,     0,    20,     0,     0,   142,    92,    93,
       0,     0,    94,    95,     0,    88,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   142,    92,    93,     0,    21,
      94,    95,    22,     0,     0,    96,     0,     0,     0,    23,
       0,    97,    98,    99,   100,   101,   102,     0,     0,     0,
       0,     0,     0,    96,     0,     0,     0,   152,   323,    97,
      98,    99,   100,   101,   102,     0,     0,     0,     1,     0,
       0,     2,     3,     0,     0,   152,     4,     5,     6,     7,
       0,     0,     8,     9,    10,     0,    11,    12,     0,    13,
      14,     0,    15,    16,    17,    18,    19,     0,   135,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     2,     3,     0,     0,     0,     4,     5,
       6,     7,     0,    21,     8,     9,    10,   136,    11,    12,
       0,    13,    14,    88,    15,    16,    17,    18,    19,     0,
       0,     0,     0,   142,    92,    93,     0,     0,    94,    95,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    21,     0,     0,     0,   319,
       0,    96,     0,     0,     0,     0,     0,    97,    98,    99,
     100,   101,   102,     0,     0,     1,     0,     0,     2,     3,
       0,     0,   171,     4,     5,     6,     7,     0,     0,     8,
       9,    10,     0,    11,    12,     0,    13,    14,     0,    15,
      16,    17,    18,    19,     0,     0,     0,     1,   299,     0,
       2,     3,     0,     0,     0,     4,     5,     6,     7,     0,
       0,     8,     9,    10,     0,    11,    12,     0,    13,    14,
      21,    15,    16,    17,    18,    19,    88,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   142,    92,    93,    88,
       0,    94,    95,     0,     0,     0,     0,     0,     0,   142,
      92,    93,    21,     0,    94,    95,     0,     0,     0,     0,
       0,     0,     0,     0,    96,     0,     0,   143,     0,     0,
      97,    98,    99,   100,   101,   102,     0,    96,   264,    88,
       0,     0,     0,    97,    98,    99,   100,   101,   102,   142,
      92,    93,    88,     0,    94,    95,     0,     0,     0,     0,
       0,     0,   142,    92,    93,     0,     0,    94,    95,     0,
       0,     0,     0,     0,     0,     0,     0,    96,     0,     0,
     294,     0,     0,    97,    98,    99,   100,   101,   102,     0,
      96,     0,    88,   321,     0,     0,    97,    98,    99,   100,
     101,   102,   142,    92,    93,    88,     0,    94,    95,     0,
       0,     0,     0,     0,     0,   142,    92,    93,     0,     0,
      94,    95,     0,     0,     0,     0,     0,     0,     0,     0,
      96,     0,     0,     0,     0,     0,    97,    98,    99,   100,
     101,   102,     0,   173,     0,    88,     0,     0,     0,    97,
      98,    99,   100,   101,   102,   142,    92,    93,     0,     0,
      94,    95,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   178,     0,     0,     0,     0,     0,    97,
      98,    99,   100,   101,   102
};

static const yytype_int16 yycheck[] =
{
       0,    59,    58,    72,    53,    34,    85,   152,    51,    23,
     108,    33,    77,    61,    33,    63,    82,   137,    22,     7,
      47,    25,    33,    72,    82,    33,    26,    27,    83,    43,
       0,    31,    75,    76,    77,    35,    85,    80,    87,    88,
      76,    33,    33,    31,    80,    94,    95,    96,   127,    47,
      61,    55,    79,    96,    87,    53,   231,    68,    58,    32,
      96,    83,   182,    96,    83,    35,    70,    33,    23,    61,
      61,    82,    63,    62,    47,    79,    68,   126,   127,    66,
      68,    33,   148,   152,    57,   260,    66,    57,    43,   168,
     148,   156,    66,    33,   160,    61,    51,    84,   177,    66,
      80,    74,   160,   152,    74,   203,   204,   205,    62,    61,
      84,    63,    66,   156,    42,    43,    68,    84,   187,   168,
      75,    76,    77,   137,   173,    80,   175,   176,   177,   178,
     173,    33,   201,   137,    37,    38,    39,   173,   187,   188,
     173,    96,   175,   176,    83,   178,   225,    75,    76,    66,
      62,    66,   201,   222,    66,   188,   126,   302,    61,    61,
      63,    66,    65,   229,   262,    82,    68,    82,   182,    66,
     249,   229,   221,   222,    69,    70,   225,    82,    80,    61,
      81,    63,   248,    40,    41,    82,    68,    68,   221,    82,
     248,    62,    73,    74,    62,    66,    82,    61,    66,    63,
     249,   156,   231,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    62,   228,    62,    67,    66,   173,    66,
     210,   211,   212,   213,   228,    61,    80,    63,   228,    61,
     309,   310,   298,   302,    80,   235,    81,    64,    61,    66,
     298,   297,   246,    77,   313,   259,    44,    45,   206,   207,
      78,   208,   209,   302,   214,   215,    46,   315,   307,   259,
     309,   310,    81,    62,   313,    66,    80,    64,    80,    32,
      62,    82,    33,    33,   307,    33,    61,    64,    62,    62,
      62,    62,    82,   216,    64,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,   297,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,   217,   219,
      38,    39,   218,    70,    75,   246,   220,    63,   149,   235,
     173,   126,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    67,
      68,    69,    70,    71,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    83,    84,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    -1,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    61,    -1,    -1,    -1,    -1,
      -1,    67,    68,    69,    70,    71,    72,     4,     5,    -1,
      -1,     8,     9,    10,    -1,    -1,    82,    83,    84,    16,
      -1,    -1,    -1,    20,    -1,    -1,    23,     4,     5,    26,
      -1,     8,     9,    10,    -1,    32,    33,    34,    35,    16,
      -1,    38,    39,    20,    -1,    -1,    23,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,    -1,
      -1,    38,    39,    -1,    61,    -1,    -1,    -1,    -1,    -1,
      67,    68,    69,    70,    71,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    82,    83,    84,    -1,    -1,
      67,    68,    69,    70,    71,    72,    -1,    -1,    -1,    -1,
       3,    -1,    -1,     6,     7,    82,    83,    84,    11,    12,
      13,    14,    -1,    -1,    17,    18,    19,    -1,    21,    22,
      -1,    24,    25,    -1,    27,    28,    29,    30,    31,    -1,
      -1,    -1,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,
      11,    12,    13,    14,    -1,    -1,    17,    18,    19,    -1,
      21,    22,    -1,    24,    25,    58,    27,    28,    29,    30,
      31,    -1,    -1,     4,     5,    -1,    -1,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    16,    -1,    -1,    81,    20,
      83,    -1,    23,    -1,    -1,    26,    -1,    58,    -1,    -1,
      -1,    32,    33,    34,    35,    -1,    -1,    38,    39,     6,
       7,    -1,    -1,    -1,    11,    12,    -1,    14,    -1,    -1,
      17,    18,    83,    -1,    21,    22,    -1,    -1,    25,    -1,
      61,    28,    29,    30,    31,    -1,    67,    68,    69,    70,
      71,    72,    -1,    -1,    -1,    -1,    -1,    -1,     6,     7,
      -1,    82,    83,    11,    12,    -1,    14,    -1,    -1,    17,
      18,    58,    -1,    21,    22,    -1,    -1,    25,    -1,    -1,
      28,    29,    30,    31,    -1,    -1,    -1,     0,    -1,    -1,
       3,    -1,    -1,     6,     7,    -1,    -1,    84,    11,    12,
      13,    14,    -1,    -1,    17,    18,    19,    -1,    21,    22,
      58,    24,    25,    -1,    27,    28,    29,    30,    31,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,
      -1,     6,     7,    -1,    -1,    58,    11,    12,    61,    14,
      -1,    -1,    17,    18,    -1,    68,    21,    22,    23,    -1,
      25,    -1,    -1,    28,    29,    30,    31,    -1,    33,    34,
      35,    -1,    -1,    38,    39,    -1,     6,     7,    -1,    -1,
      -1,    11,    12,    -1,    14,    -1,    -1,    17,    18,    -1,
      -1,    21,    22,    58,    -1,    25,    61,    -1,    28,    29,
      30,    31,    67,    68,    69,    70,    71,    72,     3,    -1,
      -1,     6,     7,    -1,    -1,    -1,    11,    12,    13,    14,
      -1,    -1,    17,    18,    19,    -1,    21,    22,    58,    24,
      25,    -1,    27,    28,    29,    30,    31,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    58,     6,     7,    61,    62,    63,    11,
      12,    13,    14,    68,    -1,    17,    18,    19,    -1,    21,
      22,    -1,    24,    25,    -1,    27,    28,    29,    30,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,    58,     6,     7,    61,
      62,    63,    11,    12,    13,    14,    68,    -1,    17,    18,
      19,    -1,    21,    22,    -1,    24,    25,    23,    27,    28,
      29,    30,    31,    -1,    33,    -1,    -1,    33,    34,    35,
      -1,    -1,    38,    39,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    -1,    58,
      38,    39,    61,    -1,    -1,    61,    -1,    -1,    -1,    68,
      -1,    67,    68,    69,    70,    71,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    -1,    -1,    83,    84,    67,
      68,    69,    70,    71,    72,    -1,    -1,    -1,     3,    -1,
      -1,     6,     7,    -1,    -1,    83,    11,    12,    13,    14,
      -1,    -1,    17,    18,    19,    -1,    21,    22,    -1,    24,
      25,    -1,    27,    28,    29,    30,    31,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,    12,
      13,    14,    -1,    58,    17,    18,    19,    62,    21,    22,
      -1,    24,    25,    23,    27,    28,    29,    30,    31,    -1,
      -1,    -1,    -1,    33,    34,    35,    -1,    -1,    38,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    62,
      -1,    61,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,
      70,    71,    72,    -1,    -1,     3,    -1,    -1,     6,     7,
      -1,    -1,    82,    11,    12,    13,    14,    -1,    -1,    17,
      18,    19,    -1,    21,    22,    -1,    24,    25,    -1,    27,
      28,    29,    30,    31,    -1,    -1,    -1,     3,    36,    -1,
       6,     7,    -1,    -1,    -1,    11,    12,    13,    14,    -1,
      -1,    17,    18,    19,    -1,    21,    22,    -1,    24,    25,
      58,    27,    28,    29,    30,    31,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,    23,
      -1,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      34,    35,    58,    -1,    38,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    -1,    -1,    64,    -1,    -1,
      67,    68,    69,    70,    71,    72,    -1,    61,    62,    23,
      -1,    -1,    -1,    67,    68,    69,    70,    71,    72,    33,
      34,    35,    23,    -1,    38,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    35,    -1,    -1,    38,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,
      64,    -1,    -1,    67,    68,    69,    70,    71,    72,    -1,
      61,    -1,    23,    64,    -1,    -1,    67,    68,    69,    70,
      71,    72,    33,    34,    35,    23,    -1,    38,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    -1,    -1,
      38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,    70,
      71,    72,    -1,    61,    -1,    23,    -1,    -1,    -1,    67,
      68,    69,    70,    71,    72,    33,    34,    35,    -1,    -1,
      38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    67,
      68,    69,    70,    71,    72
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,    11,    12,    13,    14,    17,    18,
      19,    21,    22,    24,    25,    27,    28,    29,    30,    31,
      33,    58,    61,    68,   108,   109,   112,   113,   114,   115,
     121,   124,   125,   126,   127,   147,   148,   149,    33,    83,
     125,   124,   127,   128,    82,   110,   111,   125,   109,   109,
      33,    83,   109,    83,   108,   109,   140,   141,    61,    63,
     126,     0,   148,    83,    33,   122,   123,    62,   124,   127,
      66,    82,    81,   140,   141,    83,   113,   116,   117,   118,
     124,     4,     5,     8,     9,    10,    16,    20,    23,    26,
      32,    33,    34,    35,    38,    39,    61,    67,    68,    69,
      70,    71,    72,    82,    84,    86,    87,    89,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   106,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   125,   108,   140,    33,    62,   109,   129,   130,
     131,   132,    33,    64,    89,   103,   107,   122,    81,    66,
      84,   111,    83,   104,   136,   140,   116,   118,    84,   117,
      80,   119,   120,   125,   118,    82,   107,    82,    80,   138,
      33,    82,   106,    61,    89,    61,    61,    80,    61,    89,
      89,   106,   118,   133,    37,    38,    39,    61,    63,    65,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      81,   105,    92,    68,    73,    74,    69,    70,    40,    41,
      42,    43,    75,    76,    44,    45,    67,    77,    78,    46,
      47,    79,    66,    82,    84,   142,    84,   138,    61,    63,
     125,   127,   134,   135,    62,    66,    62,    66,    64,    84,
     107,   123,   136,   137,    84,   107,    66,    82,    80,    80,
     138,    32,    82,    82,   133,   106,   106,   138,    62,    61,
     127,   134,    62,    33,    62,    88,   104,   106,    33,   104,
      92,    92,    92,    93,    93,    94,    94,    95,    95,    95,
      95,    96,    96,    97,    98,    99,   100,   101,   106,   104,
      84,    62,   129,   134,    64,   107,   135,    61,    63,    36,
     131,    33,    66,    84,   120,   107,   138,    61,    62,    62,
      62,    92,    62,    66,    64,    80,    62,    62,    64,    62,
     129,    64,   107,    84,   136,   106,    90,   138,   138,   104,
     103,    62,    64,    62,    82
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    85,    86,    86,    86,    86,    87,    87,    87,    87,
      87,    87,    87,    87,    88,    88,    89,    89,    89,    89,
      89,    90,    89,    91,    91,    91,    91,    91,    91,    92,
      92,    93,    93,    93,    93,    94,    94,    94,    95,    95,
      95,    96,    96,    96,    96,    96,    97,    97,    97,    98,
      98,    99,    99,   100,   100,   101,   101,   102,   102,   103,
     103,   104,   104,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   106,   106,   107,   108,   108,   109,
     109,   109,   109,   109,   109,   110,   110,   111,   111,   112,
     112,   112,   112,   112,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   114,   114,   114,   115,
     115,   116,   116,   117,   118,   118,   118,   118,   119,   119,
     120,   120,   120,   121,   121,   121,   122,   122,   123,   123,
     124,   124,   125,   125,   126,   126,   126,   126,   126,   126,
     126,   127,   127,   127,   127,   128,   128,   129,   129,   130,
     130,   131,   131,   131,   132,   132,   133,   133,   134,   134,
     134,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     136,   136,   136,   137,   137,   138,   138,   138,   138,   138,
     138,   139,   139,   139,   140,   140,   140,   140,   141,   141,
     142,   142,   143,   143,   144,   145,   145,   146,   146,   146,
     146,   146,   147,   147,   148,   148,   149,   149,   149,   149
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     3,     4,
       3,     3,     2,     2,     1,     3,     1,     2,     2,     2,
       2,     0,     5,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       5,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     2,     3,     1,
       2,     1,     2,     1,     2,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     4,     2,     1,
       1,     1,     2,     3,     2,     1,     2,     1,     1,     3,
       1,     2,     3,     4,     5,     2,     1,     3,     1,     3,
       1,     1,     2,     1,     1,     3,     4,     3,     4,     4,
       3,     1,     2,     2,     3,     1,     2,     1,     3,     1,
       3,     2,     2,     1,     1,     3,     1,     2,     1,     1,
       2,     3,     2,     3,     3,     4,     2,     3,     3,     4,
       1,     3,     4,     1,     3,     1,     1,     1,     1,     1,
       1,     3,     4,     3,     2,     3,     3,     4,     1,     2,
       1,     2,     1,     2,     5,     5,     7,     3,     2,     2,
       2,     3,     1,     2,     1,     1,     4,     3,     3,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* primary_expression: IDENTIFIER  */
#line 54 "syntaxChecker.y"
                                { makeList(tablePtr, 'v', lineCount); }
#line 1869 "y.tab.c"
    break;

  case 3: /* primary_expression: CONSTANT  */
#line 55 "syntaxChecker.y"
                                { makeList(tablePtr, 'c', lineCount);}
#line 1875 "y.tab.c"
    break;

  case 4: /* primary_expression: STRING_LITERAL  */
#line 56 "syntaxChecker.y"
                                { makeList(tablePtr, 's', lineCount);}
#line 1881 "y.tab.c"
    break;

  case 5: /* primary_expression: '(' expression ')'  */
#line 57 "syntaxChecker.y"
                                { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 1887 "y.tab.c"
    break;

  case 7: /* postfix_expression: postfix_expression '[' expression ']'  */
#line 62 "syntaxChecker.y"
                                                                { makeList("[", 'p', lineCount); makeList("]", 'p', lineCount); }
#line 1893 "y.tab.c"
    break;

  case 8: /* postfix_expression: postfix_expression '(' ')'  */
#line 63 "syntaxChecker.y"
                                                                { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 1899 "y.tab.c"
    break;

  case 9: /* postfix_expression: postfix_expression '(' argument_expression_list ')'  */
#line 64 "syntaxChecker.y"
                                                                { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 1905 "y.tab.c"
    break;

  case 10: /* postfix_expression: postfix_expression '.' IDENTIFIER  */
#line 65 "syntaxChecker.y"
                                                                { makeList(tablePtr, 'v', lineCount);}
#line 1911 "y.tab.c"
    break;

  case 11: /* postfix_expression: postfix_expression PTR_OP IDENTIFIER  */
#line 66 "syntaxChecker.y"
                                                                { makeList(tablePtr, 'v', lineCount);}
#line 1917 "y.tab.c"
    break;

  case 12: /* postfix_expression: postfix_expression INC_OP  */
#line 67 "syntaxChecker.y"
                                                                { makeList(tablePtr, 'o', lineCount);}
#line 1923 "y.tab.c"
    break;

  case 13: /* postfix_expression: postfix_expression DEC_OP  */
#line 68 "syntaxChecker.y"
                                                                { makeList(tablePtr, 'o', lineCount);}
#line 1929 "y.tab.c"
    break;

  case 15: /* argument_expression_list: argument_expression_list ',' assignment_expression  */
#line 73 "syntaxChecker.y"
                                                             { makeList(",",'p', lineCount); }
#line 1935 "y.tab.c"
    break;

  case 17: /* unary_expression: INC_OP unary_expression  */
#line 78 "syntaxChecker.y"
                                        { makeList("++",'o', lineCount); }
#line 1941 "y.tab.c"
    break;

  case 18: /* unary_expression: DEC_OP unary_expression  */
#line 79 "syntaxChecker.y"
                                        { makeList("--",'o', lineCount); }
#line 1947 "y.tab.c"
    break;

  case 20: /* unary_expression: SIZEOF unary_expression  */
#line 81 "syntaxChecker.y"
                                        { makeList("sizeof",'o', lineCount); }
#line 1953 "y.tab.c"
    break;

  case 21: /* $@1: %empty  */
#line 82 "syntaxChecker.y"
                                        { makeList("sizeof",'o', lineCount); }
#line 1959 "y.tab.c"
    break;

  case 22: /* unary_expression: SIZEOF '(' type_name ')' $@1  */
#line 83 "syntaxChecker.y"
                                        { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 1965 "y.tab.c"
    break;

  case 23: /* unary_operator: '&'  */
#line 87 "syntaxChecker.y"
              { makeList("&",'o', lineCount); }
#line 1971 "y.tab.c"
    break;

  case 24: /* unary_operator: '*'  */
#line 88 "syntaxChecker.y"
              { makeList("*",'o', lineCount); }
#line 1977 "y.tab.c"
    break;

  case 25: /* unary_operator: '+'  */
#line 89 "syntaxChecker.y"
              { makeList("+",'o', lineCount); }
#line 1983 "y.tab.c"
    break;

  case 26: /* unary_operator: '-'  */
#line 90 "syntaxChecker.y"
              { makeList("-",'o', lineCount); }
#line 1989 "y.tab.c"
    break;

  case 27: /* unary_operator: '~'  */
#line 91 "syntaxChecker.y"
              { makeList("~",'o', lineCount); }
#line 1995 "y.tab.c"
    break;

  case 28: /* unary_operator: '!'  */
#line 92 "syntaxChecker.y"
              { makeList("!",'o', lineCount); }
#line 2001 "y.tab.c"
    break;

  case 30: /* cast_expression: '(' type_name ')' cast_expression  */
#line 97 "syntaxChecker.y"
                                            { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2007 "y.tab.c"
    break;

  case 32: /* multiplicative_expression: multiplicative_expression '*' cast_expression  */
#line 102 "syntaxChecker.y"
                                                        { makeList("*",'o', lineCount); }
#line 2013 "y.tab.c"
    break;

  case 33: /* multiplicative_expression: multiplicative_expression '/' cast_expression  */
#line 103 "syntaxChecker.y"
                                                        { makeList("/",'o', lineCount); }
#line 2019 "y.tab.c"
    break;

  case 34: /* multiplicative_expression: multiplicative_expression '%' cast_expression  */
#line 104 "syntaxChecker.y"
                                                        { makeList("%",'o', lineCount); }
#line 2025 "y.tab.c"
    break;

  case 36: /* additive_expression: additive_expression '+' multiplicative_expression  */
#line 109 "syntaxChecker.y"
                                                            { makeList("+",'o', lineCount); }
#line 2031 "y.tab.c"
    break;

  case 37: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 110 "syntaxChecker.y"
                                                            { makeList("-",'o', lineCount); }
#line 2037 "y.tab.c"
    break;

  case 39: /* shift_expression: shift_expression LEFT_OP additive_expression  */
#line 115 "syntaxChecker.y"
                                                        { makeList("<<",'o', lineCount); }
#line 2043 "y.tab.c"
    break;

  case 40: /* shift_expression: shift_expression RIGHT_OP additive_expression  */
#line 116 "syntaxChecker.y"
                                                        { makeList(">>",'o', lineCount); }
#line 2049 "y.tab.c"
    break;

  case 44: /* relational_expression: relational_expression LE_OP shift_expression  */
#line 123 "syntaxChecker.y"
                                                       { makeList("<=",'o', lineCount); }
#line 2055 "y.tab.c"
    break;

  case 45: /* relational_expression: relational_expression GE_OP shift_expression  */
#line 124 "syntaxChecker.y"
                                                       { makeList(">=",'o', lineCount); }
#line 2061 "y.tab.c"
    break;

  case 47: /* equality_expression: equality_expression EQ_OP relational_expression  */
#line 129 "syntaxChecker.y"
                                                          { makeList("==",'o', lineCount); }
#line 2067 "y.tab.c"
    break;

  case 48: /* equality_expression: equality_expression NE_OP relational_expression  */
#line 130 "syntaxChecker.y"
                                                          { makeList("!=",'o', lineCount); }
#line 2073 "y.tab.c"
    break;

  case 50: /* and_expression: and_expression '&' equality_expression  */
#line 135 "syntaxChecker.y"
                                                        { makeList("&", 'o', lineCount);}
#line 2079 "y.tab.c"
    break;

  case 52: /* exclusive_or_expression: exclusive_or_expression '^' and_expression  */
#line 140 "syntaxChecker.y"
                                                        { makeList("^", 'o', lineCount); }
#line 2085 "y.tab.c"
    break;

  case 54: /* inclusive_or_expression: inclusive_or_expression '|' exclusive_or_expression  */
#line 145 "syntaxChecker.y"
                                                              { makeList("|", 'o', lineCount); }
#line 2091 "y.tab.c"
    break;

  case 56: /* logical_and_expression: logical_and_expression AND_OP inclusive_or_expression  */
#line 150 "syntaxChecker.y"
                                                                { makeList("&&", 'o', lineCount); }
#line 2097 "y.tab.c"
    break;

  case 58: /* logical_or_expression: logical_or_expression OR_OP logical_and_expression  */
#line 155 "syntaxChecker.y"
                                                             { makeList("||", 'o', lineCount); }
#line 2103 "y.tab.c"
    break;

  case 60: /* conditional_expression: logical_or_expression '?' expression ':' conditional_expression  */
#line 160 "syntaxChecker.y"
                                                                          { makeList("?:",'o', lineCount); }
#line 2109 "y.tab.c"
    break;

  case 63: /* assignment_operator: '='  */
#line 169 "syntaxChecker.y"
                        { makeList("=",'o', lineCount); }
#line 2115 "y.tab.c"
    break;

  case 64: /* assignment_operator: MUL_ASSIGN  */
#line 170 "syntaxChecker.y"
                        { makeList("*=",'o', lineCount); }
#line 2121 "y.tab.c"
    break;

  case 65: /* assignment_operator: DIV_ASSIGN  */
#line 171 "syntaxChecker.y"
                        { makeList("/=",'o', lineCount); }
#line 2127 "y.tab.c"
    break;

  case 66: /* assignment_operator: MOD_ASSIGN  */
#line 172 "syntaxChecker.y"
                        { makeList("%=",'o', lineCount); }
#line 2133 "y.tab.c"
    break;

  case 67: /* assignment_operator: ADD_ASSIGN  */
#line 173 "syntaxChecker.y"
                        { makeList("+=",'o', lineCount); }
#line 2139 "y.tab.c"
    break;

  case 68: /* assignment_operator: SUB_ASSIGN  */
#line 174 "syntaxChecker.y"
                        { makeList("-=",'o', lineCount); }
#line 2145 "y.tab.c"
    break;

  case 69: /* assignment_operator: LEFT_ASSIGN  */
#line 175 "syntaxChecker.y"
                        { makeList("<<=",'o', lineCount); }
#line 2151 "y.tab.c"
    break;

  case 70: /* assignment_operator: RIGHT_ASSIGN  */
#line 176 "syntaxChecker.y"
                        { makeList(">==",'o', lineCount); }
#line 2157 "y.tab.c"
    break;

  case 71: /* assignment_operator: AND_ASSIGN  */
#line 177 "syntaxChecker.y"
                        { makeList("&=",'o', lineCount); }
#line 2163 "y.tab.c"
    break;

  case 72: /* assignment_operator: XOR_ASSIGN  */
#line 178 "syntaxChecker.y"
                        { makeList("^=",'o', lineCount); }
#line 2169 "y.tab.c"
    break;

  case 73: /* assignment_operator: OR_ASSIGN  */
#line 179 "syntaxChecker.y"
                        { makeList("|=",'o', lineCount); }
#line 2175 "y.tab.c"
    break;

  case 75: /* expression: expression ',' assignment_expression  */
#line 184 "syntaxChecker.y"
                                               { makeList(",", 'p', lineCount); }
#line 2181 "y.tab.c"
    break;

  case 77: /* declaration: declaration_specifiers ';'  */
#line 192 "syntaxChecker.y"
                                                          { makeList(";", 'p', lineCount); }
#line 2187 "y.tab.c"
    break;

  case 78: /* declaration: declaration_specifiers init_declarator_list ';'  */
#line 193 "syntaxChecker.y"
                                                          { makeList(";", 'p', lineCount); }
#line 2193 "y.tab.c"
    break;

  case 86: /* init_declarator_list: init_declarator_list ',' init_declarator  */
#line 207 "syntaxChecker.y"
                                                   { makeList(",", 'p', lineCount); }
#line 2199 "y.tab.c"
    break;

  case 88: /* init_declarator: declarator '=' initializer  */
#line 212 "syntaxChecker.y"
                                     { makeList("=", 'o', lineCount); }
#line 2205 "y.tab.c"
    break;

  case 89: /* storage_class_specifier: TYPEDEF  */
#line 216 "syntaxChecker.y"
                        { makeList("typedef", 'k', lineCount);}
#line 2211 "y.tab.c"
    break;

  case 90: /* storage_class_specifier: EXTERN  */
#line 217 "syntaxChecker.y"
                        { makeList("extern", 'k', lineCount);}
#line 2217 "y.tab.c"
    break;

  case 91: /* storage_class_specifier: STATIC  */
#line 218 "syntaxChecker.y"
                        { makeList("static", 'k', lineCount);}
#line 2223 "y.tab.c"
    break;

  case 92: /* storage_class_specifier: AUTO  */
#line 219 "syntaxChecker.y"
                        { makeList("auto", 'k', lineCount);}
#line 2229 "y.tab.c"
    break;

  case 93: /* storage_class_specifier: REGISTER  */
#line 220 "syntaxChecker.y"
                        { makeList("register", 'k', lineCount);}
#line 2235 "y.tab.c"
    break;

  case 94: /* type_specifier: VOID  */
#line 224 "syntaxChecker.y"
                        { makeList("void", 'k', lineCount);}
#line 2241 "y.tab.c"
    break;

  case 95: /* type_specifier: CHAR  */
#line 225 "syntaxChecker.y"
                        { makeList("char", 'k', lineCount);}
#line 2247 "y.tab.c"
    break;

  case 96: /* type_specifier: SHORT  */
#line 226 "syntaxChecker.y"
                        { makeList("short", 'k', lineCount);}
#line 2253 "y.tab.c"
    break;

  case 97: /* type_specifier: INT  */
#line 227 "syntaxChecker.y"
                        { makeList("int", 'k', lineCount);}
#line 2259 "y.tab.c"
    break;

  case 98: /* type_specifier: LONG  */
#line 228 "syntaxChecker.y"
                        { makeList("long", 'k', lineCount);}
#line 2265 "y.tab.c"
    break;

  case 99: /* type_specifier: FLOAT  */
#line 229 "syntaxChecker.y"
                        { makeList("float", 'k', lineCount);}
#line 2271 "y.tab.c"
    break;

  case 100: /* type_specifier: DOUBLE  */
#line 230 "syntaxChecker.y"
                        { makeList("double", 'k', lineCount);}
#line 2277 "y.tab.c"
    break;

  case 101: /* type_specifier: SIGNED  */
#line 231 "syntaxChecker.y"
                        { makeList("signed", 'k', lineCount);}
#line 2283 "y.tab.c"
    break;

  case 102: /* type_specifier: UNSIGNED  */
#line 232 "syntaxChecker.y"
                        { makeList("unsigned", 'k', lineCount);}
#line 2289 "y.tab.c"
    break;

  case 109: /* struct_or_union: STRUCT  */
#line 245 "syntaxChecker.y"
                        { makeList("struct", 'k', lineCount);}
#line 2295 "y.tab.c"
    break;

  case 110: /* struct_or_union: UNION  */
#line 246 "syntaxChecker.y"
                        { makeList("union", 'k', lineCount);}
#line 2301 "y.tab.c"
    break;

  case 113: /* struct_declaration: specifier_qualifier_list struct_declarator_list ';'  */
#line 255 "syntaxChecker.y"
                                                              { makeList(";", 'p', lineCount); }
#line 2307 "y.tab.c"
    break;

  case 119: /* struct_declarator_list: struct_declarator_list ',' struct_declarator  */
#line 267 "syntaxChecker.y"
                                                       { makeList(",", 'p', lineCount); }
#line 2313 "y.tab.c"
    break;

  case 121: /* struct_declarator: ':' constant_expression  */
#line 272 "syntaxChecker.y"
                                                { makeList(":", 'p', lineCount); }
#line 2319 "y.tab.c"
    break;

  case 122: /* struct_declarator: declarator ':' constant_expression  */
#line 273 "syntaxChecker.y"
                                                { makeList(":", 'p', lineCount); }
#line 2325 "y.tab.c"
    break;

  case 123: /* enum_specifier: ENUM '{' enumerator_list '}'  */
#line 277 "syntaxChecker.y"
                                                        { makeList("enum", 'k', lineCount);}
#line 2331 "y.tab.c"
    break;

  case 124: /* enum_specifier: ENUM IDENTIFIER '{' enumerator_list '}'  */
#line 278 "syntaxChecker.y"
                                                        { makeList("enum", 'k', lineCount); makeList(tablePtr, 'v', lineCount); }
#line 2337 "y.tab.c"
    break;

  case 125: /* enum_specifier: ENUM IDENTIFIER  */
#line 279 "syntaxChecker.y"
                                                        { makeList("enum", 'k', lineCount); makeList(tablePtr, 'v', lineCount); }
#line 2343 "y.tab.c"
    break;

  case 127: /* enumerator_list: enumerator_list ',' enumerator  */
#line 284 "syntaxChecker.y"
                                         { makeList(",", 'p', lineCount); }
#line 2349 "y.tab.c"
    break;

  case 128: /* enumerator: IDENTIFIER  */
#line 288 "syntaxChecker.y"
                                                { makeList(tablePtr, 'v', lineCount); }
#line 2355 "y.tab.c"
    break;

  case 129: /* enumerator: IDENTIFIER '=' constant_expression  */
#line 289 "syntaxChecker.y"
                                                { makeList("=", 'o', lineCount); makeList("tablePtr", 'v', lineCount); }
#line 2361 "y.tab.c"
    break;

  case 130: /* type_qualifier: CONST  */
#line 293 "syntaxChecker.y"
                        { makeList("const", 'k', lineCount); }
#line 2367 "y.tab.c"
    break;

  case 131: /* type_qualifier: VOLATILE  */
#line 294 "syntaxChecker.y"
                        { makeList("volatile", 'k', lineCount); }
#line 2373 "y.tab.c"
    break;

  case 134: /* direct_declarator: IDENTIFIER  */
#line 303 "syntaxChecker.y"
                                                                { makeList(tablePtr, 'v', lineCount); }
#line 2379 "y.tab.c"
    break;

  case 135: /* direct_declarator: '(' declarator ')'  */
#line 304 "syntaxChecker.y"
                                                                { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2385 "y.tab.c"
    break;

  case 136: /* direct_declarator: direct_declarator '[' constant_expression ']'  */
#line 305 "syntaxChecker.y"
                                                                { makeList("[", 'p', lineCount); makeList("]", 'p', lineCount); }
#line 2391 "y.tab.c"
    break;

  case 137: /* direct_declarator: direct_declarator '[' ']'  */
#line 306 "syntaxChecker.y"
                                                                { makeList("[", 'p', lineCount); makeList("]", 'p', lineCount); }
#line 2397 "y.tab.c"
    break;

  case 138: /* direct_declarator: direct_declarator '(' parameter_type_list ')'  */
#line 307 "syntaxChecker.y"
                                                                { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2403 "y.tab.c"
    break;

  case 139: /* direct_declarator: direct_declarator '(' identifier_list ')'  */
#line 308 "syntaxChecker.y"
                                                                { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2409 "y.tab.c"
    break;

  case 140: /* direct_declarator: direct_declarator '(' ')'  */
#line 309 "syntaxChecker.y"
                                                                { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2415 "y.tab.c"
    break;

  case 141: /* pointer: '*'  */
#line 313 "syntaxChecker.y"
                                                { makeList("*", 'o', lineCount); }
#line 2421 "y.tab.c"
    break;

  case 142: /* pointer: '*' type_qualifier_list  */
#line 314 "syntaxChecker.y"
                                                { makeList("*", 'o', lineCount); }
#line 2427 "y.tab.c"
    break;

  case 143: /* pointer: '*' pointer  */
#line 315 "syntaxChecker.y"
                                                { makeList("*", 'o', lineCount); }
#line 2433 "y.tab.c"
    break;

  case 144: /* pointer: '*' type_qualifier_list pointer  */
#line 316 "syntaxChecker.y"
                                                { makeList("*", 'o', lineCount); }
#line 2439 "y.tab.c"
    break;

  case 148: /* parameter_type_list: parameter_list ',' ELLIPSIS  */
#line 327 "syntaxChecker.y"
                                                { makeList(",", 'p', lineCount); makeList("::", 'o', lineCount); }
#line 2445 "y.tab.c"
    break;

  case 150: /* parameter_list: parameter_list ',' parameter_declaration  */
#line 332 "syntaxChecker.y"
                                                   { makeList(",", 'p', lineCount); }
#line 2451 "y.tab.c"
    break;

  case 154: /* identifier_list: IDENTIFIER  */
#line 342 "syntaxChecker.y"
                                                {makeList(tablePtr, 'v', lineCount);}
#line 2457 "y.tab.c"
    break;

  case 155: /* identifier_list: identifier_list ',' IDENTIFIER  */
#line 343 "syntaxChecker.y"
                                                { makeList(tablePtr, 'v', lineCount); makeList(",", 'p', lineCount); }
#line 2463 "y.tab.c"
    break;

  case 161: /* direct_abstract_declarator: '(' abstract_declarator ')'  */
#line 358 "syntaxChecker.y"
                                                                        { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2469 "y.tab.c"
    break;

  case 162: /* direct_abstract_declarator: '[' ']'  */
#line 359 "syntaxChecker.y"
                                                                        { makeList("[", 'p', lineCount); makeList("]", 'p', lineCount); }
#line 2475 "y.tab.c"
    break;

  case 163: /* direct_abstract_declarator: '[' constant_expression ']'  */
#line 360 "syntaxChecker.y"
                                                                        { makeList("[", 'p', lineCount); makeList("]", 'p', lineCount); }
#line 2481 "y.tab.c"
    break;

  case 164: /* direct_abstract_declarator: direct_abstract_declarator '[' ']'  */
#line 361 "syntaxChecker.y"
                                                                        { makeList("[", 'p', lineCount); makeList("]", 'p', lineCount); }
#line 2487 "y.tab.c"
    break;

  case 165: /* direct_abstract_declarator: direct_abstract_declarator '[' constant_expression ']'  */
#line 362 "syntaxChecker.y"
                                                                        { makeList("[", 'p', lineCount); makeList("]", 'p', lineCount); }
#line 2493 "y.tab.c"
    break;

  case 166: /* direct_abstract_declarator: '(' ')'  */
#line 363 "syntaxChecker.y"
                                                                        { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2499 "y.tab.c"
    break;

  case 167: /* direct_abstract_declarator: '(' parameter_type_list ')'  */
#line 364 "syntaxChecker.y"
                                                                        { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2505 "y.tab.c"
    break;

  case 168: /* direct_abstract_declarator: direct_abstract_declarator '(' ')'  */
#line 365 "syntaxChecker.y"
                                                                        { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2511 "y.tab.c"
    break;

  case 169: /* direct_abstract_declarator: direct_abstract_declarator '(' parameter_type_list ')'  */
#line 366 "syntaxChecker.y"
                                                                        { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2517 "y.tab.c"
    break;

  case 174: /* initializer_list: initializer_list ',' initializer  */
#line 377 "syntaxChecker.y"
                                           { makeList(",", 'p', lineCount); }
#line 2523 "y.tab.c"
    break;

  case 181: /* labeled_statement: IDENTIFIER ':' statement  */
#line 390 "syntaxChecker.y"
                                                        { makeList(tablePtr, 'v', lineCount);  }
#line 2529 "y.tab.c"
    break;

  case 182: /* labeled_statement: CASE constant_expression ':' statement  */
#line 391 "syntaxChecker.y"
                                                        { makeList(":", 'p', lineCount); makeList("case", 'k', lineCount);}
#line 2535 "y.tab.c"
    break;

  case 183: /* labeled_statement: DEFAULT ':' statement  */
#line 392 "syntaxChecker.y"
                                                        { makeList(":", 'p', lineCount); makeList("default", 'k', lineCount); }
#line 2541 "y.tab.c"
    break;

  case 192: /* expression_statement: ';'  */
#line 413 "syntaxChecker.y"
                                { makeList(";", 'p', lineCount); }
#line 2547 "y.tab.c"
    break;

  case 193: /* expression_statement: expression ';'  */
#line 414 "syntaxChecker.y"
                                { makeList(";", 'p', lineCount); }
#line 2553 "y.tab.c"
    break;

  case 194: /* selection_statement: SWITCH '(' expression ')' statement  */
#line 419 "syntaxChecker.y"
                                { makeList("switch", 'k', lineCount); makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2559 "y.tab.c"
    break;

  case 195: /* iteration_statement: WHILE '(' expression ')' statement  */
#line 424 "syntaxChecker.y"
                        { makeList("while", 'k', lineCount); makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); }
#line 2565 "y.tab.c"
    break;

  case 196: /* iteration_statement: DO statement WHILE '(' expression ')' ';'  */
#line 426 "syntaxChecker.y"
                        { makeList("do", 'k', lineCount); makeList("while", 'k', lineCount); makeList("(", 'p', lineCount);         				  makeList(")", 'p', lineCount); makeList(";", 'p', lineCount); 
			}
#line 2572 "y.tab.c"
    break;

  case 197: /* jump_statement: GOTO IDENTIFIER ';'  */
#line 431 "syntaxChecker.y"
                                { makeList("goto", 'k', lineCount); makeList(";", 'p', lineCount); makeList(tablePtr, 'v', lineCount);}
#line 2578 "y.tab.c"
    break;

  case 198: /* jump_statement: CONTINUE ';'  */
#line 432 "syntaxChecker.y"
                                { makeList("continue", 'k', lineCount); makeList(";", 'p', lineCount); }
#line 2584 "y.tab.c"
    break;

  case 199: /* jump_statement: BREAK ';'  */
#line 433 "syntaxChecker.y"
                                { makeList("break", 'k', lineCount); makeList(";", 'p', lineCount);}
#line 2590 "y.tab.c"
    break;

  case 200: /* jump_statement: RETURN ';'  */
#line 434 "syntaxChecker.y"
                                { makeList("return", 'k', lineCount); makeList(";", 'p', lineCount);}
#line 2596 "y.tab.c"
    break;

  case 201: /* jump_statement: RETURN expression ';'  */
#line 435 "syntaxChecker.y"
                                { makeList("return", 'k', lineCount); makeList(";", 'p', lineCount);}
#line 2602 "y.tab.c"
    break;


#line 2606 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 455 "syntaxChecker.y"

yyerror()
{
	errorFlag=1;
	fflush(stdout);
	printf("\n%s : %d :Syntax error \n",sourceCode,lineCount);
}
main(int argc,char **argv){
	if(argc<=1){
		
		printf("Invalid ,Expected Format : ./a.out <\"sourceCode\"> \n");
		return 0;
	}
	
	yyin=fopen(argv[1],"r");
	sourceCode=(char *)malloc(strlen(argv[1])*sizeof(char));
	sourceCode=argv[1];
	yyparse();
	
	if(nestedCommentCount!=0){
		errorFlag=1;
    		printf("%s : %d : Comment Does Not End\n",sourceCode,lineCount);
    		
	}
	if(commentFlag==1){
		errorFlag=1;
		printf("%s :					 %d : Nested Comment\n",sourceCode,lineCount);
    	}

	if(!errorFlag){
		
		printf("\n\n\t\t%s Parsing Completed\n\n",sourceCode);
		
		
		FILE *writeParsed=fopen("parsedTable.txt","w");
    		fprintf(writeParsed,"\n\t\t\t\tSymbolTable\n\n\t\tToken\t\t\tType\t\t\t\t\t\t\tLineNumber\n");
      		for(tokenList *ptr=parsedPtr;ptr!=NULL;ptr=ptr->next){
  			fprintf(writeParsed,"\n%20s%30.30s%60s",ptr->token,ptr->type,ptr->line);
		}
		
		
  		FILE *writeSymbol=fopen("symbolTable.txt","w");
    		fprintf(writeSymbol,"\n\t\t\t\tSymbolTable\n\n\t\tToken\t\t\t\t\t\t\tAttributes\n");
      		for(tokenList *ptr=symbolPtr;ptr!=NULL;ptr=ptr->next){
  			fprintf(writeSymbol,"\n%20s%30.30s%60s",ptr->token,ptr->type,ptr->line);
		}
		
		FILE *writeConstant=fopen("constantTable.txt","w");
    		fprintf(writeConstant,"\n   \t\t\t\t\t\t\t\tConstant Table \n\n \t\t\t\t\t\tValue\t\t\t\t\t\t\tLine Number\n");
    		for(tokenList *ptr=constantPtr;ptr!=NULL;ptr=ptr->next)
  		fprintf(writeConstant,"\n%50s%60s",ptr->token,ptr->line);
  	
  	
  		fclose(writeSymbol);
		fclose(writeConstant);
	}
printf("\n\n");	
}

void makeList(char *tokenName,char tokenType, int tokenLine)
{
	char line[39],lineBuffer[19];
	
  	snprintf(lineBuffer, 19, "%d", tokenLine);
	strcpy(line," ");
	strcat(line,lineBuffer);
	char type[20];
	switch(tokenType)
	{
			case 'c':
					strcpy(type,"Constant");
					break;
			case 'v':
					strcpy(type,"Identifier");
					break;
			case 'p':
					strcpy(type,"Punctuator");
					break;
			case 'o':
					strcpy(type,"Operator");
					break;
			case 'k':
					strcpy(type,"Keyword");
					break;
			case 's':
					strcpy(type,"String Literal");
					break;
			case 'd':
					strcpy(type,"Preprocessor Statement");
					break;
	}
	for(tokenList *p=parsedPtr;p!=NULL;p=p->next)
  	 		if(strcmp(p->token,tokenName)==0){
       				strcat(p->line,line);
       				goto xx;
     			}
		tokenList *temp=(tokenList *)malloc(sizeof(tokenList));
		temp->token=(char *)malloc(strlen(tokenName)+1);
		strcpy(temp->token,tokenName);
		strcpy(temp->type,type);
    		strcpy(temp->line,line);
    		temp->next=NULL;
    		
    		tokenList *p=parsedPtr;
    		if(p==NULL){
    			parsedPtr=temp;
    		}
    		else{
    			while(p->next!=NULL){
    				p=p->next;
    			}
    			p->next=temp;
    		}	
    		
	
	xx:
	if(tokenType == 'c')
	{
    		
    		for(tokenList *p=constantPtr;p!=NULL;p=p->next)
  	 		if(strcmp(p->token,tokenName)==0){
       				strcat(p->line,line);
       				return;
     			}
		tokenList *temp=(tokenList *)malloc(sizeof(tokenList));
		temp->token=(char *)malloc(strlen(tokenName)+1);
		strcpy(temp->token,tokenName);
		strcpy(temp->type,type);
    		strcpy(temp->line,line);
    		temp->next=NULL;
    		
    		tokenList *p=constantPtr;
    		if(p==NULL){
    			constantPtr=temp;
    		}
    		else{
    			while(p->next!=NULL){
    				p=p->next;
    			}
    			p->next=temp;
    		}	
    		

	}
	if(tokenType=='v')
	{
    		for(tokenList *p=symbolPtr;p!=NULL;p=p->next)
  	 		if(strcmp(p->token,tokenName)==0){
       				strcat(p->line,line);
       				return;
     			}
		tokenList *temp=(tokenList *)malloc(sizeof(tokenList));
		temp->token=(char *)malloc(strlen(tokenName)+1);
		strcpy(temp->token,tokenName);
		strcpy(temp->type,type);
    		strcpy(temp->line,line);
    		temp->next=NULL;
    		tokenList *p=symbolPtr;
    		if(p==NULL){
    			symbolPtr=temp;
    		}
    		else{
    			while(p->next!=NULL){
    				p=p->next;
    			}
    			p->next=temp;
    		}
	}
}

