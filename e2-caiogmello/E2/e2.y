%{
#include <stdio.h>
#include <stdlib.h>

/* interface to the lexer */
 
extern int yylineno; /* from lexer */
void yyerror(char *s, ...);
int yylex();
%}

/* declare tokens */ 
%token NUMBER
%token ERROR
%token EOL
%token PLUS
%token MINUS
%token TIMES
%token DIV
%token OPENP
%token CLOSEP

%start program

%%
program
: exp EOL { return 1; }
;

/* resposta aqui */

exp: factor | exp PLUS factor { $$ = $1 + $3 ;} | exp MINUS factor { $$ = $1 - $3 ;}  ;
factor: term | factor TIMES term { $$ = $1 * $3 ;} | factor DIV term { $$ = $1 / $3 ;} ;
term: NUMBER | OPENP exp CLOSEP { $$ = $2 ;} ;

%%

