/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

#ifndef YY_YY_BLITE_TAB_H_INCLUDED
# define YY_YY_BLITE_TAB_H_INCLUDED
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
    VOID = 258,                    /* VOID  */
    INT = 259,                     /* INT  */
    BOOL = 260,                    /* BOOL  */
    IF = 261,                      /* IF  */
    ELSE = 262,                    /* ELSE  */
    WHILE = 263,                   /* WHILE  */
    RETURN = 264,                  /* RETURN  */
    TRUE = 265,                    /* TRUE  */
    FALSE = 266,                   /* FALSE  */
    FUNCTION = 267,                /* FUNCTION  */
    PRINT = 268,                   /* PRINT  */
    ID = 269,                      /* ID  */
    NUMBER = 270,                  /* NUMBER  */
    PLUS = 271,                    /* PLUS  */
    MINUS = 272,                   /* MINUS  */
    TIMES = 273,                   /* TIMES  */
    DIVIDE = 274,                  /* DIVIDE  */
    ASSIGN = 275,                  /* ASSIGN  */
    LT = 276,                      /* LT  */
    GT = 277,                      /* GT  */
    LTE = 278,                     /* LTE  */
    EQ = 279,                      /* EQ  */
    NEQ = 280,                     /* NEQ  */
    GTE = 281,                     /* GTE  */
    OPENP = 282,                   /* OPENP  */
    CLOSEP = 283,                  /* CLOSEP  */
    COLON = 284,                   /* COLON  */
    SEMIC = 285,                   /* SEMIC  */
    COMMA = 286,                   /* COMMA  */
    OPENB = 287,                   /* OPENB  */
    CLOSEB = 288,                  /* CLOSEB  */
    QUOTE = 289,                   /* QUOTE  */
    ERROR = 290                    /* ERROR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 18 "/home/caio/Projetos/compiladores/t2-t3-ast-caio-caio-fernando-icaro-luis/T2-T3-AST/src/blite.y"

   int d;
   char *name;
   struct expr *expr;
   struct stmt *stmt;
   struct decl *decl;
   struct type *type;
   struct param_list *param;

#line 109 "blite.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_BLITE_TAB_H_INCLUDED  */