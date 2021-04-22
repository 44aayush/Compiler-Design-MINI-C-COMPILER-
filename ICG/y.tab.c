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
#line 1 "ICG.y"

	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#define LIMIT 1024

//	extern int lineno = 0;
	void yyerror(const char*);
	int yylex();
	int temp_no = 0;
	int label1= 0; //while
	int label= 0; //switch
	int switch_counter=0;
	int case_end=0;
	FILE *outfile;

	void arithmetic_gen(char op[5]);
	void display_stack();
	void label_push1(int label);
	void push(char *);
	char *pop();
	char *top(int off);
	void label_push(int);
	char *label_pop();
    void gen_false_code();
    void gen_true_code();

	typedef struct Stack {
		char *items[LIMIT];
		int top;
	}Stack;
	Stack stack;
	Stack label_stack;


#line 107 "y.tab.c"

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
    PREPROC = 258,                 /* PREPROC  */
    STDIO = 259,                   /* STDIO  */
    MATH = 260,                    /* MATH  */
    STRING = 261,                  /* STRING  */
    IDENTIFIER = 262,              /* IDENTIFIER  */
    INTEGER_LITERAL = 263,         /* INTEGER_LITERAL  */
    FLOAT_LITERAL = 264,           /* FLOAT_LITERAL  */
    STRING_LITERAL = 265,          /* STRING_LITERAL  */
    HEADER_LITERAL = 266,          /* HEADER_LITERAL  */
    CHARACTER_LITERAL = 267,       /* CHARACTER_LITERAL  */
    INC_OP = 268,                  /* INC_OP  */
    DEC_OP = 269,                  /* DEC_OP  */
    LE_OP = 270,                   /* LE_OP  */
    GE_OP = 271,                   /* GE_OP  */
    EQ_OP = 272,                   /* EQ_OP  */
    NE_OP = 273,                   /* NE_OP  */
    LT = 274,                      /* LT  */
    GT = 275,                      /* GT  */
    AND_LOG = 276,                 /* AND_LOG  */
    OR_LOG = 277,                  /* OR_LOG  */
    NOT = 278,                     /* NOT  */
    ADD_ASSIGN = 279,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 280,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 281,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 282,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 283,              /* MOD_ASSIGN  */
    CHAR = 284,                    /* CHAR  */
    INT = 285,                     /* INT  */
    FLOAT = 286,                   /* FLOAT  */
    VOID = 287,                    /* VOID  */
    MAIN = 288,                    /* MAIN  */
    BREAK = 289,                   /* BREAK  */
    SWITCH = 290,                  /* SWITCH  */
    CASE = 291,                    /* CASE  */
    DEFAULT = 292,                 /* DEFAULT  */
    RETURN = 293,                  /* RETURN  */
    SUB = 294,                     /* SUB  */
    ADD = 295,                     /* ADD  */
    MUL = 296,                     /* MUL  */
    DIV = 297,                     /* DIV  */
    MOD = 298,                     /* MOD  */
    STRUCT = 299,                  /* STRUCT  */
    WHILE = 300                    /* WHILE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define PREPROC 258
#define STDIO 259
#define MATH 260
#define STRING 261
#define IDENTIFIER 262
#define INTEGER_LITERAL 263
#define FLOAT_LITERAL 264
#define STRING_LITERAL 265
#define HEADER_LITERAL 266
#define CHARACTER_LITERAL 267
#define INC_OP 268
#define DEC_OP 269
#define LE_OP 270
#define GE_OP 271
#define EQ_OP 272
#define NE_OP 273
#define LT 274
#define GT 275
#define AND_LOG 276
#define OR_LOG 277
#define NOT 278
#define ADD_ASSIGN 279
#define SUB_ASSIGN 280
#define MUL_ASSIGN 281
#define DIV_ASSIGN 282
#define MOD_ASSIGN 283
#define CHAR 284
#define INT 285
#define FLOAT 286
#define VOID 287
#define MAIN 288
#define BREAK 289
#define SWITCH 290
#define CASE 291
#define DEFAULT 292
#define RETURN 293
#define SUB 294
#define ADD 295
#define MUL 296
#define DIV 297
#define MOD 298
#define STRUCT 299
#define WHILE 300

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 37 "ICG.y"

    int ival;
	char string[128];

#line 254 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
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
  YYSYMBOL_PREPROC = 3,                    /* PREPROC  */
  YYSYMBOL_STDIO = 4,                      /* STDIO  */
  YYSYMBOL_MATH = 5,                       /* MATH  */
  YYSYMBOL_STRING = 6,                     /* STRING  */
  YYSYMBOL_IDENTIFIER = 7,                 /* IDENTIFIER  */
  YYSYMBOL_INTEGER_LITERAL = 8,            /* INTEGER_LITERAL  */
  YYSYMBOL_FLOAT_LITERAL = 9,              /* FLOAT_LITERAL  */
  YYSYMBOL_STRING_LITERAL = 10,            /* STRING_LITERAL  */
  YYSYMBOL_HEADER_LITERAL = 11,            /* HEADER_LITERAL  */
  YYSYMBOL_CHARACTER_LITERAL = 12,         /* CHARACTER_LITERAL  */
  YYSYMBOL_INC_OP = 13,                    /* INC_OP  */
  YYSYMBOL_DEC_OP = 14,                    /* DEC_OP  */
  YYSYMBOL_LE_OP = 15,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 16,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 17,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 18,                     /* NE_OP  */
  YYSYMBOL_LT = 19,                        /* LT  */
  YYSYMBOL_GT = 20,                        /* GT  */
  YYSYMBOL_AND_LOG = 21,                   /* AND_LOG  */
  YYSYMBOL_OR_LOG = 22,                    /* OR_LOG  */
  YYSYMBOL_NOT = 23,                       /* NOT  */
  YYSYMBOL_ADD_ASSIGN = 24,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 25,                /* SUB_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 26,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 27,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 28,                /* MOD_ASSIGN  */
  YYSYMBOL_CHAR = 29,                      /* CHAR  */
  YYSYMBOL_INT = 30,                       /* INT  */
  YYSYMBOL_FLOAT = 31,                     /* FLOAT  */
  YYSYMBOL_VOID = 32,                      /* VOID  */
  YYSYMBOL_MAIN = 33,                      /* MAIN  */
  YYSYMBOL_BREAK = 34,                     /* BREAK  */
  YYSYMBOL_SWITCH = 35,                    /* SWITCH  */
  YYSYMBOL_CASE = 36,                      /* CASE  */
  YYSYMBOL_DEFAULT = 37,                   /* DEFAULT  */
  YYSYMBOL_RETURN = 38,                    /* RETURN  */
  YYSYMBOL_SUB = 39,                       /* SUB  */
  YYSYMBOL_ADD = 40,                       /* ADD  */
  YYSYMBOL_MUL = 41,                       /* MUL  */
  YYSYMBOL_DIV = 42,                       /* DIV  */
  YYSYMBOL_MOD = 43,                       /* MOD  */
  YYSYMBOL_STRUCT = 44,                    /* STRUCT  */
  YYSYMBOL_WHILE = 45,                     /* WHILE  */
  YYSYMBOL_46_ = 46,                       /* '('  */
  YYSYMBOL_47_ = 47,                       /* ')'  */
  YYSYMBOL_48_ = 48,                       /* '.'  */
  YYSYMBOL_49_ = 49,                       /* '['  */
  YYSYMBOL_50_ = 50,                       /* ']'  */
  YYSYMBOL_51_ = 51,                       /* '?'  */
  YYSYMBOL_52_ = 52,                       /* ':'  */
  YYSYMBOL_53_ = 53,                       /* '='  */
  YYSYMBOL_54_ = 54,                       /* ','  */
  YYSYMBOL_55_ = 55,                       /* ';'  */
  YYSYMBOL_56_ = 56,                       /* '{'  */
  YYSYMBOL_57_ = 57,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 58,                  /* $accept  */
  YYSYMBOL_headers = 59,                   /* headers  */
  YYSYMBOL_libraries = 60,                 /* libraries  */
  YYSYMBOL_primary_expression = 61,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 62,        /* postfix_expression  */
  YYSYMBOL_unary_expression = 63,          /* unary_expression  */
  YYSYMBOL_unary_operator = 64,            /* unary_operator  */
  YYSYMBOL_multiplicative_expression = 65, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 66,       /* additive_expression  */
  YYSYMBOL_relational_expression = 67,     /* relational_expression  */
  YYSYMBOL_equality_expression = 68,       /* equality_expression  */
  YYSYMBOL_logical_and_expression = 69,    /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 70,     /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 71,    /* conditional_expression  */
  YYSYMBOL_72_1 = 72,                      /* $@1  */
  YYSYMBOL_73_2 = 73,                      /* $@2  */
  YYSYMBOL_assignment_expression = 74,     /* assignment_expression  */
  YYSYMBOL_expression = 75,                /* expression  */
  YYSYMBOL_declaration = 76,               /* declaration  */
  YYSYMBOL_init_declarator_list = 77,      /* init_declarator_list  */
  YYSYMBOL_init_declarator = 78,           /* init_declarator  */
  YYSYMBOL_array = 79,                     /* array  */
  YYSYMBOL_type_specifier = 80,            /* type_specifier  */
  YYSYMBOL_struct_specifier = 81,          /* struct_specifier  */
  YYSYMBOL_struct_declaration_list = 82,   /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 83,        /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 84,  /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 85,    /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 86,         /* struct_declarator  */
  YYSYMBOL_statement = 87,                 /* statement  */
  YYSYMBOL_switch_statement = 88,          /* switch_statement  */
  YYSYMBOL_89_3 = 89,                      /* $@3  */
  YYSYMBOL_90_4 = 90,                      /* $@4  */
  YYSYMBOL_case_statement = 91,            /* case_statement  */
  YYSYMBOL_case_statement_int = 92,        /* case_statement_int  */
  YYSYMBOL_93_5 = 93,                      /* $@5  */
  YYSYMBOL_94_6 = 94,                      /* $@6  */
  YYSYMBOL_case_statement_int1 = 95,       /* case_statement_int1  */
  YYSYMBOL_96_7 = 96,                      /* $@7  */
  YYSYMBOL_97_8 = 97,                      /* $@8  */
  YYSYMBOL_compound_statement = 98,        /* compound_statement  */
  YYSYMBOL_block_item_list = 99,           /* block_item_list  */
  YYSYMBOL_block_item = 100,               /* block_item  */
  YYSYMBOL_expression_statement = 101,     /* expression_statement  */
  YYSYMBOL_while_statement = 102,          /* while_statement  */
  YYSYMBOL_103_9 = 103,                    /* $@9  */
  YYSYMBOL_104_10 = 104,                   /* $@10  */
  YYSYMBOL_105_11 = 105,                   /* $@11  */
  YYSYMBOL_106_12 = 106,                   /* $@12  */
  YYSYMBOL_107_13 = 107,                   /* $@13  */
  YYSYMBOL_translation_unit = 108,         /* translation_unit  */
  YYSYMBOL_external_declaration = 109      /* external_declaration  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  22
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   252

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  116
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  195

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   300


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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      46,    47,     2,     2,    54,     2,    48,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    52,    55,
       2,    53,     2,    51,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    49,     2,    50,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    56,     2,    57,     2,     2,     2,     2,
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
      45
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    70,    70,    71,    75,    76,    77,    81,    82,    83,
      84,    85,    86,    89,    90,    91,    92,    93,    94,    95,
      96,    99,   100,   103,   106,   107,   108,   109,   112,   113,
     114,   117,   118,   119,   120,   121,   124,   125,   126,   130,
     131,   135,   136,   140,   141,   141,   141,   144,   145,   146,
     147,   150,   151,   155,   156,   159,   160,   165,   166,   167,
     172,   173,   177,   178,   179,   180,   181,   184,   185,   186,
     189,   190,   193,   194,   197,   198,   201,   202,   205,   206,
     209,   210,   211,   212,   213,   217,   217,   217,   220,   221,
     225,   225,   226,   226,   229,   229,   230,   230,   234,   235,
     238,   239,   242,   243,   246,   247,   250,   250,   254,   255,
     255,   250,   259,   260,   263,   264,   265
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
  "\"end of file\"", "error", "\"invalid token\"", "PREPROC", "STDIO",
  "MATH", "STRING", "IDENTIFIER", "INTEGER_LITERAL", "FLOAT_LITERAL",
  "STRING_LITERAL", "HEADER_LITERAL", "CHARACTER_LITERAL", "INC_OP",
  "DEC_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "LT", "GT", "AND_LOG",
  "OR_LOG", "NOT", "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "CHAR", "INT", "FLOAT", "VOID", "MAIN", "BREAK", "SWITCH",
  "CASE", "DEFAULT", "RETURN", "SUB", "ADD", "MUL", "DIV", "MOD", "STRUCT",
  "WHILE", "'('", "')'", "'.'", "'['", "']'", "'?'", "':'", "'='", "','",
  "';'", "'{'", "'}'", "$accept", "headers", "libraries",
  "primary_expression", "postfix_expression", "unary_expression",
  "unary_operator", "multiplicative_expression", "additive_expression",
  "relational_expression", "equality_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression", "$@1", "$@2",
  "assignment_expression", "expression", "declaration",
  "init_declarator_list", "init_declarator", "array", "type_specifier",
  "struct_specifier", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "statement", "switch_statement", "$@3", "$@4",
  "case_statement", "case_statement_int", "$@5", "$@6",
  "case_statement_int1", "$@7", "$@8", "compound_statement",
  "block_item_list", "block_item", "expression_statement",
  "while_statement", "$@9", "$@10", "$@11", "$@12", "$@13",
  "translation_unit", "external_declaration", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,    40,    41,    46,    91,
      93,    63,    58,    61,    44,    59,   123,   125
};
#endif

#define YYPACT_NINF (-157)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-45)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      19,    -3,  -157,   -20,  -157,  -157,    -4,  -157,  -157,    -2,
    -157,    15,  -157,  -157,   109,   -25,     5,   141,   -42,  -157,
      18,  -157,  -157,  -157,  -157,  -157,  -157,    46,    29,   141,
    -157,   141,   159,  -157,     2,    70,    73,  -157,    83,  -157,
    -157,    42,   170,  -157,  -157,  -157,    60,  -157,    89,  -157,
      66,  -157,  -157,  -157,  -157,  -157,    16,    16,  -157,    73,
    -157,   128,    40,    73,    79,    55,   209,   130,    97,     7,
    -157,  -157,  -157,    94,  -157,  -157,  -157,   120,  -157,    60,
    -157,  -157,  -157,    37,  -157,  -157,    87,   149,    73,    73,
      73,    73,  -157,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,   112,    90,  -157,   160,
    -157,  -157,   138,  -157,  -157,  -157,  -157,   123,  -157,  -157,
    -157,  -157,  -157,  -157,    73,  -157,  -157,    20,  -157,  -157,
    -157,  -157,  -157,  -157,  -157,    79,    79,    55,    55,    55,
      55,   209,   209,   130,    97,    73,  -157,   164,  -157,  -157,
    -157,  -157,  -157,  -157,   150,    73,    73,   174,    45,   150,
      73,  -157,  -157,  -157,   179,   191,   158,   183,    73,  -157,
      31,  -157,  -157,  -157,   189,    73,  -157,  -157,  -157,   152,
     190,   152,  -157,   192,   152,   152,   152,   193,   152,   186,
     152,   152,   152,  -157,   152
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,    63,    64,    65,    62,     0,   116,   115,     0,
      66,     0,   112,     2,     0,     0,    69,     0,    57,    53,
       0,    55,     1,   113,     4,     5,     6,     0,     0,     0,
      64,    75,     0,    70,     0,     0,     0,    59,     0,    54,
       3,     0,     0,    74,    67,    71,    78,    72,     0,    76,
       0,     7,     8,     9,    10,    12,     0,     0,    23,     0,
      13,    21,    24,     0,    28,    31,    36,    39,    41,    43,
      47,    58,    56,     0,   114,    68,    79,     0,    73,    61,
      19,    20,    51,     0,    17,    18,     0,     0,     0,     0,
       0,     0,    22,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    85,     0,
     104,    98,     0,   102,   103,    83,    80,     0,   100,    81,
      82,    77,    60,    11,     0,    14,    15,     0,    49,    50,
      48,    25,    26,    27,    24,    30,    29,    34,    35,    32,
      33,    37,    38,    40,    42,     0,    84,     0,   106,   105,
      99,   101,    52,    16,    45,     0,     0,     0,     0,   107,
       0,    86,   108,    46,     0,     0,     0,     0,     0,    92,
       0,    88,   109,    90,     0,     0,    96,    87,    89,     0,
       0,     0,    94,     0,   110,     0,    93,     0,     0,     0,
      91,     0,    97,   111,    95
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -157,  -157,  -157,   156,  -157,   -63,  -157,   126,   133,   134,
     136,   142,  -157,  -156,  -157,  -157,   -35,   -45,     6,  -157,
     208,   -19,   188,  -157,   219,   -22,   218,  -157,   173,  -157,
    -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,  -157,
     210,    30,  -115,  -157,  -157,  -157,  -157,  -157,  -157,  -157,
    -157,   241
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,    27,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,   106,   157,    82,   112,   113,    20,
      21,    37,     9,    10,    32,    33,    34,    48,    49,   114,
     115,   147,   164,   170,   171,   180,   174,   178,   187,   183,
     116,   117,   118,   119,   120,   156,   162,   165,   179,   189,
      11,    12
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      92,    71,   151,    16,   163,    18,     8,    35,    13,    46,
      45,    36,   173,    15,    83,    22,    14,     8,     1,   182,
      45,    28,     1,    51,    52,    53,    54,    76,    55,   105,
     131,   132,   133,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   127,     2,     3,     4,     5,     2,     3,
       4,     5,    17,    19,   128,   129,   130,    47,   -44,     6,
     122,    29,    59,     6,    89,    90,    40,   175,   176,   151,
     153,   151,    38,    39,   124,   151,    41,   151,    50,   151,
      51,    52,    53,    54,   123,    55,    56,    57,   177,   152,
      18,   124,   161,    91,    96,    97,    58,   134,    73,   124,
     154,    51,    52,    53,    54,   134,    55,    56,    57,    35,
     158,   159,   134,    24,    25,    26,    79,    58,   104,    59,
      93,    94,    95,     2,    30,     4,     5,    46,   107,   108,
      51,    52,    53,    54,   125,    55,    56,    57,     6,   109,
      59,    84,    85,    77,    78,   146,    58,   102,   103,   110,
      73,   111,     2,    30,     4,     5,   126,   107,   108,    51,
      52,    53,    54,   145,    55,    56,    57,     6,   109,    59,
       2,    30,     4,     5,    86,    58,    87,    88,   110,    73,
     150,     2,    30,     4,     5,     6,   107,   108,     2,    30,
       4,     5,   124,   149,   168,   169,     6,   109,    59,     2,
      30,     4,     5,     6,   124,    31,   148,   110,    73,   184,
     155,   186,    80,    81,     6,   190,    44,    31,   192,    31,
      31,   194,   135,   136,    98,    99,   160,    75,   100,   101,
      31,   137,   138,   139,   140,   166,   141,   142,   167,   172,
     143,   181,   185,   193,   188,   191,    72,   144,    42,    43,
     121,    74,    23
};

static const yytype_uint8 yycheck[] =
{
      63,    36,   117,     7,   160,     7,     0,    49,    11,     7,
      32,    53,   168,    33,    59,     0,    19,    11,     3,   175,
      42,    46,     3,     7,     8,     9,    10,    46,    12,    22,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,    88,    29,    30,    31,    32,    29,    30,
      31,    32,    56,    55,    89,    90,    91,    55,    51,    44,
      79,    56,    46,    44,    24,    25,    20,    36,    37,   184,
      50,   186,    54,    55,    54,   190,    47,   192,     8,   194,
       7,     8,     9,    10,    47,    12,    13,    14,    57,   124,
       7,    54,    47,    53,    39,    40,    23,   160,    56,    54,
     145,     7,     8,     9,    10,   168,    12,    13,    14,    49,
     155,   156,   175,     4,     5,     6,    50,    23,    21,    46,
      41,    42,    43,    29,    30,    31,    32,     7,    34,    35,
       7,     8,     9,    10,    47,    12,    13,    14,    44,    45,
      46,    13,    14,    54,    55,    55,    23,    17,    18,    55,
      56,    57,    29,    30,    31,    32,     7,    34,    35,     7,
       8,     9,    10,    51,    12,    13,    14,    44,    45,    46,
      29,    30,    31,    32,    46,    23,    48,    49,    55,    56,
      57,    29,    30,    31,    32,    44,    34,    35,    29,    30,
      31,    32,    54,    55,    36,    37,    44,    45,    46,    29,
      30,    31,    32,    44,    54,    17,    46,    55,    56,   179,
      46,   181,    56,    57,    44,   185,    57,    29,   188,    31,
      32,   191,    96,    97,    15,    16,    52,    57,    19,    20,
      42,    98,    99,   100,   101,    56,   102,   103,    47,    56,
     104,    52,    52,    57,    52,    52,    38,   105,    29,    31,
      77,    41,    11
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    29,    30,    31,    32,    44,    59,    76,    80,
      81,   108,   109,    11,    19,    33,     7,    56,     7,    55,
      77,    78,     0,   109,     4,     5,     6,    60,    46,    56,
      30,    80,    82,    83,    84,    49,    53,    79,    54,    55,
      20,    47,    82,    84,    57,    83,     7,    55,    85,    86,
       8,     7,     8,     9,    10,    12,    13,    14,    23,    46,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    74,    78,    56,    98,    57,    79,    54,    55,    50,
      61,    61,    74,    75,    13,    14,    46,    48,    49,    24,
      25,    53,    63,    41,    42,    43,    39,    40,    15,    16,
      19,    20,    17,    18,    21,    22,    72,    34,    35,    45,
      55,    57,    75,    76,    87,    88,    98,    99,   100,   101,
     102,    86,    79,    47,    54,    47,     7,    75,    74,    74,
      74,    63,    63,    63,    63,    65,    65,    66,    66,    66,
      66,    67,    67,    68,    69,    51,    55,    89,    46,    55,
      57,   100,    74,    50,    75,    46,   103,    73,    75,    75,
      52,    47,   104,    71,    90,   105,    56,    47,    36,    37,
      91,    92,    56,    71,    94,    36,    37,    57,    95,   106,
      93,    52,    71,    97,    99,    52,    99,    96,    52,   107,
      99,    52,    99,    57,    99
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    58,    59,    59,    60,    60,    60,    61,    61,    61,
      61,    61,    61,    62,    62,    62,    62,    62,    62,    62,
      62,    63,    63,    64,    65,    65,    65,    65,    66,    66,
      66,    67,    67,    67,    67,    67,    68,    68,    68,    69,
      69,    70,    70,    71,    72,    73,    71,    74,    74,    74,
      74,    75,    75,    76,    76,    77,    77,    78,    78,    78,
      79,    79,    80,    80,    80,    80,    80,    81,    81,    81,
      82,    82,    83,    83,    84,    84,    85,    85,    86,    86,
      87,    87,    87,    87,    87,    89,    90,    88,    91,    91,
      93,    92,    94,    92,    96,    95,    97,    95,    98,    98,
      99,    99,   100,   100,   101,   101,   103,   104,   105,   106,
     107,   102,   108,   108,   109,   109,   109
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     4,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     3,     3,     4,     2,     2,     2,
       2,     1,     2,     1,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     0,     0,     7,     1,     3,     3,
       3,     1,     3,     2,     3,     1,     3,     1,     3,     2,
       4,     3,     1,     1,     1,     1,     1,     4,     5,     2,
       1,     2,     2,     3,     2,     1,     1,     3,     1,     2,
       1,     1,     1,     1,     2,     0,     0,     9,     1,     2,
       0,     5,     0,     4,     0,     5,     0,     4,     2,     3,
       1,     2,     1,     1,     1,     2,     0,     0,     0,     0,
       0,    12,     1,     2,     5,     1,     1
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
  case 7: /* primary_expression: IDENTIFIER  */
#line 81 "ICG.y"
                        {push((yyvsp[0].string)); strcpy((yyval.string), (yyvsp[0].string));}
#line 1502 "y.tab.c"
    break;

  case 8: /* primary_expression: INTEGER_LITERAL  */
#line 82 "ICG.y"
                          {push((yyvsp[0].string)); strcpy((yyval.string), (yyvsp[0].string));}
#line 1508 "y.tab.c"
    break;

  case 9: /* primary_expression: FLOAT_LITERAL  */
#line 83 "ICG.y"
                        {push((yyvsp[0].string)); strcpy((yyval.string), (yyvsp[0].string));}
#line 1514 "y.tab.c"
    break;

  case 10: /* primary_expression: STRING_LITERAL  */
#line 84 "ICG.y"
                         {push((yyvsp[0].string)); strcpy((yyval.string), (yyvsp[0].string));}
#line 1520 "y.tab.c"
    break;

  case 11: /* primary_expression: '(' expression ')'  */
#line 85 "ICG.y"
                             {strcpy((yyval.string), (yyvsp[-1].string));}
#line 1526 "y.tab.c"
    break;

  case 12: /* primary_expression: CHARACTER_LITERAL  */
#line 86 "ICG.y"
                        {push((yyvsp[0].string)); strcpy((yyval.string), (yyvsp[0].string));}
#line 1532 "y.tab.c"
    break;

  case 13: /* postfix_expression: primary_expression  */
#line 89 "ICG.y"
                                {strcpy((yyval.string), (yyvsp[0].string));}
#line 1538 "y.tab.c"
    break;

  case 15: /* postfix_expression: postfix_expression '.' IDENTIFIER  */
#line 91 "ICG.y"
                                            {char buff[20];strcpy(buff,(yyvsp[-2].string));strcat(buff,".");strcat(buff,(yyvsp[0].string));strcpy((yyval.string),buff);push(buff);}
#line 1544 "y.tab.c"
    break;

  case 17: /* postfix_expression: postfix_expression INC_OP  */
#line 93 "ICG.y"
                                    {push((yyvsp[-1].string)); push("1"); arithmetic_gen("+"); fprintf(outfile, "%s = %s\n", pop(), pop());}
#line 1550 "y.tab.c"
    break;

  case 18: /* postfix_expression: postfix_expression DEC_OP  */
#line 94 "ICG.y"
                                    {push((yyvsp[-1].string)); push("1"); arithmetic_gen("-"); fprintf(outfile, "%s = %s\n", pop(), pop());}
#line 1556 "y.tab.c"
    break;

  case 19: /* postfix_expression: INC_OP primary_expression  */
#line 95 "ICG.y"
                                    {push((yyvsp[0].string)); push("1"); arithmetic_gen("+"); fprintf(outfile, "%s = %s\n", pop(), pop());}
#line 1562 "y.tab.c"
    break;

  case 20: /* postfix_expression: DEC_OP primary_expression  */
#line 96 "ICG.y"
                                    {push((yyvsp[0].string)); push("1"); arithmetic_gen("-"); fprintf(outfile, "%s = %s\n", pop(), pop());}
#line 1568 "y.tab.c"
    break;

  case 21: /* unary_expression: postfix_expression  */
#line 99 "ICG.y"
                                {strcpy((yyval.string), (yyvsp[0].string));}
#line 1574 "y.tab.c"
    break;

  case 22: /* unary_expression: unary_operator unary_expression  */
#line 100 "ICG.y"
                                          {char temp[5]; strcpy(temp, pop()); push("0"); push(temp); arithmetic_gen((yyvsp[-1].string));}
#line 1580 "y.tab.c"
    break;

  case 25: /* multiplicative_expression: multiplicative_expression MUL unary_expression  */
#line 107 "ICG.y"
                                                         {arithmetic_gen("*");}
#line 1586 "y.tab.c"
    break;

  case 26: /* multiplicative_expression: multiplicative_expression DIV unary_expression  */
#line 108 "ICG.y"
                                                         {arithmetic_gen("/");}
#line 1592 "y.tab.c"
    break;

  case 27: /* multiplicative_expression: multiplicative_expression MOD unary_expression  */
#line 109 "ICG.y"
                                                         {arithmetic_gen("%");}
#line 1598 "y.tab.c"
    break;

  case 29: /* additive_expression: additive_expression ADD multiplicative_expression  */
#line 113 "ICG.y"
                                                            {arithmetic_gen("+");}
#line 1604 "y.tab.c"
    break;

  case 30: /* additive_expression: additive_expression SUB multiplicative_expression  */
#line 114 "ICG.y"
                                                            {arithmetic_gen("-");}
#line 1610 "y.tab.c"
    break;

  case 32: /* relational_expression: relational_expression LT additive_expression  */
#line 118 "ICG.y"
                                                       {arithmetic_gen("<");}
#line 1616 "y.tab.c"
    break;

  case 33: /* relational_expression: relational_expression GT additive_expression  */
#line 119 "ICG.y"
                                                       {arithmetic_gen(">");}
#line 1622 "y.tab.c"
    break;

  case 34: /* relational_expression: relational_expression LE_OP additive_expression  */
#line 120 "ICG.y"
                                                          {arithmetic_gen("<=");}
#line 1628 "y.tab.c"
    break;

  case 35: /* relational_expression: relational_expression GE_OP additive_expression  */
#line 121 "ICG.y"
                                                          {arithmetic_gen(">=");}
#line 1634 "y.tab.c"
    break;

  case 37: /* equality_expression: equality_expression EQ_OP relational_expression  */
#line 125 "ICG.y"
                                                          {arithmetic_gen("==");}
#line 1640 "y.tab.c"
    break;

  case 38: /* equality_expression: equality_expression NE_OP relational_expression  */
#line 126 "ICG.y"
                                                          {arithmetic_gen("!=");}
#line 1646 "y.tab.c"
    break;

  case 40: /* logical_and_expression: logical_and_expression AND_LOG equality_expression  */
#line 131 "ICG.y"
                                                            {arithmetic_gen("&&");}
#line 1652 "y.tab.c"
    break;

  case 42: /* logical_or_expression: logical_or_expression OR_LOG logical_and_expression  */
#line 136 "ICG.y"
                                                             {arithmetic_gen("||");}
#line 1658 "y.tab.c"
    break;

  case 44: /* $@1: %empty  */
#line 141 "ICG.y"
                                         {fprintf(outfile, "ifFalse %s goto L%d\n", pop(), ++label); char temp[5]; sprintf(temp, "t%d", temp_no++); push(temp);}
#line 1664 "y.tab.c"
    break;

  case 45: /* $@2: %empty  */
#line 141 "ICG.y"
                                                                                                                                                                                {gen_true_code();}
#line 1670 "y.tab.c"
    break;

  case 46: /* conditional_expression: logical_or_expression $@1 '?' expression $@2 ':' conditional_expression  */
#line 141 "ICG.y"
                                                                                                                                                                                                                              {gen_false_code();}
#line 1676 "y.tab.c"
    break;

  case 48: /* assignment_expression: unary_expression '=' assignment_expression  */
#line 145 "ICG.y"
                                                      {fprintf(outfile, "%s = %s\n", pop(), pop());}
#line 1682 "y.tab.c"
    break;

  case 49: /* assignment_expression: unary_expression ADD_ASSIGN assignment_expression  */
#line 146 "ICG.y"
                                                             {arithmetic_gen("+"); fprintf(outfile, "%s = %s\n", (yyvsp[-2].string), pop());}
#line 1688 "y.tab.c"
    break;

  case 50: /* assignment_expression: unary_expression SUB_ASSIGN assignment_expression  */
#line 147 "ICG.y"
                                                             {arithmetic_gen("-"); fprintf(outfile, "%s = %s\n", (yyvsp[-2].string), pop());}
#line 1694 "y.tab.c"
    break;

  case 57: /* init_declarator: IDENTIFIER  */
#line 165 "ICG.y"
                     {push((yyvsp[0].string)); strcpy((yyval.string), (yyvsp[0].string));}
#line 1700 "y.tab.c"
    break;

  case 58: /* init_declarator: IDENTIFIER '=' assignment_expression  */
#line 166 "ICG.y"
                                               {push((yyvsp[-2].string));strcpy((yyval.string), (yyvsp[-2].string));fprintf(outfile, "%s = %s\n", pop(), pop());}
#line 1706 "y.tab.c"
    break;

  case 84: /* statement: BREAK ';'  */
#line 213 "ICG.y"
                    {fprintf(outfile," goto %s_%d\n  ",label_stack.items[label_stack.top],switch_counter-1);}
#line 1712 "y.tab.c"
    break;

  case 85: /* $@3: %empty  */
#line 217 "ICG.y"
          {switch_counter++;}
#line 1718 "y.tab.c"
    break;

  case 86: /* $@4: %empty  */
#line 217 "ICG.y"
                                                { label_push(label);label++;}
#line 1724 "y.tab.c"
    break;

  case 87: /* switch_statement: SWITCH $@3 '(' expression ')' $@4 '{' case_statement '}'  */
#line 217 "ICG.y"
                                                                                                      {switch_counter--;fprintf(outfile, " %s_%d :", label_pop(),switch_counter);pop();}
#line 1730 "y.tab.c"
    break;

  case 90: /* $@5: %empty  */
#line 225 "ICG.y"
                              {fprintf(outfile, " L_case%d_%d  : ifFalse %s = %s goto L_case%d_%d \n",label,switch_counter,top(0),pop(),label+1,switch_counter);++label;}
#line 1736 "y.tab.c"
    break;

  case 92: /* $@6: %empty  */
#line 226 "ICG.y"
          {fprintf(outfile, " L_case%d_%d :", label,switch_counter);}
#line 1742 "y.tab.c"
    break;

  case 93: /* case_statement_int: DEFAULT $@6 ':' block_item_list  */
#line 226 "ICG.y"
                                                                                          { fprintf(outfile, " goto %s_%d\n", label_stack.items[label_stack.top],switch_counter-1);}
#line 1748 "y.tab.c"
    break;

  case 94: /* $@7: %empty  */
#line 229 "ICG.y"
                              {fprintf(outfile, " L_case%d_%d  : ifFalse %s = %s goto %s_%d \n ",label,switch_counter,top(0),pop(),label_stack.items[label_stack.top],switch_counter-1);++label;}
#line 1754 "y.tab.c"
    break;

  case 96: /* $@8: %empty  */
#line 230 "ICG.y"
          {fprintf(outfile, " L_case%d_%d :", label,switch_counter);}
#line 1760 "y.tab.c"
    break;

  case 97: /* case_statement_int1: DEFAULT $@8 ':' block_item_list  */
#line 230 "ICG.y"
                                                                                          { fprintf(outfile, " goto %s_%d\n", label_stack.items[label_stack.top],switch_counter-1);}
#line 1766 "y.tab.c"
    break;

  case 106: /* $@9: %empty  */
#line 250 "ICG.y"
          {fprintf(outfile, " L%d :", ++label1);}
#line 1772 "y.tab.c"
    break;

  case 107: /* $@10: %empty  */
#line 250 "ICG.y"
                                                             {fprintf(outfile, "ifFalse %s  goto L%d\ngoto L%d \n", pop(), label1+2, label1+1);
label_push1(label1);
label_push1(label1+2); 
label_push1(label1+1);}
#line 1781 "y.tab.c"
    break;

  case 108: /* $@11: %empty  */
#line 254 "ICG.y"
{ label1 += 2;}
#line 1787 "y.tab.c"
    break;

  case 109: /* $@12: %empty  */
#line 255 "ICG.y"
          {fprintf(outfile, " %s :\n",label_pop());}
#line 1793 "y.tab.c"
    break;

  case 110: /* $@13: %empty  */
#line 255 "ICG.y"
                                                                    {fprintf(outfile, " goto %s\n%s : \n",label_pop(), label_pop());}
#line 1799 "y.tab.c"
    break;


#line 1803 "y.tab.c"

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

#line 267 "ICG.y"

void yyerror(const char *str)
{
	fflush(stdout);
	fprintf(stderr, "%s at line\n", str);
}
int main(){
	stack.top = -1;
	push("$");
	outfile = fopen("output_file.txt", "w");
	if (yyparse() != 0)
	{
		printf("Parse failed\n");
		exit(0);
	}
	printf("success\n");
	int i = 0;
	fclose(outfile);
	system("cat output_file.txt");
	return 0;
}
void push(char *str)
{
	stack.items[++stack.top] = (char*)malloc(LIMIT);
	strcpy(stack.items[stack.top], str);
    //display_stack();
}
char *pop()
{
	if (stack.top <= -1) {
		printf("\nError in evaluating expression\n");
		exit(0);
	}
	char *str = (char*)malloc(LIMIT);
	strcpy(str, stack.items[stack.top--]);
	free(stack.items[stack.top+1]);
    //display_stack();
	return str;
}


char *top(int off)
{
	return stack.items[stack.top-off];
}
void arithmetic_gen(char op[5])
{
	char temp[5];
	sprintf(temp,"t%d",temp_no++);
  	fprintf(outfile,"%s = %s %s %s\n",temp,top(1),op,top(0));
	pop(); pop(); push(temp);
}

void display_stack()
{
	int i;
	for(i=0; i<=stack.top; i++)
		printf("%s ", stack.items[i]);
	printf("\n");
}

void label_push(int label)
{
	
	char temp[5];
	//fprintf(outfile,"LABEL BEFORE PUSH : %s  %d \n",label_stack.items[label_stack.top],label_stack.top);
	sprintf(temp, "L_case%d", label);
	label_stack.items[++label_stack.top] = malloc(LIMIT);
	strcpy(label_stack.items[label_stack.top], temp);
	//fprintf(outfile,"LABEL AFTER PUSH : %s  %d \n",label_stack.items[label_stack.top],label_stack.top);
	
}
void label_push1(int label)
{
	
	char temp[5];
	//fprintf(outfile,"LABEL BEFORE PUSH : %s  %d \n",label_stack.items[label_stack.top],label_stack.top);
	sprintf(temp, "L%d", label);
	label_stack.items[++label_stack.top] = malloc(LIMIT);
	strcpy(label_stack.items[label_stack.top], temp);
	//fprintf(outfile,"LABEL AFTER PUSH : %s  %d \n",label_stack.items[label_stack.top],label_stack.top);
	
}
char *label_pop()
{
	if (label_stack.top <= -1) {
		printf("\nError in evaluating expression\n");
		exit(0);
	}
	//fprintf(outfile,"LABEL BEFORE POP : %s  %d \n",label_stack.items[label_stack.top],label_stack.top);
	char *str = (char*)malloc(LIMIT);
	strcpy(str, label_stack.items[label_stack.top--]);
	free(label_stack.items[label_stack.top+1]);
	//fprintf(outfile,"LABEL AFTER POP : %s  %d \n",label_stack.items[label_stack.top],label_stack.top);
	return str;
}






void gen_true_code()
{
	if (stack.top > -1)
	{
		fprintf(outfile, "%s = %s\ngoto L%d\n", top(0), pop(), label+1);
		label_push(label+1);
		fprintf(outfile, "L%d :\n", label);
		label_push(label+1);
	}
	else
		fprintf(outfile, "%s\ngoto L%d\n", pop(), ++label);
}
void gen_false_code()
{
	if (stack.top > -1)
	{
		fprintf(outfile, "%s = %s\ngoto %s\n", top(0), pop(), label_pop());
		fprintf(outfile, "%s :\n", label_pop());
		label++;
	}
	else
		fprintf(outfile, "%s\ngoto L%d\n", pop(), label-1);
}
